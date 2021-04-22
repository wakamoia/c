#include <assert.h> 
#include <ctype.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  

#define OOPS_TRY_WITH_ANOTHER 1
#define OOPS_MINA 2
#define OOPS_NONE 3

#define COLUMNS 10
#define ROWS 10
#define UNDISCOVERED_SPACE '#'
#define OPEN_SPACE ' '
#define MINA '*'
#define AMOUNT_MINAS  8
#define DEBUG 0
int ObtaneMinasClose(int row, int column, char table[ROWS][COLUMNS]) {
  int count = 0, FirstRow, LastRow, FirstColumn, LastColumn;
  if (row <= 0) {
    FirstRow = 0;
  } else {
    FirstRow = row - 1;
  }
  if (row + 1 >= ROWS) {
    LastRow = ROWS - 1;
  } else {
    LastRow = row + 1;
  }
  if (column <= 0) {
    FirstColumn = 0;
  } else {
    FirstColumn = column - 1;
  }
   if (column + 1 >= COLUMNS) {
    LastColumn = COLUMNS - 1;
  } else {
    LastColumn = column + 1;
  }
  int a;
  for (a = FirstRow; a <= LastRow; a++) {
    int b;
    for (b = FirstColumn; b <= LastColumn; b++) {
      if (table[a][b] == MINA) {
        count++;
      }
    }
  }
  return count;
}

int Random(int min, int max) {
  return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

void StartTable(char table[ROWS][COLUMNS]) {
  int b;
  for (b = 0; b < ROWS; b++) {
    int a;
    for (a = 0; a < COLUMNS; a++) {
      table[b][a] = UNDISCOVERED_SPACE;
    }
  }
}

      void HereMina(int row, int column, char table[ROWS][COLUMNS]) {
  table[row][column] = MINA;
}
      void HereMinaRandom(char table[ROWS][COLUMNS]) {
  int b; 
  for (b = 0; b < AMOUNT_MINAS; b++) 
  {
    int row = Random(0, ROWS - 1);
    int column = Random(0, COLUMNS - 1);
    HereMina(row, column, table);
  }
}

void PrintHeader() {
  int a;
  for (a = 0; a <= COLUMNS; a++) {
    printf("----");
    if (a + 2 == COLUMNS) {
      printf("-");
    }
}
  printf("\n");
}
void PrintRowSeparator() {
  int a;
  for (a = 0; a <= COLUMNS; a++) {
    printf("+---");
    if (a == COLUMNS) {
      printf("+");
    }
  }
  printf("\n");
}

void PUTHeader() {
  PUTHeader();
  printf("|   ");
  int b;
  for (b = 0; b < COLUMNS; b++) {
    printf("| %d ", b + 1);
    if (b + 1 == COLUMNS) {
      printf("|");
    }
  }
  printf("\n");
}

              char WholeCharacter(int num) {
  return num + '0';
}      
void PrintTable(char table[ROWS][COLUMNS], int mina) {
  PrintHeader();
  PrintRowSeparator();
  char letter = 'A';
  int b;
        for (b = 0; b < ROWS; b++) {
  int a;
    printf("| %c ", letter);
    letter++;
        for (a = 0; a < COLUMNS; a++) {

  char True = UNDISCOVERED_SPACE;
      char ActualLetter = table[b][a];
      if (ActualLetter == MINA) 
	  {
        True = UNDISCOVERED_SPACE;}
	  else if (ActualLetter == OPEN_SPACE) {
   int minaClose = ObtaneMinasClose(b, a, table);
        True = WholeCharacter(minaClose);
	}
        
if (ActualLetter == MINA && (DEBUG || mina)) {
        True = MINA;
      }
      printf("| %c ", ActualLetter);
      if (a + 1 == COLUMNS) {
        printf("|");
      }
    }
    printf("\n");
    PrintRowSeparator();
  }
} int Open(char RowLETTER, int column, char table[ROWS][COLUMNS]) {
RowLETTER = toupper(RowLETTER);
column--;

int row = RowLETTER - 'A';
  assert(column < COLUMNS && column >= 0);
  assert(row < ROWS && row >= 0);
  if (table[row][column] == MINA) {
    return OOPS_MINA;
  }
  if (table[row][column] == OPEN_SPACE) {
    return OOPS_TRY_WITH_ANOTHER;
  }
     table[row][column] = OPEN_SPACE;
    return OOPS_NONE;
{
	
	int NoSpace(char table[ROWS][COLUMNS]) {
  int b;
  for (b = 0; b < ROWS; b++) {
    int a;
    for (a = 0; a < COLUMNS; a++) {
      char actual = table[b][a];
      if (actual == UNDISCOVERED_SPACE) {
        return 0;
      }
    }
  }
  return 1;
}

int main(){
	printf("**MINESWEEPER**");
	char table [ROWS] [COLUMNS];
    int mina=0;
	
	srand(getpid());
	StartTable(table);
	HereMinaRandom(table);
	}
while (1){
	PrintTable(table, MINA);
	if (MINA)
	break;	
}
int column;
char row;
printf("introduce the row: ");
scanf(" %c", & row);
printf("introduce the column: ");
scanf(" %d", & column);

int status= Open(row, column, table);
if (NoSpace(table)){
	printf("congratulations! you are the winner B)\n");
     int mina=1;
	}
else if (status== OOPS_TRY_WITH_ANOTHER )
{
printf("you already open that\n");
}
else if (status== OOPS_MINA )
{
printf("haha you lose\n");
int mina=1;
  }
 }
return 0;
}
