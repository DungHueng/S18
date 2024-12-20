#include <stdio.h>
#include <string.h>

int main(){
	int checkid;
	char fixname[50];
	int fixage;
	
	struct Student{
		int id;
		char name[50];
		int age;
	};
	struct Student Ptit[50]={
		{0," ",},
		{1,"Nguyen Quang Huy",18},
		{2,"Duong Van Chien",18},
		{3,"Le Trung Chien",18},
		{4,"Bui Van Phuong",18},
		{5,"Chu Dinh Minh",18},
	};
	for(int i = 1 ; i < 6 ; i++){
		printf("%d. %s - %d tuoi\n", Ptit[i].id, Ptit[i].name, Ptit[i].age);
	}
	printf("Ban muon tim sinh vien thu may trong danh sach : ");
	scanf("%d", &checkid);
	for(int i = 1 ; i < 6 ; i++){
		if(Ptit[i].id == checkid){
			printf("Moi ban sua ten sinh vien : ");
			fflush(stdin);
			fgets(fixname,sizeof(fixname),stdin);
			strcpy(Ptit[i].name,fixname);
			printf("Moi ban nhap tuoi : ");
			scanf("%d", &Ptit[i].age);
		}
	}
	printf("Danh sach sinh vien sau khi sua : \n");
	for(int i = 1 ; i < 6 ; i++){
		printf("%d. %s - %d tuoi\n", Ptit[i].id, Ptit[i].name, Ptit[i].age);
	}
	return 0;
}
