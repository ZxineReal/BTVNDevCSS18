#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv[50] = {
        {1, "Nguyen Van A", 18, "0123456789"},
        {2, "Le Van B", 19, "0123456788"},
        {3, "Phan C", 18, "0123456777"},
        {4, "Tran Thi D", 20, "0123456666"},
        {5, "Pham E", 21, "0123455555"}
    };

    int n = 5;
    int position;
    struct SinhVien newSv;

    printf("Moi ban nhap vi tri can chen: ", n);
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap ID cua sinh vien: ");
    scanf("%d", &newSv.id);
    getchar();

    printf("Nhap ten cua sinh vien: ");
    fgets(newSv.name, sizeof(newSv.name), stdin);
    newSv.name[strcspn(newSv.name, "\n")] = '\0';

    printf("Nhap tuoi cua sinh vien: ");
    scanf("%d", &newSv.age);

    printf("Nhap so dien thoai cua sinh vien: ");
    scanf("%s", newSv.phoneNumber);

    for (int i = n; i > position; i--) {
        sv[i] = sv[i - 1];
    }

    sv[position] = newSv;
    n++;

    printf("Danh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }

    return 0;
}
