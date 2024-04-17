#include <stdio.h>
/*int main(int argc, char const *argv[])
{
	struct{
		float CGPA;
		char dept[10];
		struct add_student{
			int Pincode;
			char city[15];
		} address;
	}Student; 
	// struct Student c1;
	printf("%ld\n", sizeof(Student));
	return 0;
}*/

int main(int argc, char const *argv[])
{
	typedef enum {A1,A2,A3,A4,A5,A7,A8,B1,B2,B3,B4,B5,D2}
	Group_lbl;
	struct student
	{
		int ID;
		char Name[20];
		Group_lbl Group;
	};
	struct student s1 = {876, "Karthik", A2};
/*	struct student s2;
	s2.ID = 233;
	s2.Name = "Ganesh";
	s2.Group = B5;*/
	if(s1.Group != B5) 
		printf("%d\n", s1.Group);
	return 0;
}