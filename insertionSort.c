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

    for(i=1;i<numberOfElements;i++)
    {
        int key = arrList[i];
        j = i-1;
        while(j>=0 && arrList[j] > key)
        {
            count++;
            arrList[j+1] = arrList[j];
            j--;
        }
        arrList[j+1] = key;
    }
    
    printf("\nAfter sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);
    printf("\nTotal number of operations done: %d",count);
}