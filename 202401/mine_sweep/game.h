//
// Created by carry on 24-1-9.
//

#ifndef MINE_SWEEP_GAME_H


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

#define MINE_SWEEP_GAME_H


#endif //MINE_SWEEP_GAME_H
