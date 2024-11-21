#include<stdio.h> 

int main() {
	float canhDay, chieuCao, dienTich;

    //nhap canh dáy và chieu cao
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);

    // Tính dien tich tam giac
    dienTich = (canhDay * chieuCao) / 2;

    // Hien thi ket qua
    printf("Dien tich cua tam giac là: %.2f\n", dienTich);

	return 0;
}
