#include<stdio.h>

int n;//定义全局变量控制

int main()
{   
    int a[100]={0};//定义空函数
    void scanf_(int array[]);
    scanf_(a);
    int *p=a;
    void convert(int array[],int n);
    convert(p,n);
    void print_(int array[]);
    print_(p);
    return 0;
}

void convert(int array[],int n)//定义交换函数
{
    int t;//定义交换值
    for(int i=0;i<n/2;++i)
    {
        t=array[i];
        array[i]=array[n-(i+1)];
        array[n-(i+1)]=t;
    }
}

void scanf_(int array[])//定义打印函数
{
    printf("输入数组的个数(<100): ");
    scanf("%d",&n);
    printf("输入%d个数:",n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&array[i]);
    }
}

void print_(int array[])//打印函数
{
    printf("交换后的数组:");
    for(int i=0;i<n;++i)
    {
        printf("%d ",array[i]);
    }
}