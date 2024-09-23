#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
char MSSV[10];
char Ten[15];
int i,j;
int TongSinhVien = 0;
bool ChuongTrinhChay = true;
void chucnang8();
void tiepTucHayThoat();
struct ThongTinSinhVien
{
	char MSSV[10];
	char Ten[20];
	int dtb;
	
};
struct ThongTinSinhVien SinhVien[100];


int Trung(char MSSVnhap[300])
{
	int trungMSSV = 0;

    for(int s=0; s<TongSinhVien; s++)
    {
        if(strcmp(MSSVnhap,SinhVien[s].MSSV) == 0)
        {
            trungMSSV++;
        }

    }
	return trungMSSV;   
}

void themSinhVien()
{
    char MSSV[10];
    char Ten[15];
    int dtb;
   
    int MSSVhople = 0;
    while(!MSSVhople)
    {
        printf(" Nhap MSSV: ");
      	getchar();
        gets(MSSV);	
        fflush(stdin);
        if(Trung(MSSV) > 0)
        {
            printf(" MSVV nay da co nguoi su dung .\n\n");
            MSSVhople = 0;
        }
        else if(strlen(MSSV) > 10)
        {
            printf(" MSSV khong duoc qua 10 ky tu.\n\n");
            MSSVhople = 0;
        }
        else if(strlen(MSSV) <= 0)
        {
        	system("cls");
            chucnang8();
        }
        else
        {
            MSSVhople = 1;
        }
    }

    int Tenhople = 0;
    while(!Tenhople)
    {
        printf(" Nhap ho ten: ");
//        scanf("%[^\n]s",&Ten);
        gets(Ten);	
        fflush(stdin);
        if(strlen(Ten) > 15)
        {
            printf(" Ten khong duoc qua 15 ky tu.\n\n");
            Tenhople = 0;
        }
        else if(strlen(Ten) <= 0)
        {
            printf(" Ten khong duoc de trong.\n\n");
            Tenhople = 0;
        }
        else if(strpbrk(Ten, "0123456789") != NULL)
        {
            printf(" Ten khong duoc de so.\n\n");
            Tenhople = 0;
        }
        else
        {
            Tenhople = 1;
        }
    }
    	
	int dtbhople = 0;
    while(!dtbhople)
    {
        printf(" Diem Trung Binh: ");
        scanf("%d",&dtb);
        if(dtb <= 0 || dtb > 10)
        {
            printf(" diem trung binh khong duoc duoi 0 va tren 10.\n\n");
            dtbhople = 0;
        }
        else
        {
            dtbhople = 1;
        }
    }
		
  	strcpy(SinhVien[TongSinhVien].MSSV,MSSV);
  	strcpy(SinhVien[TongSinhVien].Ten,Ten);
  	SinhVien[TongSinhVien].dtb=dtb;
    TongSinhVien++;

    printf("\n Them sinh vien thanh cong.\n\n");
}

void nhapNhieuSinhVien(){
//    int n=0;
//	printf("nhap so luong sinh vien: ");
//	scanf("%d",&n);
	for(;;){
		themSinhVien();
	}	
	

}

void menu()
{
    printf("\n\n***DANH SACH SINH VIEN***\n\n");
    printf("\t MENU\n");
    printf("=======================\n");
    printf("[1] NHAP NHIEU SINH VIEN.\n");
    printf("[2] THEM 1 SINH VIEN.\n");
    printf("[3] HIEN THI TAT CA SINH VIEN.\n");
    printf("[4] TIM KIEM SINH VIEN.\n");
    printf("[5] SUA THONG TIN SINH VIEN.\n");
    printf("[6] SAP XEP SINH VIEN THEO DIEM TRUNG BINH TU NHO DEN LON.\n");
    printf("[7] XOA 1 SINH VIEN.\n");
    printf("[8] XOA TAT CA SINH VIEN.\n");
    printf("[9] TIM KIEM THEO TEN.\n");
    printf("[0] THOAT CHUONG TRINH.\n");
    printf("=======================\n");
    printf("CHON: ");
} 

