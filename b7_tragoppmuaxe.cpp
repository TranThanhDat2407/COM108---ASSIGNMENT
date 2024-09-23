#include <stdio.h>

int TinhVayTraGop(float phanTramVay) {
	double phanTramTraTruoc = (100 - phanTramVay) / 100;
	double soTien = 500000000;
	double laiHangThang = 0.072;
	int thoiHan = 288;
	
	double soTienTraTruoc = soTien * phanTramTraTruoc;
	
	soTien = soTien - soTienTraTruoc;
	printf("So tien vay: %1.f\n",soTien);
	
	double traHangThang = soTien / thoiHan;	
	
	printf("So tien tra truoc: %1.f\n", soTienTraTruoc);
	printf("So tien phai tra hang thang\n");
	printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai | \n");
	
	int i = 1;
	while (i<=thoiHan) {
		double traLai = soTien * laiHangThang;
		double tongPhaiTra = traLai + traHangThang;
		soTien = soTien - traHangThang;
		
		printf("  %d\t %.2lf\t %.2lf\t %.2lf\t   %.2lf\n", i, traLai, traHangThang, tongPhaiTra, soTien);
		
		i++;
	}
}

int chucnang7() {
	float phanTramVay;
	printf("Nhap vao phan tram vay: ");
	scanf("%f", &phanTramVay);
	
	TinhVayTraGop(phanTramVay);
	
char option;
	do{	      
	printf("\nBan co muon tiep tuc: Y/N \n");    
	scanf(" %c", &option);	
		if(option == 'y'){
		chucnang7();
		}		
	}while (option != 'n' && option!='y');
	
	return 0;
}
