#include<stdio.h>
void chucnang4(){
printf("\nDAY LA CHUONG TRINH TINH TIEN DIEN\n");
float b1 = 1.678 , b2 = 1.734, b3 = 2.014, b4 = 2.536, b5 = 2.834, b6 = 2.927,tien;
int skwh;
printf("nhap so kwh: ");
scanf("%d",&skwh);
if (skwh <= 50)
	{
	tien=skwh*b1;
	}
else if(skwh <=100)
	{
	tien=50*b1 + (skwh-50)*b2;
	}
else if(skwh <=200)
	{
	tien=50*b1 + 50*b2 + (skwh-100)*b3;
	}
else if(skwh <=300)
	{
	tien=50*b1 + 50*b2 +100*b3 + (skwh-200)*b4;
	}
else if(skwh <=400)
	{
	tien=50*b1 + 50*b2 + 100*b3+ 100*b4 + (skwh-300)*b5;
	}
else 
	{
	tien=50*b1 + 50*b2 + 100*b3+ 100*b4 + 100*b5+ (skwh-400)*b6;
	
	}
	printf("\ntien dien la: %.3f VND\n\n",tien);
	char option;
	do{	      
	printf("Ban co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		system("cls");
		chucnang4();
		}		
	}while (option != 'n' && option!='y');

}
