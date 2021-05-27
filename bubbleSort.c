#include<stdio.h>
int main()
{
    int numberOfElements;
    printf("Please enter total number of elements: ");
    scanf("%d",&numberOfElements);

    int arrList[numberOfElements], i, j, count = 0;
    for(i=0;i<numberOfElements;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arrList[i]);
    }
    printf("Before sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);

    for(i=0;i<numberOfElements-1;i++)
    {
        int flag = 1;
        for(j=0;j<numberOfElements-i-1;j++)
        {
            count++;
            if(arrList[j] > arrList[j+1])
            {
                flag = 0;
                int temp = arrList[j];
                arrList[j] = arrList[j+1];
                arrList[j+1] = temp;
            }
        }
        if(flag == 1)
            break;
    }
    printf("\nAfter sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);
    printf("\nTotal number of operations done: %d",count);
}