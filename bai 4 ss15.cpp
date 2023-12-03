#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Khai b�o cau tr�c th�ng tin s�ch
struct Book {
    char code[10];
    char name[50];
    char author[30];
    int price;
    char genre[20];
};

// Khai b�o mang s�ch
struct Book books[MAX_BOOKS];
int numBooks = 0;

// H�m hien thi menu
void displayMenu() {
    printf("\n====== MENU ======\n");
    printf("1. Nhap so luong v� th�ng tin s�ch\n");
    printf("2. Hien thi th�ng tin s�ch\n");
    printf("3. Th�m s�ch v�o vi tr�\n");
    printf("4. X�a s�ch theo ma s�ch\n");
    printf("5. Cap nhat th�ng tin s�ch theo ma s�ch\n");
    printf("6. Sap xep s�ch theo gi�\n");
    printf("7. Tim kiem s�ch theo t�n s�ch\n");
    printf("8. Tim kiem s�ch theo khoang gi�\n");
    printf("9. Tho�t\n");
    printf("===================\n");
}

// H�m nhap th�ng tin s�ch
void inputBooks() {
    printf("Nhap so luong s�ch: ");
    scanf("%d", &numBooks);

    for (int i = 0; i < numBooks; i++) {
        printf("Nhap th�ng tin s�ch %d:\n", i+1);
        printf("Ma s�ch: ");
        scanf(" %[^\n]s", books[i].code);
        printf("T�n s�ch: ");
        scanf(" %[^\n]s", books[i].name);
        printf("T�c gi?: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Gi� ti?n: ");
        scanf("%d", &books[numBooks].price);
        printf("Th? Lo?i: ");
        scanf(" %[^\n]s", books[i].genre);
    }
}

// H�m hien thi th�ng tin s�ch
void displayBooks() {
    printf("Th�ng tin s�ch:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("S�ch %d:\n", i+1);
        printf("Ma s�ch: %s\n", books[i].code);
        printf("T�n s�ch: %s\n", books[i].name);
        printf("T�c gia: %s\n", books[i].author);
        printf("Gi� tien: %d\n", books[i].price);
        printf("The Loai: %s\n", books[i].genre);
    }
}

// H�m th�m s�ch v�o vi tr�
void addBook() {
    if (numBooks == MAX_BOOKS) {
        printf("So luong s�ch da dat toi da.\n");
        return;
    }

    int position;
    printf("Nhap vi tr� muon th�m s�ch (tu 1 den %d): ", numBooks+1);
    scanf("%d", &position);

    position--;

    if (position < 0 || position > numBooks) {
        printf("Vi tr� kh�ng hop le.\n");
        return;
    }

    // Dich chuyen c�c s�ch sau vi tr� de tao cho trong cho s�ch moi
    for (int i = numBooks; i > position; i--) {
        strcpy(books[i].code, books[i-1].code);
        strcpy(books[i].name, books[i-1].name);
        strcpy(books[i].author, books[i-1].author);
        books[i].price = books[i-1].price;
        strcpy(books[i].genre, books[i-1].genre);
    }

    printf("Nhap th�ng tin s�ch:\n");
    printf("Ma s�ch: ");
    scanf(" %[^\n]s", books[position].code);
    printf("T�n s�ch: ");
    scanf(" %[^\n]s", books[position].name);
    printf("T�c gi?a: ");
    scanf(" %[^\n]s", books[position].author);
    printf("Gi� tien: ");
    scanf("%d", &books[position].price);
    printf("The Loai: ");
    scanf(" %[^\n]s", books[position].genre);

    numBooks++;
    printf("Th�m s�ch th�nh c�ng.\n");
}