void thoat()
{
    system("cls");
    int i;
    char ThankYou[100]     = " ========= Thank You =========\n";
    char SeeYouSoon[100]   = " ========= See You Soon ======\n";
    for(i=0; i<strlen(ThankYou); i++)
    {
        printf("%c",ThankYou[i]);
        Sleep(40);
    }
    for(i=0; i<strlen(SeeYouSoon); i++)
    {
        printf("%c",SeeYouSoon[i]);
        Sleep(40);
    }
    exit(0);
}



void hienThiTatCa()
{
//   printf("|==========|====================|==============================|====================|=============|\n");
    printf("%5s %10s %20s %20s %20s","STT","MSSV","HO TEN","DIEM","HOCLUC");
//    printf("|==========|====================|==============================|====================|=============|\n");

    for(i=0; i<TongSinhVien; i++)
    {
    	
        printf("\n");
		printf("%3d",i+1);
//		printf("|");
        printf("%14s",SinhVien[i].MSSV);
        
//		printf("|");
        
		printf("%24s",SinhVien[i].Ten);
    	
//        printf("|");
        printf("%14d",SinhVien[i].dtb);
        
//        printf("|");
    	if(SinhVien[i].dtb >=9){
		printf("%21s","xuat sac");
		}
		else if(SinhVien[i].dtb >=8.0 && SinhVien[i].dtb<9.0){
		printf("%21s","gioi");
		}
		else if(SinhVien[i].dtb >=6.5 && SinhVien[i].dtb<8.0){
		printf("%21s","kha");
		}
		else if(SinhVien[i].dtb >=5.0 && SinhVien[i].dtb<6.5){
		printf("%21s","trung binh");
		}
		else if(SinhVien[i].dtb < 5.0){
		printf("%21s","yeu");
		}
	
   }
        printf("\n");
//        printf("|----------|--------------------|------------------------------|--------------------|-------------|\n");

    
    printf("\n");
}   

int timKiem(char MSSV[10])
{
    system("cls");
    int  ViTriSinhVien = -1;

    int i;
    for(i=0; i<TongSinhVien; i++)
    {
        if(strcmp(MSSV,SinhVien[i].MSSV) == 0)
        {
            ViTriSinhVien = i;
            printf("\n Tim thay 1 sinh vien co ma so: %s\n\n",MSSV);
            printf(" Thong tin sinh vien\n");
            printf("-------------------------\n");

            printf(" MSSV: %s\n",SinhVien[i].MSSV);
            printf(" Ten: %s\n",SinhVien[i].Ten);
            printf(" Diem Trung Binh: %d\n",SinhVien[i].dtb);
            printf(" Hoc Luc: ");
          	 if(SinhVien[i].dtb >=9){
			printf("xuat sac");
			}
			else if(SinhVien[i].dtb >=8.0 && SinhVien[i].dtb<9.0){
			printf("gioi");
			}
			else if(SinhVien[i].dtb >=6.5 && SinhVien[i].dtb<8.0){
			printf("kha");
			}
			else if(SinhVien[i].dtb >=5.0 && SinhVien[i].dtb<6.5){
			printf("trung binh");
			}
			else if(SinhVien[i].dtb < 5.0){
			printf("yeu");
		}
        }
    }
    printf("\n");
    return ViTriSinhVien;
}

void timKiemTen()
{  
	char Ten[10];
	printf("\n\t\t **** Tim Kiem Sinh Vien Theo Ten ****\n\n");
    printf(" Nhap ten: ");
    scanf("%s",&Ten);
	char *contro;
    int i;
    for(i=0; i<TongSinhVien; i++)
    {
        contro = (strstr(SinhVien[i].Ten,Ten));
        if(contro != NULL)
        {
        	
//            ViTriSinhVien = i;
            printf("\n Tim thay 1 sinh vien co ten : %s\n\n",Ten);
            printf(" Thong tin sinh vien\n");
            printf("-------------------------\n");

            printf(" MSSV: %s\n",SinhVien[i].MSSV);
            printf(" Ten: %s\n",SinhVien[i].Ten);
            printf(" Diem Trung Binh: %d\n",SinhVien[i].dtb);
            printf(" Hoc Luc: ");
          	 if(SinhVien[i].dtb >=9){
			printf("xuat sac");
			}
			else if(SinhVien[i].dtb >=8.0 && SinhVien[i].dtb<9.0){
			printf("gioi");
			}
			else if(SinhVien[i].dtb >=6.5 && SinhVien[i].dtb<8.0){
			printf("kha");
			}
			else if(SinhVien[i].dtb >=5.0 && SinhVien[i].dtb<6.5){
			printf("trung binh");
			}
			else if(SinhVien[i].dtb < 5.0){
			printf("yeu");
			printf("\n");
		}
        }
    }
    printf("\n");
    
}

