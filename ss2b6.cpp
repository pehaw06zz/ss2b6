#include <stdio.h>
int main(){
	float pi = 3.14;
	// ban kinh hinh tron 
	float bankinh = 10;
	// tinh chu vi hinh tron
	float chuvi = 2 * pi * bankinh;
	// tinh dien tich hinh tron
	float dientich = pi * bankinh*bankinh;
	// in ket qua
	printf (" ban kinh hinh tron la: %.2f\n",bankinh);
	printf (" chu vi hinh tron la: %.2f\n",chuvi);
	printf ("dien tich hinh tron la: %.2f\n",dientich);
	return 0;
}
