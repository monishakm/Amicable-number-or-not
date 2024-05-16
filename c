#include<stdio.h>
int main()
{
    
    int n1,n2,f1=0,f2=0;
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0)
        {
            f1+=i;
        }
    }
    for(int j=1;j<=n2;j++)
    {
        if(n2%j==0)
        {
            f2+=j;
        }
    }
    if(f1==f2 && f2==f1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
