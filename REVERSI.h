#include <stdio.h>

#define HEIGHT	8	// ゲームボードの縦のマスの数
#define WIDHT	8	// ゲームボードの横のマスの数

#define MARK	0	// なにも置かれてない = 0
#define BLACK	1	// 黒 = 1
#define WHITE 	2	// 白 = 2

// ゲームボードの情報をグローバル配列に保存
int board[HEIGHT][WIDHT];

// プレイヤーもグローバルで管理。今、誰の手番か
int player;		// 1(BLACK) or 2(WHITE)

void init();

void view_board();

int numAbleBox(int man);

int judgeBox(int a, int b);

void returnBox(int a, int b);

void changePlayer();

int isFinish();

int getWinner();