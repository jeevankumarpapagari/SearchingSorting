#include<stdio.h>

int compare(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}

int binarySearch(int arr[],int leftIndex,int rightIndex,int key)
{
    int middleIndex;
    while(leftIndex <= rightIndex)
    {
        middleIndex = (leftIndex + rightIndex) / 2;
        if(arr[middleIndex] == key)         return middleIndex;
        else if(arr[middleIndex] < key)     leftIndex = middleIndex + 1;
        else                                rightIndex = middleIndex - 1; 
    }
    return -1;
}

int main()
{
    int numberOfElements;
    printf("Please enter total number of elements: ");
    scanf("%d",&numberOfElements);

    int arrList[numberOfElements], i;
    for(i=0;i<numberOfElements;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arrList[i]);
    }

    qsort(arrList,numberOfElements,sizeof(int),compare);
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);

    int keyValue;
    printf("\nEnter key value for what you are looking for: ");
    scanf("%d",&keyValue);

    int result = binarySearch(arrList, 0, numberOfElements-1, keyValue);
    if(result == -1)    printf("Element %d was not found",keyValue);
    else                printf("Element %d was found at %d position.",keyValue,result+1);
}