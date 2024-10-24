#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Student;
void print_student(Student *student){
    printf("ID: %d\n", student->id);
    printf("Name: %s\n", student->name);
}

int main()
{
    Student student;
    student.id = 1;
    strcpy(student.name, "John Doe");
    print_student(&student);

    return 0;
}

