#include <stdio.h>
int main(){
	int n,s=0;
	printf("Nhap n=");
	scanf("%d",&n);
		for(int i=1;i<n;i++){	
		if(n%i==0){
		printf("%d ",i);
		s+=i;
		}	
	}
	printf("\nTong cac uoc l�: %d",s);
}
