#include<windows.h>
#include<stdio.h>
#include<iostream>
#include"b1_xacdinhsonguyen.cpp"
#include"b2_UCLNBCNN.cpp"
#include"b3_KARAOKE.cpp"
#include"b4_tiendien.cpp"
#include"b5_doitien2chucnang.cpp"
#include"b6_vay.cpp"
#include"b7_tragoppmuaxe.cpp"
#include"b8_hocsinh.cpp"
#include"b9_random.cpp"
#include"b10_PhanSo.cpp"
void thoat1()
{
    system("cls");
    int i;
    char ThankYou[100]     = " ========= Thank You =========\n";
    char SeeYouSoon[100]   = " ========= See You Soon ======\n";
    for(i=0; i<strlen(ThankYou); i++)
    {
        printf("%c",ThankYou[i]);
        Sleep(40);
    }
    for(i=0; i<strlen(SeeYouSoon); i++)
    {
        printf("%c",SeeYouSoon[i]);
        Sleep(40);
    }
    exit(0);
}


	void menuchinh(){
	int chon;
	do{
	system("cls");//xoa log cu
	printf("++----------------------------------------------------------------++");
	printf("\n| Chuc nang so 1: Kiem tra so nguyen                               |");
	printf("\n| Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so        |");
	printf("\n| Chuc nang so 3: Tinh tien cho quan karaoke                       |");
	printf("\n| Chuc nang so 4: Tinh tien dien                                   |");
	printf("\n| Chuc nang so 5: Doi tien                                         |");
	printf("\n| Chuc nang so 6: Tinh lai xuat vay ngan hang vay tra gop          |");
	printf("\n| Chuc nang so 7: Vay tien mua xe                                  |");
	printf("\n| Chuc nang so 8: Sap xep thong tin sinh vien                      |");
	printf("\n| Chuc nang so 9: Game FPOLY-LOTT                                  |");
	printf("\n| Chuc nang so 10: Tinh toan phan so                               |");
	printf("\n| Chon 0 de thoat                                                  |");
	printf("\n++----------------------------------------------------------------++");
	printf("\nXin moi chon chuc nang (1,2,3,4,5,6,7,8,9,10,0): ");
	scanf("%d",&chon);
	
	switch (chon){
		case 1:
			system("cls");
			chucnang1();
		break;
		case 2:
			system("cls");
			chucnang2();
		break;
		case 3:
			system("cls");
			chucnang3();
		break;
		case 4:
			system("cls");
			chucnang4();
		break;
		case 5:
			system("cls");
			chucnang5();
		break;
		case 6:
			system("cls");
			chucnang6();
		break;
		case 7:
			system("cls");
			chucnang7();
		break;
		case 8:
			system("cls");
			chucnang8();
		break;
		case 9:
			system("cls");
			chucnang9();
		break;
		case 10:
			system("cls");
			chucnang10();
		break;
		case 0:
			system("cls");
			thoat1();
		break;
		default:
			printf("chon lai\n\n");
		} 
}while (chon != 0);
	
}
int main(){
	menuchinh();
	return 0;
}

