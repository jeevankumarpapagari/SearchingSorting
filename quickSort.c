#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int leftIndex,int rightIndex)
{
    int pivotElement = arr[rightIndex];
    int i = leftIndex - 1, j;

    for(j=leftIndex;j<rightIndex;j++)
    {
        if(arr[j] <= pivotElement)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    } 
    swap(&arr[i+1],&arr[rightIndex]);
    return i+1;
}

void quickSort(int arr[],int leftIndex, int rightIndex)
{
    if(leftIndex < rightIndex)
    {
        int pivotIndex = partition(arr,leftIndex,rightIndex); 
        quickSort(arr,leftIndex,pivotIndex-1);
        quickSort(arr,pivotIndex+1,rightIndex);
    }
}

int main()
{
    int numberOfElements;
    printf("Please enter total number of elements: ");
    scanf("%d",&numberOfElements);

    int arrList[numberOfElements], i, j;
    for(i=0;i<numberOfElements;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arrList[i]);
    }

    printf("Before sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);

    quickSort(arrList,0,numberOfElements-1);
        
    printf("\nAfter sorting, List of elements are: ");
    for(i=0;i<numberOfElements;i++)
        printf("%d ",arrList[i]);
}