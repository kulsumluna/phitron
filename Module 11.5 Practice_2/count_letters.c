#include<stdio.h>
int main()
{

    int c;
    int count[26]={0};
    while(scanf("%c",&c) != EOF)
    {
        count[c-'a']++;
    }
    for(int i='a';i<='z';i++)
    {
        if(count[i-'a']>0)
        {
            printf("%c : %d\n",i,count[i-'a']);
        }
    }
    return 0;
}