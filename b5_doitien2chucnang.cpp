#include<stdio.h>
#include"b5_test.cpp"
#include"b5_test2.cpp"
void chucnang5(){
	
	int chon;
	int soTien;
	printf("DAY LA CHUC NANG DOI TIEN\n");
	printf("1.auto\n");
	printf("2.ban tu doi\n");
	scanf("%d",&chon);

	switch(chon){
		case 1:
			chucnang5a(soTien);
			break;
		case 2:
			chucnang5b(soTien);
			break;
	}
	

}
