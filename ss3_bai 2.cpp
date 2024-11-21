#include<stdio.h> 

int main() {
	float celsius, fahrenheit;
	//yeu cau nguoi dung nhap nhiet do celsius
	printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
    //xu ly chuyen doi tu Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
	// Hien thi ket qua ra man hinh
    printf("%.2f°C bang %.2f°F\n", celsius, fahrenheit);
	return 0;
}
