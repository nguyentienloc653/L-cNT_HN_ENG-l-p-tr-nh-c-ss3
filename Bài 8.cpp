#include <stdio.h>
int main (){
 int nember;
 printf("Nhap vao so nguyen co 4 chu so:");
 scanf("%d",&nember);
 int x = nember/1000;
 int y = (nember%1000)/100;
 int z = (nember%100)/10;
 int v = nember%10;
 int revered = v*1000+z*100+y*10+x;
 printf("So dao nguoc là %d",revered);
 return 0;
}
