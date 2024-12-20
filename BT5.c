#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    char age[5];
    char phoneNumber[20];
};

int main() {
	int found=0;
    struct SinhVien std[50] = {
        {1, "Nguyen Van A", "18", "0123456789"},
        {2, "Nguyen Van B", "18", "0123456790"},
        {3, "Nguyen Van C", "18", "0123456801"},
        {4, "Nguyen Van D", "18", "0123456812"},
        {5, "Nguyen Van E", "18", "0123456823"}
    };
    struct SinhVien findSv;
	printf("Moi ban nhap id sinh vien: ");
	scanf("%d",&findSv.id);
	
	for(int i=0;i<5;i++){
		if(findSv.id==std[i].id){
			fflush(stdin);
			found++;
			printf("Ten sinh vien: ");
			fgets(std[i].name,sizeof(std[i].name),stdin);
			printf("Tuoi sinh vien: ");
			fgets(std[i].age,sizeof(std[i].age),stdin);
		}
	}
	if(found==0){
		printf("Khong tim thay sinh vien");
	}else{
		for(int i=0;i<5;i++){
			printf("Id: %d\n",std[i].id);
			printf("Ho va ten: %s\n",std[i].name);
			printf("Tuoi: %s\n",std[i].age);
		}
	}
	
	
}
    