void suaThongTinSinhVien(int i)
{
    printf("\n\t\t **** Sua Thong Tin Sinh Vien ****\n\n");
//	char MSSVMoi[10];
    char TenMoi[20];
    int dtbMoi;
    
//   	int MSSVhople = 0;
//    while(!MSSVhople)
//    {
//        printf(" Nhap MSSV (Nhap 0 de bo qua): ");
//        scanf("%s",&MSSVMoi);
//        if(Trung(MSSVMoi,MSSV) > 0)
//        {
//            printf(" MSVV nay da co nguoi su dung .\n\n");
//            MSSVhople = 0;
//        }
//        else if(strlen(MSSVMoi) > 10)
//        {
//            printf(" MSSV khong duoc qua 10 ky tu.\n\n");
//            MSSVhople = 0;
//        }
//        else if(strlen(MSSVMoi) <= 0)
//        {
//            printf(" Ten khong duoc de trong.\n\n");
//            MSSVhople = 0;
//        }
//        else
//        {
//            MSSVhople = 1;
//        }
//    }
    
    int TenHopLe = 0;
    while(!TenHopLe)
    {
        printf(" Nhap Ten Moi (Nhap 0 de bo qua): ");
        scanf(" %[^\n]s",&TenMoi);
        if(strlen(TenMoi) > 15)
        {
            printf(" TEN KHONG DUOC QUA 15 KY TU.\n\n");
            TenHopLe = 0;
        }
        else if(strlen(TenMoi) <= 0)
        {
            printf(" TEN KHONG DUOC DE TRONG.\n\n");
            TenHopLe = 0;
        }
        else
        {
            TenHopLe = 1;
        }
    }
		int dtbhople = 0;
    while(!dtbhople)
    {
        printf(" Diem Trung Binh Moi: ");
        scanf("%d",&dtbMoi);
        if(dtbMoi <= 0 || dtbMoi > 10)
        {
            printf(" diem trung binh khong duoc duoi 0 va tren 10.\n\n");
            dtbhople = 0;
        }
        else
        {
            dtbhople = 1;
        }
    }
//    if(strcmp(MSSVMoi,"0") != 0)
//    {
//        strcpy(SinhVien[i].MSSV,MSSVMoi);
//    }

    if(strcmp(TenMoi,"0") != 0)
    {
        strcpy(SinhVien[i].Ten,TenMoi);
    }
	
	SinhVien[i].dtb = dtbMoi;
	
    printf(" Sua Thong Tin Thanh Cong.\n\n");

}

void sapXep(){
	struct ThongTinSinhVien temp;
	for(i=0;i<TongSinhVien-1;i++){		
		for(j=i+1;j<TongSinhVien;j++){
		if(SinhVien[i].dtb < SinhVien[j].dtb){
			temp = SinhVien[i];
			SinhVien[i] = SinhVien[j];
			SinhVien[j] = temp;
			}
		}
	}
}

void xoa1SinhVien(int ViTriSinhVien)
{
	
    for(i=0; i<TongSinhVien-1; i++)
    {
        if(i>=ViTriSinhVien)
        {
            SinhVien[i] = SinhVien[i+1];
        }
    }
    TongSinhVien--;
    printf(" Xoa Thong Tin Sinh Vien Thanh Cong.\n\n");
    
}

void xoaTatCaSinhVien()
{
    TongSinhVien = 0;
    printf("Xoa Tat Ca Sinh Vien Thanh Cong.\n\n");
   
}




