#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
 int s=sum(a,b);
 printf("%d",s);
    return 0;
}