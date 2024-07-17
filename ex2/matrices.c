#include <stdio.h>

/**
 *
 * @param rows
 * @param columns
 */
void printMatrix(int rows, int columns) {
  for (int i = 0; i < rows; i++) {

    for (int j = 0; j < columns; j++) {

      if (i == j || i == (columns - j - 1)) {
        printf("*");
      } else {
        printf("-");
      }
    }
    printf("\n");
  }
}

/**
 * starts the programme.
 */
void start(void) {

  int rowsToPrint;
  int columnsToPrint;

  printf("Please Enter the number of rows for the Matrix:");
  scanf("%d", &rowsToPrint);

  printf("Please Enter the number of columns for the Matrix:");
  scanf("%d", &columnsToPrint);

  printMatrix(rowsToPrint, columnsToPrint);

  printf("\n\n\n");
}

/**
 *
 * @return
 */
int main(void) {

  start();

  return 0;
}