#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int x=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(i==j) // primary diagonal ee \\ print hobe
            {
                if(i==x) // jodi i x er soman hoi thle X print hobe
                {
                    printf("X");
                    continue;
                }
                else
                {
                    printf("\\");
                    continue;
                }
            }
            if(i+j==n-1)
            {
                printf("/");
                continue;
            }
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}