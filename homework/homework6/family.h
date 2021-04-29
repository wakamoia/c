#define MAX 200
typedef struct famnode {
  char* user; 
  char* password; 

  struct famnode* leftkiddo;
  struct famnode* rightkiddo;
  unsigned int depth;
} node;

char linea[MAX], password[MAX], user[MAX];
int getoff(); 
void get (char y[MAX],char p[MAX],char a[MAX]); 
node* insert(char* a, char* p, node* pos, int b); 
void alpha(node* position); 
void delete(node* position, char* a, char* p, int* n);
