#include<stdio.h>

int n;//通过全局变量来控制循环次数

int main()
{
    int a[100]={0};
    void scanf_(int array[]);
    scanf_(a);
    int *pt=a;
    void sort(int *p,int n);
    sort(pt,n);
    void print_(int array[]);
    print_(pt);
    return 0;
}

void sort(int* p,int n)//定义
{
    int t;//定义交换值
    for(int i=0;i<(n-1);++i)//
    {
        int min=i;//定义选择最小值
        for(int j=i+1;j<n;++j)
        {
            if(p[min]>p[j])
            {
                min=j;
            }
        }
        t=p[i];p[i]=p[min];p[min]=t;//交换数值
    }
}

void scanf_(int array[])//定义打印函数
{
    printf("要排序的个数: ");
    scanf("%d",&n);
    printf("输入%d个数:",n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&array[i]);
    }
}

void print_(int *p)//定义打印函数
{
    printf("排序后:");
    for(int i=0;i<n;++i)
    {
        printf("%d ",p[i]);
    }
}