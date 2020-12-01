#include <stdio.h>
int main(){
	float s=1,n=0;
	for( s=1;s<1001;s++){
		n = n + 1/(s);
	}
	printf("Tong: %f",n);
}
