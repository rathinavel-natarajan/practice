//string sorting
#include <stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,k=0;
    static char a[100],b[10][10],c[10];
    gets(a);
   /* for(i=0;i<4&&k<strlen(a);i++){
        for(j=0;j<4&&k<strlen(a);j++){
            if(a[k]!=' ') {b[i][j]=a[k]; k++;}
            else { k++; break;}
        }
    }*/
    for(k=0;k<strlen(a);k++){
        if(a[k]!=' ') {
            b[i][j]=a[k]; j++;
        }
        else {
            j=0;i++;
        }
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(strcmp(b[i],b[j])>0){
                strcpy(c,b[i]);
                strcpy(b[i],b[j]);
                strcpy(b[j],c);
            }
        }
    }
    for(i=0;i<4;i++){
        printf("%s\n",b[i]);
    }
   /* printf("\n%s\n",b[0]);
    printf("%s\n",b[1]);
    printf("%s\n",b[2]);
    printf("%s\n",b[3]);
    */
    return 0;
}
