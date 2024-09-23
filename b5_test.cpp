#include<stdio.h>
void chucnang5a(int soTien){
	int  menhGia[9] = {500, 200, 100, 50, 20, 19, 5, 2, 1}, i = 0;
    int soToTien[9] = {0};
	do{
		printf("\nMoi nhap so tien: ");
		scanf ("%d", &soTien);
		}while(soTien <= 0);
	
	
	while (i < 9){//i=0<9
		if (soTien > menhGia[i]){//neu tien > menh gia i hien tai , 500 = 500 khong thoa , 500>200 thoa
			break;//thoat vong lap
		}else{
			i++;// tang so phan tu trong mang,i = 0+1 i=1 trong mang la 200
			}
	}
	
	while ( i < 9){// i=1 => 200
		soToTien[i] = soTien / menhGia[i];//soto[1] = 500/menhgia[1]=500/200=2 vi int chi ra ket qua so nguyen;soto[2]=100/menhgia[2]=100/100=1,soto[3]=0/50=0, soto[4,5,6,7,8]=0
		soTien = soTien % menhGia[i];//tien=500/200=200 du 100; tien= 100/100 du 0 => tien =0
		i++;//i + 1 
		}//i=9 thoat vong lap
	
	printf ("\nDoi duoc:");
	
	for (i=0; i<9; i++){//gan i lai bang 0 de chay vong lap ,i=0<9,i+1
		if (soToTien[i] > 0){//chi in cho den khi gia tri soto > 0, luc nay co soto[1]=2 va soto[2]=1 , menhgia[1]=200 , menhgia[2]=100;
			printf ("\n%d to %d", soToTien[i], menhGia[i]);// in ra soto va menh gia cung 1 phan tu trong mang
			}
			
	}
	char option;
do{	      
	printf("\n\nBan co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		chucnang5a(soTien);
		}		
	}while (option != 'n' && option!='y');
}
