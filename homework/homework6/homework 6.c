/* ok first you open this file in https://www.onlinegdb.com/ and then add a new file, name it family.h to run the program ;) and that is all*/

#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "family.h"

node* insert(char* a, char* p, node* pos, int b) {
  node* temp;
  if (pos == NULL) {
    pos = (node*)malloc(sizeof(node));
    pos->user = a;
    pos->password = p;
    pos->depth = b;
    printf ("successful registration of user <%s> , password <%s>\n\n", a, p);
          }else {
      if (strcmp(pos->user, a) == 0) {
      if (pos->password!=NULL){
      printf("user already registred\n\n");
            }else{
    pos->password = p;
      printf ("<%s> user registration, password <%s>\n\n successful", a, p);
      }
    } else if (strcmp(pos->user, a)>0) { 
        
      temp = insert(a, p, pos->leftkiddo, b + 1);
      if (pos->leftkiddo == NULL) {
	pos->leftkiddo = temp;
      }
    } else if (strcmp(pos->user, a)<0){
      temp = insert(a, p, pos->rightkiddo, b + 1); 
      
      if (pos->rightkiddo == NULL) {
	pos->rightkiddo = temp;
      }
    }
  }
  return pos;
}

void alpha(node* position) {
  if (position != NULL) {
    alpha(position->leftkiddo);
    if (position->password!=NULL){
    printf("%s ", position->user);
    }
    alpha(position->rightkiddo);
  }
}

void delete(node* position, char* a, char* p, int* n){
    
    if (position != NULL) {
        
        delete (position->leftkiddo, a, p, n);
        delete (position->rightkiddo, a, p, n);
        if (strcmp(position->user, a) == 0&&strcmp(position->password, p) == 0){
            position->password=NULL;
            printf("user %s deleted\n\n", a);
            *n = 1;
        } 
    }
} int main() {
  extern char lineaa[];
  node* n = NULL;
  node* family = NULL; 
  int x;
  int y = 0;
  char* a;
  char* p;
  int indicator=0;
  int counter =0;
  int z;
  
  printf("to add a user use~ add (user password\n)");
  printf("to delete a user use~ delete (user password\n)");
  printf("to view the users in alphabetical order use~ view\n");
  
  while ((y = getoff()) == 0) {
      counter=0;
    for (z=0; z<MAX; z++){
        if (linea[z]==' '||linea[z]=='\t'){
            counter++;
        }
    }
    if (strstr(linea, "delete") != NULL&&strlen(linea)>=7&&counter==2) {
      get(linea, password, user);
      a = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (x=0; x<strlen(user);x++){
          a[x]=user[x];
      }
      for (x=0; x<strlen(password);x++){
          p[x]=password[x];
      }      indicator=0;
             delete(family, a, p, &indicator);
             if (indicator==0){
          printf("wasnot removed\n\n");
      }
            indicator=0;
            counter=0;
    }
    
    else if (strstr(linea, "add") != NULL&&strlen(linea)>=7&&counter==2) {
      a = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (x=0; x<strlen(user);x++){
          a[x]=user[x];
      }
      for (x=0; x<strlen(password);x++){
          p[x]=password[x];
      }
      if (strlen(password)>0&&strlen(user)>0){
      n = insert(a,p, family, 0);
	  if (family == NULL) {
	    family = n;
	  }
	   counter=0;
      }
      else if (strlen(password)<=0||strlen(user)<=0){
          printf ("check the order please\n\n");
      }
      }else if (strstr(linea, "view") != NULL&&strlen(linea)==4) {
          alpha(family);
          printf("\n\n");
          counter=0;
                    }else{
        printf("check it please\n\n");
      counter=0;
    } 
  }  return 0;
}

int getoff() { 
  extern char linea[];
  int c, x = 0;

  for (; x < MAX - 1 && (c = getchar()) != EOF && c != '\n';) {

        linea[x++] = c;
  }
        linea[x] = '\0'; 
        return c == EOF;
  }

void get (char y[MAX],char p[MAX],char a[MAX]){
    int m = 4, n = 0, o=0;
    while (y[m]!=' '&&y[m]!='\t'){
        a[n]=y[m];
        n++;
        m++;
    }
    a[n]='\0';
    int longitud = strlen(a);
    m++;
    while (y[m]!=' '&&y[m]!='\t'&&y[m]!='\0'){
       p[o]=y[m];
       o++;
       m++;
    }
    p[o]='\0';
    int longitudd = strlen(p);
}

/*References:RulGamer03 ak Angel Raul Chavez Carrillo*/
