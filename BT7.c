#include<stdio.h>
#include<string.h>

	struct SinhVien{
		int id;
		char name[50];
		int age;
		char phoneNumber[15];
	};
int main(){
	int found=0;
	int index=0;
	struct SinhVien sv[50]={
		{1,"Nguyen Van A",18,"0123456789"},
		{2,"Le Van B",19,"0123456788"},
		{3,"Phan C",18,"0123456777"},
		{4,"Tran Thi D",20,"0123456666"},
		{5,"Pham E",21,"0123455555"}
	};
	struct SinhVien deleteSv;
	printf("Moi ban nhap ten sinh vien can xoa: ");
	fgets(deleteSv.name,sizeof(deleteSv.name),stdin);
	deleteSv.name[strcspn(deleteSv.name, "\n")] = '\0';
	
	for(int i=0;i<5;i++){
		if(strcmp(deleteSv.name,sv[i].name)==0){
			found++;
			index=i;
		}
	}
	if(found==0){
		printf("Khong tim thay sinh vien");
	}else{
		for(int i=index;i<5;i++){
			sv[i]= sv[i+1];
		}
	for(int i=0;i<4;i++){
		printf("%d\t %s\t %d\t %s\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber);
	}
}
	return 0;
}