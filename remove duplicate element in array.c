//remove duplicate element in array
#include <stdio.h>
int b[10],l=1;
int main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    b[0]=a[0];
    for(i=1;i<n;i++){
        pass(a[i]);
    }
   for(i=0;i<l;i++) printf("%d ",b[i]);
    return 0;
}
int pass(int x)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(b[i]==x) return 0;
    }
    b[l++]=x;
    return 0;
}
