#include<stdio.h>
#include<ctype.h>
int main(){
	int num;
	scanf("%d",&num);
	if(isdigit(num)){
	if(num==0)
	printf("Zero");
	else if(num>0)
	printf("Positive");
	else
	printf("Negative");
	}
	else
		printf("Invalid Input");
	return 0;
}
