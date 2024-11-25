#include <stdio.h>
int main (){

    int x, sum = 0;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &x);
        sum += x % 10;      
        x /= 10;            
        sum += x % 10; 
        x /= 10;            
        sum += x % 10;
        x /= 10;            
        sum += x % 10;
        printf("Tong cac chu so la: %d\n", sum);
    
    return 0;
}
