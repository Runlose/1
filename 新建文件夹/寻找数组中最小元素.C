#include<stdio.h>
int main()//寻找数组中最小的元素的行和列
{
    int i,j,r,c;
    int A[3][4]={{10,9,2,1},{12,1,11,3},{4,13,21,14}};
    int min=A[0][0];
    for(i=0;i<3;++i)//一行或者一列的去和第一个比较哪个最小
    {
        for(j=0;j<4;++j)
        {
            if(A[i][j]<min)
            {
                min=A[i][j];
                r=i+1;
                c=j+1;
            }
        }
    }
    printf("min=%d\n",min);
    printf("row=%d\ncol=%d",r,c);
    return 0;
}