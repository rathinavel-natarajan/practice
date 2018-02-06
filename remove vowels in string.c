//remove vowels in string
#include <stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[100];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
        printf("%c",a[i]);
    }
    return 0;
}
