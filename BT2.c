#include<stdio.h>

	struct SinhVien{
		char name[50];
		char age[5];
		char phoneNumber[20];
	};
	
int main(){
	struct SinhVien std1;
	printf("Moi ban nhap vao ho ten: ");
	fgets(std1.name,sizeof(std1.name),stdin);
	printf("Moi ban nhap vao tuoi: ");
	fgets(std1.age,sizeof(std1.age),stdin);
	printf("Moi ban nhap vao so dien thoai: ");
	fgets(std1.phoneNumber,sizeof(std1.phoneNumber),stdin);
	
	printf("Ho va ten: %s\n",std1.name);
	printf("Tuoi: %s\n",std1.age);
	printf("So dien thoai: %s\n",std1.phoneNumber);
	return 0;
}
