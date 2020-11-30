#include <stdio.h>
#include <math.h>
int main() {
	
	float n,x=0; 
    printf("Nhap so tien gui ngan hang=");
	scanf(" %fl",&n);
	x=n + n*8/100;
	if(n!=0){
		x=x + x*8/100;
	}
		if(n!=0){
		x=x + x*8/100;
		}
			if(n!=0){
			x=x + x*8/100;
			}
	printf("Tong so tien thu duoc sau 4 nam: %fl",x);
}


