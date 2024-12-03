
#include<stdio.h>
int ucln(int a, int b){
int trungGian = b;
    while (b != 0) {
 	b = a % b;
    a = trungGian;
 }
    return a;
}
int main(){
int n, m;
printf("hay nhap vao so thu nhat : ");
scanf("%d", &n);
printf("hay nhap vao so thu nhat : ");
scanf("%d", &m);
if(n<=0 || m<=0){
	printf("moi ban nhap lai du lieu");
	return 1;	
}
printf("uoc chung lon nhat cua %d va %d la: %d", n, m, ucln(n, m));
return 0;
}
