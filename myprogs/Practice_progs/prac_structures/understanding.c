Syntax
Method 1:
struct Student{
	int ID;
	char Name[25];
	char Group[4];
};
struct Student var1, var2[10];

Method 2:
struct Student{
	int ID;
	char Name[25];
	char Group[4];
} varn, var0[10];

Accessing Members
var1.ID;
var0[7].Name;

Structure Initialization
struct Student s1 = {1325,"Aarav","B5PS"}, s2 = {0000, "Demo", "A7"};


Using typedef
typedef struct{
	float real;
	float cmplex;
}COMPLEX; 
COMPLEX c1,c2,c3;

Assigning struct variables is possible as they are variables!!
Example: a1=a2; //This works
Example: a1==a2; // This doesn't work

Nested Structures
struct{
	float CGPA;
	char dept[10];
	struct add_student{
		int Pincode;
		char city[15];
	} address;
}Student; 