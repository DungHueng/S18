#include <stdio.h>
#include <string.h>

int main(){
	struct Student{
		int id;
		char name[50];
		int age;
	};
	struct Student Ptit[50]={
		{0," ",},
		{1,"Nguyen Doanh Tuan",18},
		{2,"Hoang Thai Minh",18},
		{3,"Nguyen Quang Huy",18},
		{4,"Duong Duc Loc",18},
		{5,"Duong Van Chien",18},
	};
	for(int i = 1 ; i < 6 ; i++){
		printf("%d. %s - %d tuoi\n", Ptit[i].id, Ptit[i].name, Ptit[i].age);
	}
	for(int i = 1 ; i < 6 ; i++){
		if(i == 5){
			Ptit[i].id = 6;
			printf("Moi ban nhap ho ten sinh vien moi : ");
			fflush(stdin);
			fgets(Ptit[i].name,sizeof(Ptit[i].name),stdin);
			printf("Moi ban nhap tuoi : ");
			scanf("%d", &Ptit[i].age);
		}
	}
	for(int i = 1 ; i < 6 ; i++){
		printf("%d. %s - %d tuoi\n", Ptit[i].id, Ptit[i].name, Ptit[i].age);
	}
	return 0;
}
