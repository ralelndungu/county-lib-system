#include <stdio.h>
#include <stdlib.h>
#include <srting.h>
struct Patron{
  char name[100];
  char pass[30];
  char email[50];
  int is_staff;
  };
  int save_patron(struct Patron patron){
  FILE*fp;
  fp=fopen("patrons","ab");
  fwrite(&patron,sizeof(struct Patron),1,fp);
  fclose(fp);
  return 1;
  }
  void add_patron(){
    struct Patron patron;
    printf("Enter name:");
    getchar();
    gets(patron.name);
    printf("Initial Password:");
    gets(patron.pass);
    printf("Enter 1 if staff 0 otherwise:");
    scanf("%d",&patrons.is_staff);
    if(save_patron(patron))
    printf("Patron %successfully
    added\n",patron.name);
    else
      printf("unsuccessfully\n")
    }
    int menu()
    {
     int action;
     printf("select an action:\n");
     printf("1.Add new patron\n");
     printf("2.View Patron\n");
     printf("3.View Books\n");
     printf("4.Add New Books\n");
     printf("Your Action:");
     scanf("%d",&action);
     if(action<1||action{
        printf("Invalid action.Try again\n");
        }
        return action;
       }
       voidexecute_action(int action){
         switch(action){
     case 1:
        add_patron();
        break;
     case 2:
         printf("Here is a lst of patrons\n");
         break;
     case 3:
         printf("Here is a list of all the books");
         break;
     case 4:
         printf("adding a new books");
         break;
     default:
         printf("Invalid action.\n";
     }
    }


    int main()
    {
        printf("COUNTY LIBRARY SYSTEM!\n");
        printf("Welcome Rakel!\n");
        execute_action(menu());
        return 0;
    }









