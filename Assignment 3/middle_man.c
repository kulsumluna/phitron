#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) // array er sahajje input niyeci
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) // array er element guloke ascending order ee sajiyeci
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     
        if(n%2==0)
        {
            printf("%d %d",a[(n/2)-1],a[(n/2)]);
        }
        if(n%2!=0)
        {
            printf("%d",a[n/2]);
        }
    
    return 0;
}