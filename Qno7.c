
/*PROGRAM EXAMPLE*/


#include <stdio.h>
int main()
{
          struct student_database
{
    char name[10];
    int roll;							
    int marks;
}stud1;								

stud1.roll = 10;
stud1.marks = 90;

printf("Roll Number : %d\n",stud1.roll);
printf("Marks of Student : %d\n",stud1.marks);

return 0;
}
