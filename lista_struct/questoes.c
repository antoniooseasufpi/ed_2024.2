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

//questao 2
typedef struct book {
    char title[100];
    float price;
} Book;

Book *create_books() {
    Book *books = (Book *) malloc(5 * sizeof(Book));
    return books;
}
void preencher_books(Book *books) {
    for (int i = 0; i < 5; i++) {
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
}
void print_books(Book *books) {
    for (int i = 0; i < 5; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Price: %.2f\n", books[i].price);
    }
}

int main(){
    // questao 1
    // Student student;
    // student.id = 1;
    // scanf("%s", student.name);
    // print_student(&student);

    //questao 2
    Book *books;
    books = create_books();
    preencher_books(books);
    print_books(books);
    free(books);
    return 0;
}