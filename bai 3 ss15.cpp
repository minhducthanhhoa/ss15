#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100 

// Ðinh nghia cau trúc sinh viên
struct Student {
    char name[50];
    int age;
    char phone[20];
    char email[50];
};

// Mang chua danh sách sinh viên
struct Student students[MAX_STUDENTS];

// So luong sinh viên hi?n t?i
int numStudents = 0;

// Hàm nhap thông tin sinh viên
void inputStudent(struct Student *student) {
    printf("Nhap ho va ten: ");
    scanf("%s", student->name);
    printf("Nhap tuoi: ");
    scanf("%d", &student->age);
    printf("Nhap so dien thoai: ");
    scanf("%s", student->phone);
    printf("Nhap email: ");
    scanf("%s", student->email);
}

// Hàm thêm sinh viên vào danh sách
void addStudent() {
    if (numStudents == MAX_STUDENTS) {
        printf("Danh sach sinh vien da day!");
        return;
    }
    struct Student student;
    inputStudent(&student);
    students[numStudents] = student;
    numStudents++;
}

// Hàm sua thông tin sinh viên theo vi trí
void editStudent(int position) {
    if (position < 0 || position >= numStudents) {
        printf("Vi tri khong hop le!");
        return;
    }
    printf("Nhap thong tin moi cho sinh vien:\n");
    inputStudent(&students[position]);
}

// Hàm xóa sinh viên khoi danh sách theo vi trí
void deleteStudent(int position) {
    if (position < 0 || position >= numStudents) {
        printf("Vi tri khong hop le!");
        return;
    }
    for (int i = position; i < numStudents - 1; i++) {
        students[i] = students[i + 1];
    }
    numStudents--;
    printf("Da xoa sinh vien tai vi tri %d\n", position);
}

// Hàm in thông tin sinh viên
void printStudent(struct Student student) {
    printf("Ho va ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phone);
    printf("Email: %s\n", student.email);
    printf("----------------------\n");
}

// Hàm in thông tin t?t c? sinh viên
void printAllStudents() {
    for (int i = 0; i < numStudents; i++) {
        printStudent(students[i]);
    }
}

int main() {
    int choice, position;
    
    do {
        printf("\n----- MENU -----\n");
        printf("1. Them sinh vien\n");
        printf("2. Sua thong tin sinh vien\n");
        printf("3. Xoa sinh vien\n");
        printf("4. In danh sach sinh vien\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printf("Nhap vi tri sinh vien can sua: ");
                scanf("%d", &position);
                editStudent(position);
                break;
            case 3:
                printf("Nhap vi tri sinh vien can xoa: ");
                scanf("%d", &position);
                deleteStudent(position);
                break;
            case 4:
                printAllStudents();
                break;
            case 0:
                printf("Goodbye!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
        
    } while (choice != 0);
    
    return 0;
}

