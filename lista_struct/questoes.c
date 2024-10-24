#include <stdio.h>
#include <stdlib.h>

//questao 1
typedef struct student {
    int id;
    char name[50];
} Student;


void print_student(Student *student) {
    printf("ID: %d\n", student->id);
    printf("Name: %s\n", student->name);
}

int main(){
    Student student;
    student.id = 1;
    scanf("%s", student.name);
    print_student(&student);
    return 0;
}