#include <stdio.h>
int main (){
	int r;
	scanf("%d", &r);
	float pi = 3.14;
	float chuVi = 2*pi*r;
	float dienTich = pi*r*r;
	printf("Chu vi la: %.2f\n", chuVi);
	printf("Dien tich là: %.2f\n", dienTich);
	return 0;
}
