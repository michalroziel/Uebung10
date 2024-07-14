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


    printMatrix(50,50);

    printf("\n\n\n");

}