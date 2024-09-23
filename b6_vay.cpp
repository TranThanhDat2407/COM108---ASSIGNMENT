#include<stdio.h>
void chucnang6(){
	printf("\nDAY LA CHUONG TRINH TINH LAI SUAT NGAN HANG VAY TRA GOP\n");
	int kyhan=12,i;
	float laisuat=0.05,lai,goc,sotiencantra,tienvay,tienconlai;
	printf("nhap so tien can vay: \n");
	scanf("%f",&tienvay);
	printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
	goc=tienvay/kyhan;
		for(i=1;i<=kyhan;i++){
			
			lai=tienvay*laisuat;
			sotiencantra=goc+lai;
			tienvay = tienvay-goc;

			printf ("\n%d \t%2.f VND\t%2.f VND\t%2.f VND\t\t%2.f VND", i, lai, goc, sotiencantra, tienvay);
			
		}

	char option;
	do{	      
	printf("\nBan co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		system("cls");
		chucnang6();
		}		
	}while (option != 'n' && option!='y');
		printf("\n");
		}
	

