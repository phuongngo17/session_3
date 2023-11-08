#include<stdio.h>
int main(){
	int r ;
	printf("nhap vao ban kinh: ");
	scanf("%d", &r);
	const float PI = 3.14;
	float chu_vi = 2*PI*r;
	float dien_tich = PI*r*r;
	printf("chu vi la: %.1f\n", chu_vi);
	printf("dien tich la: %.1f", dien_tich);
} 
