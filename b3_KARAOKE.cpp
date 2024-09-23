#include<stdio.h>
#include<locale.h>
void chucnang3(){
	float giovao,giora,thoigianhat,tien;
	printf("\nDAY LA CHUONG TRINH TINH TIEN KARAOKE\n");
	do{	
	printf("nhap gio vao: ");
	scanf("%gh",&giovao);
	}while(giovao<12 || giovao>22);
	
	do{
	printf("nhap gio ra: ");
	scanf("%gh",&giora);
	}while(giora>23 || giora<13);
	
	thoigianhat = giora - giovao;
	printf("%gh thoi gian hat\n",thoigianhat);
	
	if(thoigianhat<=3){
		tien=thoigianhat*150000;
	}
	else{
		tien=(3*15000) + ((thoigianhat-3)*150000*0.7);
	}
	if(giovao>=14 && giovao<=17){
		tien=tien*0.9;
	}
	printf("Thanh Toan: %1.f VND\n",tien);
	char option;
	do{	      
	printf("Ban co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		system("cls");
		chucnang3();
		}		
	}while (option != 'n' && option!='y');
	
}
