#include<stdio.h>

void merge(int arr[],int leftIndex,int middleIndex,int rightIndex)
{
    int i, j, k;
    int n1 = middleIndex - leftIndex + 1;//Length of first array
    int n2 = rightIndex - middleIndex;//Length of second array

    int leftArray[n1],rightArray[n2];
    for(i=0;i<n1;i++)
        leftArray[i] = arr[leftIndex+i];
    for(j=0;j<n2;j++)
        rightArray[j] = arr[middleIndex+j+1];
    i = 0; j = 0; k = leftIndex;
    while(i<n1 && j<n2)
    {
        if(leftArray[i] <= rightArray[j])
            arr[k++] = leftArray[i++];
        else
            arr[k++] = rightArray[j++];
    }
    while(i<n1)
        arr[k++] = leftArray[i++];
    while(j<n2)
        arr[k++] = rightArray[j++];
}

void mergeSort(int arr[],int leftIndex,int rightIndex)
{
    if(leftIndex < rightIndex)
    {
        int middleIndex = (leftIndex + rightIndex) / 2;
        mergeSort(arr,leftIndex,middleIndex);
        mergeSort(arr,middleIndex+1,rightIndex);
        merge(arr,leftIndex,middleIndex,rightIndex);//Using this data may be sorted
    }
}

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

    mergeSort(arrList,0,numberOfElements-1);
    
    printf("\nAfter sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);
    printf("\nTotal number of operations done: %d",count);
}