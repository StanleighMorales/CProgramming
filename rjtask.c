#include <stdio.h>

void inputSudoku(int sudoku[3][3], int row, int cols)
{
    do{
       
       for(int row = 0; row < 3; row++){
            for(int cols = 0; cols < 3; cols++){
             printf("array[%d][%d]: ",row, cols);
             scanf("%d",&sudoku[row][cols]);//dont forget to put
             //square bracket and the & in scanning 2d arrays.
             printf("reading\n");
             if(sudoku[row][cols]=1){
                printf("sudokuku");
             }else
             printf("wtf not 1?");
             continue;
               
                // if(sudoku[row][cols] < 1 || sudoku[row][cols] > 9){

                //     printf("Please enter number from 1 - 9.\n");
                // break;
        //}
             
         }
        }
        
    } while (1);
    
        // for(int row = 0; row < 3; row++){
        //     for(int cols = 0; cols < 3; cols++){
        //      printf("array[%d][%d]: ",row, cols);
        //      scanf("%d",&sudoku[row][cols]);//dont forget to put
        //      //square bracket and the & in scanning 2d arrays.
             
        //  }
        // }
    }
    
        
    
    
        
    

void outputSudoku(int sudoku[3][3], int row, int cols,int element)
{
    for(int row = 0; row < 3; row++){
        for(int cols = 0; cols < 3; cols++){
            element = sudoku[row][cols];
            printf("%d ",element);
        }
    }
}


int main ()
{
    int sudoku[3][3];
    int row,cols,element;

    inputSudoku(sudoku,row,cols);
    outputSudoku(sudoku,row,cols,element);
}