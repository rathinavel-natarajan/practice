//sum of prime numbers
#include <stdio.h>

int main()
{
    int n1,n2,i,sum;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++){
        if(prime(i)){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
int prime(int x)
{
    int i,count=0; 
    if(x==1) return 0;
    for(i=2;i<=x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
