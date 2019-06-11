#include <stdio.h>

int main(void) {
	char a[100],temp[100];
	int n,k=0;
	scanf("%s %d",a,&n);
	int i,j,l=strlen(a);
	for(i=0;i<l;i++)
	{
		int f=0;
		for(j=i+1;j<l;j++)
		{
			if(a[i]>=a[j])
			{
				n--;
				if(n==-1)
				break;
				f=1;
			a[i]=']';
			break;
			}
		}
		if(f==0)
			temp[k++]=a[i];
	}
	temp[k]='\0';
	int t=atoi(temp);
	printf("%d",t);
	return 0;
}
