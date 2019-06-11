#include <stdio.h>
#include<string.h>
int main() {
	char s[100];
	scanf("%s",s);
	int n=strlen(s),len=0,i,j,t;
	int a[26],mask=1;
// 	printf("%s",s);
	
	for(i=0;i<n;i++){
	    t=0;
    	for(j=0;j<26;j++)
    	a[j]=0;
	    for(j=i;j<n;j++){
	       // printf("%d ",t);
	        if(a[s[j]-'a']==0){
	            t++;
	            a[s[j]-'a']=1;
	        }
	        else
	            break;
	    }
	    if(t>len)
	    len=t;
	}
	printf("%d",len);
	return 0;
}
