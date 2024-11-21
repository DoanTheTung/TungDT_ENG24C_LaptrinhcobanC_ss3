#include<stdio.h> 

int main() {
	// So luong sinh vien
    int soSinhVien = 10;

    // Du lieu sinh vien
    char hoTen[10][50] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C",
        "Nguyen Van D", "Nguyen Van E", "Nguyen Van F",
        "Nguyen Van G", "Nguyen Van H", "Nguyen Van I",
        "Nguyen Van K"
    };
    int tuoi[10] = {20, 21, 18, 19, 22, 21, 23, 19, 18, 21};
    char soDienThoai[10][15] = {
        "0904488481", "0904488482", "0904488483", 
        "0904488484", "0904488485", "0904488486", 
        "0904488487", "0904488488", "0904488489", 
        "0904488480"
    };
    char email[10][50] = {
        "anv@rikkeiacademy.com", "bnv@rikkeiacademy.com", 
        "cnv@rikkeiacademy.com", "dnv@rikkeiacademy.com", 
        "env@rikkeiacademy.com", "fnv@rikkeiacademy.com", 
        "gnv@rikkeiacademy.com", "hnv@rikkeiacademy.com", 
        "inv@rikkeiacademy.com", "knv@rikkeiacademy.com"
    };

    // In tiêu de bang
    printf("DANH SACH SINH VIEN\n");
    printf("+-----+----------------+------+---------------+------------------------+\n");
    printf("| STT | Ho va ten      | Tuoi | So dien thoai | Email                  |\n");
    printf("+-----+----------------+------+---------------+------------------------+\n");

    // In danh sach sinh vien
    for (int i = 0; i < soSinhVien; i++) {
        printf("| %3d | %-14s | %4d | %-13s | %-22s |\n", 
               i + 1, hoTen[i], tuoi[i], soDienThoai[i], email[i]);
    }

    // Ket thuc bang
    printf("+-----+----------------+------+---------------+------------------------+\n");

	return 0;
}
