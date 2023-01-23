#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,m,x,i,row,column,count=0;
        scanf("%lld%lld%lld",&n,&m,&x);
        if(n==1)
        {
            printf("%d\n",x);
        }
        else if(m==1)
        printf("%d\n",x);
        else{
        row=x%n;
        column=x/n;
        count=m*(row-1)+column+1;
        if(row==0){
            row=x/n;
            count=m*(row-1)+column+1;
        printf("%lld\n",count-1);
    }
    else
        printf("%lld\n",count);
    }    }
    return 0;
}
