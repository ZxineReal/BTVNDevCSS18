#include<stdio.h>

	struct SinhVien{
		char name[50];
		char age[5];
		char phoneNumber[20];
	};
	
int main(){
	struct SinhVien std1={"Tong Tran Huy Hoang", "18","0567191789"};
	printf("Ho va ten: %s\n",std1.name);
	printf("Tuoi: %s\n",std1.age);
	printf("So dien thoai: %s\n",std1.phoneNumber);
	return 0;
}
