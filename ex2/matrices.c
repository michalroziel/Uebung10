#include <stdio.h>


void printMatrix( int rows, int columns){


    for(int i = 0; i < rows; i++){

        for (int j = 0; j < columns ; j++){

         if ( i == j || i == (columns - j -1) ){
                printf("*");
         }
         else{
            printf("-");
         }
        


        }
        printf("\n");

    }


}


int main(void){

    int rowsToPrint;
    int columnsToPrint;

    printf("Please Enter the number of rows for the Matrix:");
    scanf("%d", &rowsToPrint);
    
    printf("Please Enter the number of columns for the Matrix:");
    scanf("%d",&columnsToPrint);
 

    printMatrix(rowsToPrint,columnsToPrint);

    printf("\n\n\n");

}