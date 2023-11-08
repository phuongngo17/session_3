#include<stdio.h>
int main(){
	float diem_toan,diem_anh,diem_van;
	printf("nhap diem mon toan:   ");
	scanf("%f",&diem_toan);
	printf("nhap diem mon anh:   ");
	scanf("%f",&diem_anh);
	printf("nhap diem mon van:   ");
	scanf("%f",&diem_van);
	float tong_diem,diem_trung_binh;
    tong_diem = diem_toan + diem_anh + diem_van;
    printf("tong diem la: %.2f\n",tong_diem);
    diem_trung_binh = tong_diem / 3;
    printf("diem trung binh: %.2f",diem_trung_binh);
}
