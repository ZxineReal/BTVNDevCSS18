#include<stdio.h>

struct SinhVien {
    char name[50];
    char age[5];
    char phoneNumber[20];
};

int main() {
    struct SinhVien students[5];

    for (int i = 0; i < 5; i++) {
        printf("Moi ban nhap vao ho ten sinh vien %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Moi ban nhap vao tuoi: ");
        fgets(students[i].age, sizeof(students[i].age), stdin);

        printf("Moi ban nhap vao so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);

        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("\nThong tin sinh vien %d:\n", i + 1);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %s\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        
    }

    return 0;
}
