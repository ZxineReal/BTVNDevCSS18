#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    char age[5];
    char phoneNumber[20];
};

int main() {
    struct SinhVien std[50] = {
        {1, "Nguyen Van A", "18", "0123456789"},
        {2, "Nguyen Van B", "18", "0123456790"},
        {3, "Nguyen Van C", "18", "0123456801"},
        {4, "Nguyen Van D", "18", "0123456812"},
        {5, "Nguyen Van E", "18", "0123456823"}
    };

    int count = 5;

    struct SinhVien newStd;
    newStd.id = count + 1;

    printf("Nhap ho va ten: ");
    fgets(newStd.name, sizeof(newStd.name), stdin);
    newStd.name[strcspn(newStd.name, "\n")] = '\0';

    strcpy(newStd.age, "18");

    printf("Nhap so dien thoai: ");
    fgets(newStd.phoneNumber, sizeof(newStd.phoneNumber), stdin);
    newStd.phoneNumber[strcspn(newStd.phoneNumber, "\n")] = '\0';

    for (int i = count; i > 0; i--) {
        std[i] = std[i - 1];
    }

    std[0] = newStd;
    count++;

    printf("\nDanh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < count; i++) {
        printf("\nSinh vien %d:\n", std[i].id);
        printf("ID: %d\n", std[i].id);
        printf("Ho va ten: %s\n", std[i].name);
        printf("Tuoi: %s\n", std[i].age);
        printf("So dien thoai: %s\n", std[i].phoneNumber);
    }

    return 0;
}
