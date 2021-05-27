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
        int minIndex = i;
        for(j=i+1;j<numberOfElements;j++)
        {
            count++;
            if(arrList[j] < arrList[minIndex])
                minIndex = j;
        }
        int temp = arrList[i];
        arrList[i] = arrList[minIndex];
        arrList[minIndex] = temp;
    }
    
    printf("\nAfter sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);
    printf("\nTotal number of operations done: %d",count);
}