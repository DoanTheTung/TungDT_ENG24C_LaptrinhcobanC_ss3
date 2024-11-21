#include<stdio.h> 

int main() {
	 // Khai báo luu tru ten ng dung
    char name[100];

    // moi nguoi dung dat ten
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    // In ra loi chào
    printf("Xin chao %s", name);

	return 0;
}
