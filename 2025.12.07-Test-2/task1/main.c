#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char first_name[50];
    char last_name[50];
} Author;

typedef struct {
    char title[50];
    int year;
    Author* authors;
    int author_count;
    int author_capacity;
} Book;

void init_book_authors(Book* book);
void add_author(Book* book, const char* first, const char* last);
int get_author_count(const Book* book);
Book* create_books(int n);
Book* most_authors(Book* books, int n);
void print_book(const Book* book);
void free_book_authors(Book* book);
void free_books(Book* books, int n);
void clear_input_buffer();
void clear_last_linebreak(char* str);

int main(int argc, char** argv)
{
    int n = 0;
    printf("Enter number of books: ");
    scanf("%d", &n);
    clear_input_buffer();
    Book* books = create_books(n);
    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        clear_last_linebreak(books[i].title);
        printf("Publication year: ");
        scanf("%d", &books[i].year);
        clear_input_buffer();
        int author_count = 0;
        printf("Number of authors: ");
        scanf("%d", &author_count);
        clear_input_buffer();
        for (int j = 0; j < author_count; j++)
        {
            char first[50];
            char last[50];
            printf("  Author %d first name: ", j + 1);
            fgets(first, sizeof(first), stdin);
            clear_last_linebreak(first);
            printf("  Author %d last name: ", j + 1);
            fgets(last, sizeof(last), stdin);
            clear_last_linebreak(last);
            add_author(&books[i], first, last);
        }
    }
    printf("\nAll books:\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. ", i + 1);
        print_book(&books[i]);
    }
    Book* max = most_authors(books, n);
    if (max)
    {
        printf("\nBook with the most authors:\n");
        print_book(max);
    }
    free_books(books, n);
    return 0;
}

void init_book_authors(Book* book)
{
    book->author_count = 0;
    book->author_capacity = 5;
    book->authors = (Author*)malloc(book->author_capacity * sizeof(Author));
}

void add_author(Book* book, const char* first, const char* last)
{
    if (book->author_count >= book->author_capacity)
    {
        book->author_capacity *= 2;
        book->authors = (Author*)realloc(book->authors,book->author_capacity * sizeof(Author));
    }
    strcpy(book->authors[book->author_count].first_name, first);
    strcpy(book->authors[book->author_count].last_name, last);
    book->author_count++;
}

int get_author_count(const Book* book)
{
    return book->author_count;
}

Book* create_books(int n)
{
    Book* books = (Book*)malloc(n * sizeof(Book));
    for (int i = 0; i < n; i++)
    {
        init_book_authors(&books[i]);
    }
    return books;
}

Book* most_authors(Book* books, int n)
{
    if (n <= 0)
    {
        return NULL;
    }
    Book* most_authors = &books[0];
    int max_authors = get_author_count(&books[0]);
    for (int i = 1; i < n; i++)
    {
        int current = get_author_count(&books[i]);
        if (current > max_authors)
        {
            max_authors = current;
            most_authors = &books[i];
        }
    }
    return most_authors;
}

void print_book(const Book* book)
{
    printf("Book: %s, publication year: %d\n", book->title, book->year);
    printf("Authors:\n");
    for (int i = 0; i < book->author_count; i++)
    {
        printf("  %s %s\n",
               book->authors[i].first_name,
               book->authors[i].last_name);
    }
    printf("Total authors: %d\n", book->author_count);
}

void free_book_authors(Book* book)
{
    free(book->authors);
    book->authors = NULL;
    book->author_count = 0;
    book->author_capacity = 0;
}

void free_books(Book* books, int n)
{
    for (int i = 0; i < n; i++) {
        free_book_authors(&books[i]);
    }
    free(books);
}

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str)
{
    if (str != NULL)
    {
        str[strcspn(str, "\n")] = '\0';
    }
}