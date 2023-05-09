#include<stdio.h>
int main()
{
    int a[15]={3,2,1,5,4,7,6,9,10,8,13,67,64,34,76};
    void sort(int array[],int a);
    sort(a,15);
    void print_arr(int arr[],int n);
    print_arr(a,15);
    return 0;
}

void sort(int array[],int a)
{
    int i,j,t;
    for(i=0;i<a-1;++i)
    {
        int min=i;
        for(j=i+1;j<a;++j)
        {
            if(array[min]>array[j])
            {
                min=j;
            }
        }
        t=array[i];array[i]=array[min];array[min]=t;
    }
}

void print_arr(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%d ",arr[i]);
    }
}