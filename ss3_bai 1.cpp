#include<stdio.h> 

int main() {
	 // Khai b�o luu tru ten ng dung
    char name[100];

    // moi nguoi dung dat ten
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    // In ra loi ch�o
    printf("Xin chao %s", name);

	return 0;
}
