#include<stdio.h>
#include<iostream>
void chucnang5() {
	int menhGia[] = {500,200,100,50,20,10,5,2,1}; 
	int soTien = 0;
	int soToTien = 0;
	int max;
	int i=0;
	printf("\nDAY LA CHUC NANG DOI TIEN");
	printf("\nNhap vao so tien can doi (k) : ");
	scanf("%d",&soTien);
	
	do{
	printf("Chon menh gia cao nhat ma ban muon doi\n");
	printf("0.500k,1.200k.2.100k,3.50k,4.20k,5.10k,6.5k,7.2k,8.1k\n");
	scanf("%d",&max);
	}while(soTien < menhGia[max]);// khong cho chon menh gia lon hon so tien
  	
	for(  i = max ; i < 9  ; i++){// so vong lap = voi so gia tri trong menh gia
  	if( soTien <= menhGia[i] && soTien == 500 ){ // neu so tien nho hon cac menh gia thi nhay 1 menh gia 
 		continue; // lap lai vong lap i++
	 }else{
	if ( soTien > 0) { //neu so tien lon hon 0
 	soToTien = soTien / menhGia[i]; //so to tien = so tien chia cho menh gia 
 	soTien = soTien % menhGia[i]; // so Tien = lay so du cua so Tien chia menh gia
 	if( soToTien > 0){// chi in ra so tien lon hon 0
 	printf("%d to %d \n",soToTien,menhGia[i]);
	}
  }
 }
} 	
 char option;
do{	      

	printf("\nBan co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){	
		system("cls");
		chucnang5();
		}		
	}while (option != 'n' && option!='y');


}


