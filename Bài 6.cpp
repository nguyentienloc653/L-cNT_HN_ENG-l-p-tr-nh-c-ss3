#include <stdio.h>
int main (){
	float a, h, s;
  
    printf("Chieu dai canh la ");
    scanf("%f",&a);
    printf("Chieu cao canh la");
    scanf("%f",&h);
	s=0.5*a*h;
	printf("Dien tich hinh tam giac la : %.2f",s);
	return 0;
}

