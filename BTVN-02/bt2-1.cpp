#include <stdio.h>

int main() {

    int so; 
    printf("Nhap so: ");
    scanf("%d", &so);

        switch(so) {
            case 2:
            printf("Day la thu Hai");
			break;

            case 3:
			printf("Day la thu Ba");
			break;
			
            case 4:
            printf("Day la thu Tu");
			break;
			case 5:
            printf("Day la thu Nam");
			break;
			
			case 6:
			printf("Day la thu Sau");
			break;

            case 7:
			printf("Day la thu Bay");
			break;

            case 8:
			printf("Day la chu nhat");
			break;
		default:
			printf("Khong phai ngay trong tuan!");
            }

}
