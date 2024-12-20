#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

 int main(){
	
	struct Student{
	         
        char name[50];
	    int age;
      int phoneNumber;
    		
	};
	struct Student sv={
		"Hoang Dung",
		18,
		834527469
	};
	printf("ten cua sinh vien la: %s\n",sv.name);
	printf("tuoi cua sinh vien la: %d\n",sv.age);
	printf("sdt cua sinh vien la: %d\n",sv.phoneNumber);
	
   return 0;
}
