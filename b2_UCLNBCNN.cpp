#include <stdio.h>
int ucln(int x , int y ){
	int sodu=x%y; //18%8 == 2
	 while(sodu!=0){ //sodu=2 !=0
	 	sodu=x%y; //sodu=18%8==2,sodu=8%2==0;
	 	x=y; //x=8,x=2;
	 	y=sodu; //y=2,y=0;
	} //sodu=0 => out while;
	return x; //x=2 tra ve 2 cho UCLN
}
	 

int bcnn(int x, int y){
	return x*y/ucln(x,y);	
}

void chucnang2(){
	int x,y,sodu;
	printf("\nCHUC NANG TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO");
	printf("\nnhap x: ");
	scanf("%d",&x);
	printf("nhap y: ");
	scanf("%d",&y);	
	if(x>1 && y>1){
	ucln(x,y);
	bcnn(x,y);
	printf("UCLN(%d,%d) : %d",x,y,ucln(x,y));
	printf("\nBCNN(%d,%d) : %d\n\n",x,y,bcnn(x,y));
	}else{
	 	printf("nhap lai\n\n");
	 	chucnang2();
		}
	char option;
	do{	      
	printf("Ban co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		system("cls");
		chucnang2();
		}		
	}while (option != 'n' && option!='y');
}
