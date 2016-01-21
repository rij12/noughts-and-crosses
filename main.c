/*
 * File:   main.c
 * Author: richard
 *
 * Created on 21 January 2016, 15:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
int board[25] = {
	:,:,:,:,:,
	:,O,-,X,:,
	:,X,-,-,:,
	:,-,-,-,:,
	:,:,:,:,:,
}
*/

const int NOUGHTS = 1;
const int CROSSES = 2;
const int BORDER = 3;
const int EMPTY = 0;


int board [25];

const int ConvertToGameSquares[9] = {
	6,7,8,
	11,12,13,
	16,17,18
};

void Initiallise_board(int *board){

    for(int i = 0; i < 25; ++ i){

        board[i] = BORDER;
        }

    for (int i = 0; i < 9; ++i){

        board[ConvertToGameSquares[i]] = EMPTY;
    }

}

void printBoard (const int * board){
    printf("\nBoard:\n");
    for(int i = 0; i <25; ++i){
        if(i!=0 && i % 5 == 0){
            printf("\n");          
        }
        printf("%d", board[i]);
    }
    printf("\n");
}





int main(int argc, char** argv) {

    int board[25];
    Initiallise_board(&board[0]);


    return (EXIT_SUCCESS);
}

