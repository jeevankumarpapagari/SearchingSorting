#include<stdio.h>

int linearSearch(int arr[],int n,int k)
{
    int i,count = 0;
    for(i=0;i<n;i++)
        if(arr[i] == k)
            return i;
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

    int keyValue;
    printf("\nEnter key value for what you are looking for: ");
    scanf("%d",&keyValue);

    int result = linearSearch(arrList, numberOfElements, keyValue);
    if(result == -1)    printf("Element %d was not found",keyValue);
    else                printf("Element %d was found at %d position.",keyValue,result+1);
}