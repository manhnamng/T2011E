#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	
	if(a>=b){
		float x = (float)a/b;
		printf("Ket qua: %f",x);
	}else{
		int y = a*b;
		printf("Ket qua: %d",y);
	}
}
