#include <stdio.h>

// Khai báo cau trúc sinh viên
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
    char address[50];
};

// Hàm nhap thông tin sinh viên
void nhapThongTin(struct Student *st) {
    printf("Nhap ho va ten: ");
    fgets(st->name, sizeof(st->name), stdin);
    
    printf("Nhap tuoi: ");
    scanf("%d", &st->age);
    
    printf("Nhap so dien thoai: ");
    scanf("%s", st->phoneNumber);
    
    printf("Nhap email: ");
    scanf("%s", st->address);
}

// Hàm xuat thông tin sinh viên
void xuatThongTin(const struct Student *st) {
    printf("Ho va ten: %s", st->name);
    printf("Tuoi: %d\n", st->age);
    printf("So dien thoai: %s\n", st->phoneNumber);
    printf("Email: %s\n", st->address);
}

int main() {
    // Khai báo mot sinh viên
    struct Student st;
    
    // Nhap thông tin sinh viên
    nhapThongTin(&st);
    
    // Xuat thông tin sinh viên ra màn h?nh
    xuatThongTin(&st);
    
    return 0;
}

