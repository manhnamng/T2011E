#include<stdio.h>
int main()
{
	int s=0,n,i;
	for(i=1;i<=200;i++)
	   {
	   	n=i%2;
	   	if(n!=0)
	    s+=i;
	   }
	printf("%d",s);   	
}
