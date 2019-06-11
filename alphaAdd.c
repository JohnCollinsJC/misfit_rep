#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int len=strlen(s1);
    for(int i=0;i<len;i++){
        printf("%c",s1[i]+(s2[i]-'a'+1));
    }
}
