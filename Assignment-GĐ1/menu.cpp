#include <stdio.h>
#include <math.h>
int main()
{
    printf("\t++--------------MENU---------------------++\n");
    printf("\t| 1. kiem tra so nguyen                   |\n");
    printf("\t| 2. tim uoc chung va boi chung cua 2 so  |\n");
    printf("\t| 3. tinh tien dien cho quan karoke       |\n");
    printf("\t| 4. Tinh tien dien                       |\n");
    printf("\t| 5. chuc nang doi tien                   |\n");
    printf("\t| 6. tinh lai vay ngan hang tra gop       |\n");
	printf("\t| 7. vay tien mua xe                      |\n");
	printf("\t| 8. sap xep thong tin sinh vien          |\n");
	printf("\t| 9. Game FPOLY-LOTT (2/15)               |\n");
	printf("\t| 10. tinh toan phan so                   |\n");
	printf("\t| 11. thoat                               |\n");
	printf("\t++---------------------------------------++\n");
	int chon;
	printf("\nChon mot chuc nang: "); scanf("%d",&chon);
	switch(chon){
    case 1:
        printf("Ban da chon chuc nang kiem tra so nguyen\n");
        break;
    case 2:
        printf("Ban da chon chuc nang tim uoc chung va boi chung\n");
        break;
    case 3:
        printf("Ban da chon chuc nang tinh tien cho karaoke\n");
        break;
    case 4:
        printf("Ban da chon chuc nang tinh tien dien\n");
        break;
    case 5:
        printf("Ban da chon chuc nang doi tien\n");
        break;
    case 6:
        printf("Ban da chon chuc nang tinh lai suat ngan hang\n");
        break;
    case 7:
        printf("Ban da chon chuc nang vay tien mua xe\n");
        break;
    case 8:
        printf("Ban da chon chuc nang sap xep thong tin sinh vien\n");
        break;
    case 9:
        printf("Ban da chon chuc nang game Fpoly\n");
        break;
    case 10:
        printf("Ban da chon chuc nang tinh toan phan so\n");
        break;
    case 11:
        printf("Good bye, see you again");
        break;
    default:
        printf("Nhap sai !...Yeu cau nhap lai");
        break;
	}
return 0;
}
