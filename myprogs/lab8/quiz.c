#include <stdio.h>
#include <ctype.h>

int ques;

int marks_calc(char st_res[ques], char te_res[ques])
{
    int count = 0;
    for (int i = 0; i < ques; ++i)
        if (st_res[i] == te_res[i])
            count++;
    return count;
}

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter number of questions: \n");
    scanf("%d", &ques);

    char key[ques], name[50], response[ques], dec = 'y';
    printf("Enter answer key:");

    for (int i = 0; i < ques; i++)
    {
        scanf(" %c", &key[i]);
    }

    while (dec == 'y')
    {
        printf("Enter student name: ");
        int j = 0;
        scanf("%s", name);
        printf("%s\n", name);
        printf("Enter student response: ");
        for (int i = 0; i < ques; i++)
        {
            scanf(" %c", &response[i]);
        }
        marks = marks_calc(response, key);
        printf("%s scored %d\n", name, marks);
        printf("Enter new dec: (y/n)\n");
        dec = getchar();
    }

    return 0;
}