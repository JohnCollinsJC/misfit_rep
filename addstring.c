
#include <string.h>
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s",str1,str2);
    
    int len=strlen(str1);
    char str3[len];
    
    for(int i=0; i<len; i++){
        str3[i]=(str1[i]-'a'+str2[i]-'a')%26+'b';
    }
    str3[len]='\0';
    printf("%s",str3);
    
    return 0;
}