//void DataRac()
//{
//
//    strcpy(SinhVien[0].MSSV,"PS37451");
//    strcpy(SinhVien[0].Ten,"Tran Thanh Dat");
//    SinhVien[0].dtb=1;
//	
//	strcpy(SinhVien[1].MSSV,"PS37452");
//    strcpy(SinhVien[1].Ten,"Nguyen Nhat Hao");
//    SinhVien[1].dtb=6;
//    strcpy(SinhVien[2].MSSV,"PS37453");
//    strcpy(SinhVien[2].Ten,"Nguyen Tan Duy");
//    SinhVien[2].dtb=9;
//    TongSinhVien = 3;
//  
//}
void chucnang8(){
//	ChuongTrinhChay = true;
//	DataRac();
	menu();
	 while(ChuongTrinhChay){
	 
	int chon;
        scanf("%d",&chon);
        switch(chon)
        {
        case 0:
            ChuongTrinhChay = false ;
            break;
        case 1:
        	system("cls");
        	printf("\n\t\t **** Nhap Sinh Vien ****\n\n");
        	nhapNhieuSinhVien();
        	tiepTucHayThoat();
        	break;
   		case 2:
            system("cls");
            printf("\n\t\t **** Them Sinh Vien ****\n\n");
            themSinhVien();
            tiepTucHayThoat();
            break;
        case 3:
        	system("cls");
        	hienThiTatCa();
        	tiepTucHayThoat();
        	break;
        case 4:
        {
            system("cls");
            printf("\n\t\t **** Tim Kiem Sinh Vien ****\n\n");
            printf(" Nhap MSSV: ");
            scanf("%s",&MSSV);
            if(timKiem(MSSV)<0)
            {
                printf(" Khong tim thay\n\n");
            }
            printf("\n");
            tiepTucHayThoat();
            break;
   		}
   		case 5:
			{
            system("cls");
            printf("\n\t\t **** Sua Thong Tin Sinh Vien ****\n\n");
            printf(" Nhap MSSV: ");
            scanf("%s",MSSV);
            int i = timKiem(MSSV);

            if(i>=0)
            {
                suaThongTinSinhVien(i);
            }
            else
            {
                printf(" Khong Tim Thay Sinh Vien \n\n");
            }
            tiepTucHayThoat();
            break;
			}
		case 6:
			{
            system("cls");
            printf("\n\t\t **** Sap Xep Sinh Vien ****\n\n");
            sapXep();
            hienThiTatCa();
            tiepTucHayThoat();
            break;
			}
        case 7:
			{
            system("cls");
            printf("\n\t\t **** Xoa Thong Tin 1 Sinh Vien ****\n\n");
            printf(" Nhap MSVV: ");
            scanf("%s",MSSV);

            int ViTriSinhVien = timKiem(MSSV);

            if(ViTriSinhVien>=0)
            {
                char chon;
                getchar();
                printf("\n\n");
                printf(" Ban Co Chac Muon Xoa Thong Tin Sinh Vien Nay? (Y/N): ");
                scanf("%c",&chon);

                if(chon == 'Y' || chon == 'y')
                {
                    xoa1SinhVien(ViTriSinhVien);
					tiepTucHayThoat();
                }
                else
                {
                    printf(" Khong Xoa.\n\n");
                    tiepTucHayThoat();
                }

            }
            else
            {
                printf(" Khong Tim Thay Sinh Vien\n\n");
                tiepTucHayThoat();
            }

            break;
			}
		case 8:
        {
            char chon = 'N';
            getchar();
            system("cls");
            printf("\n\t\t **** Xoa Tat Ca Sinh Vien ****\n\n");

            printf(" Ban Co Muon Xoa Tat Ca Sinh Vien? (Y/N): ");
            scanf("%c",&chon);
            if(chon == 'Y' || chon == 'y')
            {
                xoaTatCaSinhVien();
				tiepTucHayThoat();
            }
            else
            {
                printf(" Khong Xoa.\n\n");
                tiepTucHayThoat();
            }
            break;
        }
        case 9:
        {
            system("cls");
          
           timKiemTen();
            
            tiepTucHayThoat();
            break;
   		}
		}	
   		
 	}
}
	

void tiepTucHayThoat()
{
    getchar();
    char chon;
    printf(" Tro Ve Menu(Bat ky nut nao)? Hoac Thoat(0)?: ");
    scanf("%c",&chon);
    if(chon == '0')
    {
        thoat();
    }
    else
    {
        system("cls");
        menu();
    }
}

