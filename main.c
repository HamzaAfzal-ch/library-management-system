#include<stdio.h>
struct book
{
    int book_serial_number;
    int ISBN_number;
    char book_name[100];
    int edition;
    char author[100];
    char  Is_reserved[100];
}b;

void AddBook();
void DeleteBook();
void SearchBook();
void Update_a_book_record();
void Display_all_the_books_in_library();
void Issue_book_to_any_one();
void Exit();

int main()
{   int choice;
    while(choice=1)
    {
    printf("==>Welcome to Library Management System<==\n");
    printf("What do you want to do?\n");
    printf("1.Add books\n");
    printf("2.Display books\n");
    printf("3.Search book\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1:
       AddBook();
       break;
      // case 2:
     //  Display_all_the_books_in_library();
      // break;
       //case 3:
      // SearchBook();
     //  }
    }
}
}
void AddBook()
{
     FILE *fptr;
    struct book b [5];
    for(int i=0;i<=4;i++)
    {
        printf("enter book serial number:\n");
        scanf("%d",&b[i].book_serial_number);
        printf("enter ISBN number:\n ");
        scanf("%d",&b[i].ISBN_number);
        printf("enter book name:\n ");
        scanf("%s",b[i].book_name);
        printf("enter book edition:\n ");
        scanf("%d",&b[i]. edition);
        printf("enter book author:\n ");
        scanf("%s",b[i].author);
        printf("enter is book reserved?\n ");
        scanf("%s",b[i].Is_reserved);
        }


    fptr=fopen("libray.txt","w");
    for(int i=0;i<=4;i++)
    {
        fprintf(fptr,"%d, %d, %s, %d, %s, %s",b[i].book_serial_number,b[i].ISBN_number,b[i].book_name,b[i]. edition,b[i].author,b[i].Is_reserved);
    }
     fclose(fptr);



}
