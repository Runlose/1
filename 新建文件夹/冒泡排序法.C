#include<stdio.h>
int main()
{
    int j,x,y;//冒泡排序法
    char a[10]={3,45,33,24,32,13,45,34,12,16};
        for(j=0;j<9;++j)
        {
            for(x=0;x<=9;++x)
            {
                if(a[x]>a[x+1])
                {
                    y=a[x];
                    a[x]=a[x+1];
                    a[x+1]=y;
                }
            }
        }
    for(x=0;x<10;++x)//循环输出
    {
        printf("%d  ",a[x]);
    }
    printf("\n");
    return 0;
}
