#include<stdio.h>
int main(){
 int n,min,x=0;
 printf("nhap so phan tu :");scanf("%d",&n);
 int a[n];
 for(int i=1;i<=n;i++){
 	printf("a[%d]= ",i);
 	scanf("%d",&a[i]);
 }
 for(int i=1;i<=n;i++){
 	if(a[i]>0){
 		min=a[i];
 		break;
	}
 }
 for(int i=1;i<=n;i++){
 	if(a[i]<=min&&a[i]>0){
 		min=a[i];
 		x=1;
	}
 }
 if(x==0){
   printf("Khong co so duong");
 }
 else
 {
   printf("%d la so duong nho nhat",min);
 }
   
}

