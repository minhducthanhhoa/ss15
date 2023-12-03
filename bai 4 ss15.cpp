#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Khai báo cau trúc thông tin sách
struct Book {
    char code[10];
    char name[50];
    char author[30];
    int price;
    char genre[20];
};

// Khai báo mang sách
struct Book books[MAX_BOOKS];
int numBooks = 0;

// Hàm hien thi menu
void displayMenu() {
    printf("\n====== MENU ======\n");
    printf("1. Nhap so luong và thông tin sách\n");
    printf("2. Hien thi thông tin sách\n");
    printf("3. Thêm sách vào vi trí\n");
    printf("4. Xóa sách theo ma sách\n");
    printf("5. Cap nhat thông tin sách theo ma sách\n");
    printf("6. Sap xep sách theo giá\n");
    printf("7. Tim kiem sách theo tên sách\n");
    printf("8. Tim kiem sách theo khoang giá\n");
    printf("9. Thoát\n");
    printf("===================\n");
}

// Hàm nhap thông tin sách
void inputBooks() {
    printf("Nhap so luong sách: ");
    scanf("%d", &numBooks);

    for (int i = 0; i < numBooks; i++) {
        printf("Nhap thông tin sách %d:\n", i+1);
        printf("Ma sách: ");
        scanf(" %[^\n]s", books[i].code);
        printf("Tên sách: ");
        scanf(" %[^\n]s", books[i].name);
        printf("Tác gi?: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Giá ti?n: ");
        scanf("%d", &books[numBooks].price);
        printf("Th? Lo?i: ");
        scanf(" %[^\n]s", books[i].genre);
    }
}

// Hàm hien thi thông tin sách
void displayBooks() {
    printf("Thông tin sách:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Sách %d:\n", i+1);
        printf("Ma sách: %s\n", books[i].code);
        printf("Tên sách: %s\n", books[i].name);
        printf("Tác gia: %s\n", books[i].author);
        printf("Giá tien: %d\n", books[i].price);
        printf("The Loai: %s\n", books[i].genre);
    }
}

// Hàm thêm sách vào vi trí
void addBook() {
    if (numBooks == MAX_BOOKS) {
        printf("So luong sách da dat toi da.\n");
        return;
    }

    int position;
    printf("Nhap vi trí muon thêm sách (tu 1 den %d): ", numBooks+1);
    scanf("%d", &position);

    position--;

    if (position < 0 || position > numBooks) {
        printf("Vi trí không hop le.\n");
        return;
    }

    // Dich chuyen các sách sau vi trí de tao cho trong cho sách moi
    for (int i = numBooks; i > position; i--) {
        strcpy(books[i].code, books[i-1].code);
        strcpy(books[i].name, books[i-1].name);
        strcpy(books[i].author, books[i-1].author);
        books[i].price = books[i-1].price;
        strcpy(books[i].genre, books[i-1].genre);
    }

    printf("Nhap thông tin sách:\n");
    printf("Ma sách: ");
    scanf(" %[^\n]s", books[position].code);
    printf("Tên sách: ");
    scanf(" %[^\n]s", books[position].name);
    printf("Tác gi?a: ");
    scanf(" %[^\n]s", books[position].author);
    printf("Giá tien: ");
    scanf("%d", &books[position].price);
    printf("The Loai: ");
    scanf(" %[^\n]s", books[position].genre);

    numBooks++;
    printf("Thêm sách thành công.\n");
}


