#include <stdio.h>

struct PhanSo {
    int tuso;
    int mauso;
};
struct PhanSo PS;

void Nhap(PhanSo &x) {
    printf("Nhap tu so: ");
    scanf("%d", &x.tuso);
    printf("Nhap mau so: ");
    scanf("%d", &x.mauso);
}

void Xuat(PhanSo x) {
    printf("%d/%d\n", x.tuso, x.mauso);
}

void PhepTinh(PhanSo t1,PhanSo t2) {
	

	
    PhanSo tong, hieu, tich, thuong;
    
    printf("Nhap phan so thu nhat:\n");
    Nhap(t1);
    printf("Nhap phan so thu hai:\n");
    Nhap(t2);
    
	printf("Phan so thu nhat la: ");
    Xuat(t1);
    printf("--------------------\n");
    printf("Phan so thu hai la: ");
    Xuat(t2);

    

    tong.tuso = t1.tuso * t2.mauso + t2.tuso * t1.mauso;
    tong.mauso = t1.mauso * t2.mauso;

    hieu.tuso = t1.tuso * t2.mauso - t2.tuso * t1.mauso;
    hieu.mauso = t1.mauso * t2.mauso;

    tich.tuso = t1.tuso * t2.tuso;
    tich.mauso = t1.mauso * t2.mauso;

    thuong.tuso = t1.tuso * t2.mauso;
    thuong.mauso = t1.mauso * t2.tuso;
    
	printf("--------------------\n");
    printf("Tong hai phan so la: ");
    Xuat(tong);
	printf("--------------------\n");
	
    printf("Hieu hai phan so la: ");
    Xuat(hieu);
	printf("--------------------\n");
	
    printf("Tich hai phan so la: ");
    Xuat(tich);
	printf("--------------------\n");
	
    printf("Thuong hai phan so la: ");
    Xuat(thuong);
}

void chucnang10() {

	PhepTinh(PS,PS);
   
    
  
}

