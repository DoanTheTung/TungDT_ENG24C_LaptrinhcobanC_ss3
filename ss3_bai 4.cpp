#include<stdio.h> 

int main() {
	float toan, van, anh, tong, trungBinh;

    //nhap diem mon Toan, Van, Anh
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Van: ");
    scanf("%f", &van);
    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // tinh diem tong va diem trung bình
    tong = toan + van + anh;
    trungBinh = tong / 3;

    // In ket qua ra man hinh
    printf("Tong diem: %.2f\n", tong);
    printf("diem trung binh: %.2f\n", trungBinh);

	return 0;
}
