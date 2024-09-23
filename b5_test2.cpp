#include<stdio.h>
void chucnang5b(int soTien){
back: back1:

		do{
		printf("\nMoi nhap so tien: ");
		scanf ("%d", &soTien);
		}while(soTien <= 0);
		
	int menhGia[9] = {500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 ,1};
	int soToTien[9]={0};
	int i;
 	int tong=0;
	
	for( i=0 ;i < 9; i++){
		if( soTien > 0 ){
		printf("nhap so to tien menh gia %d ban muon:",menhGia[i]);
		scanf("%d",&soToTien[i]);
		
		if(soToTien[i] > 0){
		tong += menhGia[i]*soToTien[i];
		
		}
		if(tong > soTien ){
			printf("Ban nhap qua so tien. moi nhap lai\n");
			goto back;
		}
		if(tong == soTien){
			break;
			}
		}
	}
	
	soTien=soTien - tong;
	if(soTien > 0){
		printf("Ban con du %d. moi nhap lai\n",soTien);
		goto back1;
	}
	
		for (i=0 ; i < 9 ; i++){
		if (soToTien[i] > 0){
			printf ("\n%d to %d", soToTien[i], menhGia[i]);
			}	
		}	   

	char option;
do{	      
	printf("\n\nBan co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		chucnang5b(soTien);
		}		
	}while (option != 'n' && option!='y');
}

