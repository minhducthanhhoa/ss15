#include <stdio.h>

// Khai b�o cau tr�c sinh vi�n
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
    char address[50];
};

// H�m nhap th�ng tin sinh vi�n
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

// H�m xuat th�ng tin sinh vi�n
void xuatThongTin(const struct Student *st) {
    printf("Ho va ten: %s", st->name);
    printf("Tuoi: %d\n", st->age);
    printf("So dien thoai: %s\n", st->phoneNumber);
    printf("Email: %s\n", st->address);
}

int main() {
    // Khai b�o mot sinh vi�n
    struct Student st;
    
    // Nhap th�ng tin sinh vi�n
    nhapThongTin(&st);
    
    // Xuat th�ng tin sinh vi�n ra m�n h?nh
    xuatThongTin(&st);
    
    return 0;
}

