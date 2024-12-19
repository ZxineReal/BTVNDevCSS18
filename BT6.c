#include<stdio.h>
#include<string.h>

struct SinhVien {
    int id;
    char name[50];
    char age[5];
    char phoneNumber[20];
};

int main() {
    struct SinhVien students[50] = {
        {1, "Nguyen Van A", "18", "0123456789"},
        {2, "Nguyen Van B", "18", "0123456790"},
        {3, "Nguyen Van C", "18", "0123456801"},
        {4, "Nguyen Van D", "18", "0123456812"},
        {5, "Nguyen Van E", "18", "0123456823"}
    };

    int currentCount = 5;
    int newId = currentCount + 1;

    printf("Nhap thong tin sinh vien moi:\n");

    struct SinhVien newStudent;
    newStudent.id = newId;
    printf("Nhap ho va ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    printf("Nhap tuoi: ");
    fgets(newStudent.age, sizeof(newStudent.age), stdin);
    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);

    students[currentCount] = newStudent;
    currentCount++;

    printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %s\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
