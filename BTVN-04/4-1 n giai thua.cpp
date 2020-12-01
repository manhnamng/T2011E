#include <stdio.h>
int main(){
	int n,x; 
    printf("Nhap n=");
    scanf("%d",&n);
	for( x=1;n>1;n-- ){
		x = x*n;
	}
	printf("so giai thua: %d",x);
}
