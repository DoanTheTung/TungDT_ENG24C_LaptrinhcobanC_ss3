#include<stdio.h> 

int main() {
	float r, circumference, area;
	const float PI = 3.14;

    //nhap ban kinh hinh tron
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);

    // Tinh chu vi và dien tich hinh tron
    circumference = 2 * PI * r;
    area = PI * r * r;

    // In ket qua ra man hinh
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

	return 0;
}
