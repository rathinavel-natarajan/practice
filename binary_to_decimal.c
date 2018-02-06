//binary to decimal
#include <stdio.h>
#include<math.h>
int main()
{
    static int n,x,sum,i;
    scanf("%d",&n);
    while(n!=0){
        x=n%10;
       // sum=(x*(2^i))+sum;
       if(x==1) sum=sum+pow(2,i);
        i++;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
