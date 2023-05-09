#include<stdio.h>
int main()
{
    float a[][4]={{0},//定义第一行为空的矩阵
               {90,99,100,98},
               {80,87,90,81},
               {65,67,70,60},
               {100,100,100,100}};
    void aver(float array[][4], double n);
    aver(a,4);
    void print_aver(float array[][4], int a);
    print_aver(a,4);
    return 0;
}

void aver(float array[][4], double n)    //定义函数使每列加和的平均值放在第一列的相应位置
{
    int  i,m=4;//
    double t=0;
    for(i=0;i<m;++i)      
    {
        for(int x=1;x<=m;++x)// 
        {
            t+=array[x][i];
        }
        array[0][i]=t/n;
        t=0;
    }
}

void print_aver(float array[][4], int a)    //定义打印函数
{
    printf("aver=");
    for(int i=0;i<a;++i)     
    {
        printf("%5.3f  ",array[0][i]);
    }
}