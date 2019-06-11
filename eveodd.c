#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	char *end;
	char str[100];
	scanf("%s",str);
	n= strtol(str, &end, 10);
	if(*end==0){
	    if(n<0)
	    printf("invalid");
	    else if(!(n%2))
	    printf("Even");
	    else
	    printf("Odd");
	}
	else
	printf("invalid");
//  	printf(" %d %d",n,*end);
	return 0;
}
