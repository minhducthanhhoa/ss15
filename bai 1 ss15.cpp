#include <stdio.h>
#include <string.h> 
int main() {

// Khai báo cau trúc sinh viên
struct Student {
  char name[50];
  int age;
  char phoneNumber[15];
  char address[50];
};
 
  // Khoi tao và gán giá tri cho cau trúc sinh viên
  struct Student st;
  strcpy(st.name, "Nguyen Van A");
  st.age = 20;
  strcpy(st.phoneNumber, "0123456789");
  strcpy(st.address, "nguyenvana@gmail.com");
  // Hien thi thông tin sinh viên lên màn hinh
  printf("Ho va ten: %s\n", st.name);
  printf("Tuoi: %d\n", st.age);
  printf("So dien thoai: %s\n", st.phoneNumber);
  printf("Email: %s\n", st.address);

  return 0;
}

