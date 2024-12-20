#include <stdio.h>
#include <string.h>

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

    int count = 5;
    char deleteSV[50];
    printf("Nhap ten sinh vien can xoa: ");
    fgets(deleteSV, sizeof(deleteSV), stdin);
    deleteSV[strcspn(deleteSV, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, deleteSV) == 0) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien'%s'\n", deleteSV);
    }

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %s\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
