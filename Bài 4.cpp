#include <stdio.h>
int main (){
	int x, y, z;
	scanf("%d %d %d", &x,&y,&z);
	int sum = x+y+z;
	float avgPoint=(float)sum/3;
	printf("Tong diem la: %d/n", sum);
	printf("Diem trung binh la: %.2f", avgPoint);
	return 0;
}
