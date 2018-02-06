//print pattern
#include <stdio.h>

int main()
{
    int i,j,l;
    char a[10];
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++){
        for(j=0;j<l-i;j++){
            printf("%c ",a[j]);
        }
        for(j=0;j<2*i-1;j++){
            printf("  ");
        }
        if(i==0){
            for(j=l-i-1;j>=0;j--){
            printf("%c ",a[j-1]);
        }
        }else {
        for(j=l-i;j>=0;j--){
            printf("%c ",a[j-1]);
        }}
        printf("\n");
    }
    return 0;
}
