#include <stdio.h>
#include <stdlib.h>
// Selection Sort Algorithm

void print_array(int *arr,int size)
{
    printf("the array : ");
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void Sorter_swap(int *a,int *b)
{
    int temp=(*a);
    (*a)=(*b);
    (*b)=temp;
}


void Bubble_sorting(int *arr,int size)
{
    int i;
    int flag=1;
    while(flag){
        flag=0;
    for(i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
                Sorter_swap(&arr[i],&arr[i+1]);
                flag=1;
        }
    }
}
}

void selection_sorting(int *arr,int size)
{
    int i,j;
    int minimum;
    for(i=0;i<size-1;i++){
        minimum=arr[i];
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                Sorter_swap(&arr[i],&arr[j]);
            }
        }
    }
}

void Insertion_sorting(int *arr,int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                Sorter_swap(&arr[j],&arr[j-1]);
            }
        }
    }
}

void general_sort(int *arr,int size,void (*Sorting_algorithm)(int *,int))
{
    Sorting_algorithm(arr,size);
}
int main()
{
    int arr[7]={15,3,11,2,6,0,11};
    general_sort(arr,7,Insertion_sorting);
    print_array(arr,7);

    return 0;
}
