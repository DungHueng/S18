#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

 int main(){
	
	struct Student{
	   int id;
       char name[50];
	   int age;
       int phoneNumber;  		
	};
  
  		struct Student sv[5];
		
        
        for(int i=1;i<6;i++){
        	sv[i].id = i;
           printf(" sinh vien thu %d\n",i);
        	printf("nhap ten cua sinh vien %d :",i);
	        scanf("%s",sv[i].name);
	        printf("nhap tuoi :");
	        scanf("%d",&sv[i].age);
	        printf("nhap sdt :");
	        scanf("%d",&sv[i].phoneNumber);
		}

	

	
	for(int i=1;i<6;i++){
		printf("sinh vien thu %d \n",sv[i].id);
		printf("ten cua sinh vien la: %s\n",sv[i].name);
		printf("tuoi cua sinh vien la: %d\n",sv[i].age);
		printf("sdt cua sinh vien la: %d\n",sv[i].phoneNumber);
		printf("\n");
	}
	
	
   return 0;
}

