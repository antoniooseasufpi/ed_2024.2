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

//questao 5
typedef struct
{
    int num_books;
    Book *books;
}Library;

Library *alocarLib(int num_libs){
    Library *libs;
    libs = (Library *) malloc(sizeof(Library) * num_libs);
    
    for (int i = 0; i < num_libs; i++){
        printf("Informe a qtd de livros tera na biblioteca %d ", i);
        scanf("%d", &libs[i].num_books);
        libs[i].books = (Book *) calloc(sizeof(Book), libs->num_books);
    }
    return libs;
}

void preencherBooks(Library *libs, int num_libs){
    for (int _lib = 0; _lib < num_libs; _lib++){
        printf("Preencer dados para a biblioteca %d, a qual possui cadastro reservado de %d livros\n", _lib, libs[_lib].num_books);
        for (int i = 0; i < libs[_lib].num_books; i++)
        {
            printf("Price: "); scanf("%f", &libs[_lib].books[i].price);
            printf("Title: "); scanf("%s", libs[_lib].books[i].title);
        }
    }
}

void mostrarBooks(Library *libs, int num_libs){
    printf("\n-----PRINT LIVROS-----\n");
    for (int l = 0; l < num_libs; l++){
        printf("\nBiblioteca %d - Detalhes dos livros abaixo: \n", l);
        for (int i = 0; i < libs[l].num_books; i++)
        {
            printf("\nPrice: %.2f", libs[l].books[i].price);
            printf("\nTitle: %s", libs[l].books[i].title);
        }
    }
}

int main(){
    // questao 1
    // Student student;
    // student.id = 1;
    // scanf("%s", student.name);
    // print_student(&student);

    //questao 2
    // Book *books;
    // books = create_books();
    // preencher_books(books);
    // print_books(books);
    // free(books);
    // questao 5
    
    Library *lib;
    int num_libs = 3;
    lib = alocarLib(num_libs);
    preencherBooks(lib, num_libs);
    mostrarBooks(lib, num_libs);
    free(lib);

    return 0;
}