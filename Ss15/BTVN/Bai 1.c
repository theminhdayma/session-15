#include<stdio.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
		char email[50];
	};
	struct Student s = {"Nguyen The Minh", 18, "0364577211", "theminh2005z@gmail.com"};
	printf("Ho va ten: %s\nTuoi: %d\nSo dien thoai: %s\nEmail: %s\n",s.name,s.age,s.phoneNumber,s.email);
}
