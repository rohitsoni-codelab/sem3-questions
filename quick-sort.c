#include <stdio.h>
#define max 6

void display(int arr[], int ub);
void swap(int *a, int *b);
int partation(int arr[], int lb, int ub);
void quicksort(int arr[], int lb, int ub);


int main()
{
    int arr[] = {5, 6, 1, 3, 10, 9};
    int ub = max-1;
    int lb = 0;
    display(arr,ub);
    quicksort(arr, lb, ub);
    display(arr,ub);
}

void display(int arr[], int ub)
{
    int i=0;
    while(i<=ub)
    {
        printf("[%d]",arr[i]);
        i++;
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partation(int arr[], int lb, int ub)
{
    int start = lb, end = ub;
    int piv = arr[lb];
    while (start < end)
    {
        while (arr[start] <= piv)
        {
            start++;
        }
        while (arr[end] > piv)
        {
            end--;
        }
        if(arr[start]<arr[end])
        {
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&piv,&arr[end]);
    return end;
}
void quicksort(int arr[], int lb, int ub)
{
    int loc;
    if(lb < ub)
    {
        loc = partation(arr, lb, ub);
        quicksort(arr, lb, loc-1);
        quicksort(arr, loc + 1, ub);
    }
}