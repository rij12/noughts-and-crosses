/*
 * File:   main.c
 * Author: richard
 *
 * Created on 21 January 2016, 15:32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int board[25] = {
	:,:,:,:,:,
	:,O,-,X,:,
	:,X,-,-,:,
	:,-,-,-,:,
	:,:,:,:,:,
}
*/
//const int EMPTY = 0;
//const int NOUGHTS = 1;
//const int CROSSES = 2;
//const int BORDER = 3;

/*enums*/

enum {EMPTY, NOUGHTS, CROSSES, BORDER };
enum {HUMAN_WIN, CPU_WIN, DRAW};

int board [25];

/*Function Protypes*/

void initialise_board(int*);
void print_board(const int*);
void run_game();

const int convert_to_game_squares[9] = {
	6,7,8,
	11,12,13,
	16,17,18
};

void initialise_board(int *board){
	int i = 0; 
    for(i = 0; i < 25; ++ i){

        board[i] = BORDER;
        }

    for (i = 0; i < 9; ++i){

        board[convert_to_game_squares[i]] = EMPTY;
    }

}

void print_board (const int * board){
  int i = 0;
  char game_peices[] = "OX|-";
	printf("\nBoard:\n\n");
    for(i = 0; i <9; ++i){
        if(i != 0 && i % 3 == 0){
            printf("\n\n");
        }
        printf("%4c", game_peices[board[convert_to_game_squares[i]]]);
    }
    printf("\n");
}

void run_game(){

  int game_over = 0;
  int side = NOUGHTS;
  int last_move_made = 0;
  int board[25];

  initialise_board(&board[0]);
  print_board(&board[0]);

  while(!game_over){
	if(side == NOUGHTS){
	  // Get move from human, make move on board, change side.

	  }else{
	  // Get move from humans, make move on board, change side.
	  print_board(&board[0]);
	  }
	  // If three in a row exists game is over.

	  // If no more moves, game is a draw.

	  }
  }




int main(int argc, char** argv) {
	srand(time(NULL));
	run_game();

    return (EXIT_SUCCESS);
}


