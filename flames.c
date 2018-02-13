//flames
#include<stdio.h>
#include<string.h>
int main()
{
    static int i,j,k,l1,l2,l3,count,temp,ex;
    static char a[10],b[10],c[20],d[6]={"flames"};
    //gets(a);
    //gets(b);
    scanf("%s%s",a,b);
    l1=strlen(a);//printf("%d\n",l1);
    l2=strlen(b);//printf("%d\n",l2);
    //hint x=strcmp(b,a);printf("%d\n",x);
    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(a[i]==b[j]) {
                a[i]='0';b[j]='0';break;
            }
        } if(a[i]=='0') break;
    }
    for(i=0;i<l1;i++){
        if(a[i]!='0'){
            c[k]=a[i];k++;
        }else{}
    }
    for(j=0;j<l2;j++){
        if(b[j]!='0'){
            c[k]=b[j]; k++;
        }
    }
    //printf("%s\n",c);
    l3=strlen(c);
    //printf("%d\n",l3);
    for(i=0;i<=6;i++){ex++;
            if(i==6) i=0;
            else {}
        if(d[i]==' ') {temp++;//printf(" %d ",temp);
        }
        else {
            count++;//printf(" %d ",count);
            if(count==l3) {d[i]=' '; count=0;}
        }
        if(temp==l3*5) break;
        else {}
    }
   // printf("\n%d\n%s\n%d",ex,d,strlen(d));
   for(i=0;i<6;i++){
    if(d[i]!=' '){
        printf("%c",d[i]);
    }
   }
    return 0;
}
