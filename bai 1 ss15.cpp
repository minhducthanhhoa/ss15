#include <stdio.h>
#include <string.h> 
int main() {

// Khai b�o cau tr�c sinh vi�n
struct Student {
  char name[50];
  int age;
  char phoneNumber[15];
  char address[50];
};
 
  // Khoi tao v� g�n gi� tri cho cau tr�c sinh vi�n
  struct Student st;
  strcpy(st.name, "Nguyen Van A");
  st.age = 20;
  strcpy(st.phoneNumber, "0123456789");
  strcpy(st.address, "nguyenvana@gmail.com");
  // Hien thi th�ng tin sinh vi�n l�n m�n hinh
  printf("Ho va ten: %s\n", st.name);
  printf("Tuoi: %d\n", st.age);
  printf("So dien thoai: %s\n", st.phoneNumber);
  printf("Email: %s\n", st.address);

  return 0;
}

