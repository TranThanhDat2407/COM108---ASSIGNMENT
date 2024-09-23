#include<stdio.h>
void ktsonguyen()
{
	float x;
	printf("nhap vao X can kiem tra: ");
	scanf("%g",&x);
	if(x==(int)x){ // x = x nguyen
		printf("%g la so nguyen\n",x);
	}else{
		printf("%g khong phai la so nguyen\n",x);
	}
}
void ktsochinhphuong()
{
	float x, count=0;
	int i , y;
back1: printf("Nhap vao X can kiem tra: "); 
	scanf("%g",&x); // nhap 16
	y=x;
	if(x == (int) x){ // gan y = x vi float x khong / duoc
	for(i=1;i<y;i++) // i=1 , 1 < 16 , i+1
	{
		if(i * i == x) //gan i=1 vi 0*0=0  i=1*1 != 16 , i=2*2 !=16 , i=3*3 !=9 , i=4*4 =16
		{
		count++; // i=4 , count +1
		break; // ngat vong lap 
 		}
	}
	if(count==0)
		{
		printf("%g khong phai la so chinh phuong\n",x); // khong thoa vi count == 1 
		}
	else
		{
		printf("%g la so chinh phuong\n",x);	// thoa vi count == 1 => 16 la so chinh phuong
		}
	}else{
		printf("\nmoi ban nhap lai so nguyen\n");
		goto back1;
		}
}

void ktsonguyento()
{
	float x, count;
	int i , y;
back:	printf("Nhap vao X can kiem tra: ");
	scanf("%g",&x);
	if(x == (int) x){

	y=x; // gan y=x vi float x khong % duoc
	for(i=2;i<y;i++) //i=2, 2<5 , 2++
	{// gan i = 2 vi so nguyen to bat dau bang so 2 neu nhap x=1 thi 1%1==0 => 1 la so nguyen to la sai
		if(y % i == 0) //5%2!= 0, 5%3=!0,5%4!=0 vi gio i=5 bang voi x nen ngat vong lai
		{
		count++;
		break; // ngat vong lap
 		}
	}
	if(count==0)
		{
		printf("%g la so nguyen to\n",x); // thoa count == 0 => 5 la so nguyen to
		}
	else
		{
		printf("%g khong phai la so nguyen to\n",x);
		}	
		}else{
		printf("\nmoi ban nhap lai so nguyen\n");
		goto back;
		}
}


void chucnang1(){
	int chon;
	char option;
	printf("++-------------------------------------++");
	printf("\n| Chuc nang 1: kiem tra so nguyen       |");
	printf("\n| Chuc nang 2: kiem tra so chinh phuong |");
	printf("\n| Chuc nang 3: kiem tra nguyen to       |");
	printf("\n++-------------------------------------++");
	printf("\nXin moi chon chuc nang (1,2,3): ");
	scanf("%d",&chon);
	switch (chon){
		case 1:
			ktsonguyen();
		break;
		case 2:
			ktsochinhphuong();
		break;
		case 3:
			ktsonguyento();
		break;	
	} 	
	do{	      
	printf("Ban co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		system("cls");
		chucnang1();
		}		
	}while (option != 'n' && option!='y');			
 } 
 


	





