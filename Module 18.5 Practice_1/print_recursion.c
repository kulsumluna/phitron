#include<stdio.h>
void print(int i,int n)
{
    if(i==n+1)
    return;
    printf("I love Recursion\n");
    print(i+1,n);

}
int main()
{

    int n;
    scanf("%d",&n);
    print(1,n);
    return 0;
}