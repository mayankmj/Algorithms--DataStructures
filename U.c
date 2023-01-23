#include <stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int sum=0,sume=0,arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(flag==0){
       sum=sum+arr[i];
       flag=1;
       }
         else{
         sume=sume+arr[i];
         flag=0;
         }
    }
    char c;
    scanf("%ch",&c);
    if(c=='b')
    printf("%d",sum);
    else
    printf("%d",sume);
    return 0;

}