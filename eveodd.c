#include<stdio.h>
#include<ctype.h>
int main(){
	int n;
// 	char *end;
// 	char str[100];
	scanf("%d",&n);
// 	n= strtol(str, &end, 10);
// 	if(isdigit(n)){
	   // printf(".");
	    if(n<0)
	    printf("invalid");
	    else if(!(n%2))
	    printf("Even");
	    else
	    printf("Odd");
// 	}
// 	else
// 	printf("invalid");
//  	printf(" %d",n);
	return 0;
}
