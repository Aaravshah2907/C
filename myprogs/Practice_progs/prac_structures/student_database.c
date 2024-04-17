#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int size = 0, sort = 0;
	printf("Enter number of students you want to enter info about: ");
	scanf("%d", &size);
	struct student{
		char Name[10];
		float CGPA;
		float marks[5];
	};

	struct student student_array[size], temp;

	printf("Enter the details:\n");
	for(int i = 0; i < size; i++)
	{
		printf("Enter name: \n");
		scanf("%s", student_array[i].Name);
		printf("Enter the marks: \n");
		for(int j = 0; j< 5; j++)
			scanf("%f",&student_array[i].marks[j]);
		printf("Enter the CGPA:\n");
		scanf("%f",&student_array[i].CGPA);
	}
	
	//Sorting 

	while (sort <= 0 || sort > 3 )
	{
		printf("Enter Sort by\n1. Name\n2. CGPA\n");
		scanf("%d", &sort);
	}
	
	for (int i = 1; i <= size; ++i)
	{
		for (int j = 0; j < size - i; ++j)
		{
			if(strcmp(student_array[j].Name, student_array[j+1].Name) > 0)
			{
				temp = student_array[j];
				student_array[j] = student_array[j+1];
				student_array[j+1] = temp;
			}
		}
	}

	printf("Sorted Structure:\n");
    for (int i = 0; i < size; ++i)
	{
		printf("Name: %s\tCGPA: %f\t Marks: %f %f %f %f %f\n", student_array[i].Name, student_array[i].CGPA, student_array[i].marks[0], student_array[i].marks[1], student_array[i].marks[2], student_array[i].marks[3], student_array[i].marks[4]);
	}		
	return 0;
}
