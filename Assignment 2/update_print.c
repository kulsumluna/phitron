#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);

    for(int i=0;i<n;i++)
    {
        if(i==x)
    {
        ar[i]=v;
      
    }
    
    }
while (n--)
    {
        printf("%d ",ar[n]);
    }
    return 0;
}