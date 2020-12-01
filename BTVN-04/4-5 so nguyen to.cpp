#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;
  printf("nhap so nguyen to n :");
  scanf("%d",&n);
  
  for(i=2;i<=sqrt(n);i++)
     {
     	if(n%i==0)
     	  {
     	  	printf("%d khong phai so nguyen to",n);
     	  	return 0;
     	  }
     }
     printf("%d la so nguyen to",n);
	 	
}
