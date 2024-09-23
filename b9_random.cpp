#include<stdio.h>
#include <time.h>
#include <stdlib.h>
void chucnang9(){
	int a, b;
	srand(time(NULL));
	printf("CHUC NANG XO SO \n");
	do{
	printf ("\nMoi nhap 2 so: \n");
	scanf ("%d %d", &a, &b);
	}while (a < 0 || b < 0 || a > 15 || b > 15 || a == b);

	printf ("\nSo ban chon la:  %d %d", a, b);
	 
	printf("\nKet qua so xo la: ");
	
		int random1 = 1+rand() % 15;
		int random2 = 1+rand() % 15;
	
	printf ("%d %d\n", random1, random2);	 	
	
	if ((a == random1 && b == random1) || (a == random2 && b == random1) ){
		printf ("\nChuc mung ban da trung giai nhat\n");
	}
	else if (a == random1 || b == random1 || a == random2 || b == random2 ){
		printf ("\nChuc mung ban da trung giai nhi\n");
	}
	else{
	
	printf ("\nChuc ban may man lan sau\n");
}
char option;
do{	      
	printf("\n\nBan co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		chucnang9();
		}		
	}while (option != 'n' && option!='y');
} 


