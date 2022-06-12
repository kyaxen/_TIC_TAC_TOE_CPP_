#pragma once
#ifndef _TICTACTOE_
#define _TICTACTOE_

#include <iostream>
#include <Windows.h>

#define LOCATE(x, y) (std::cout << "\033[" << (y) << ';' << (x) << 'H')
#define COLOR( f, b) (std::cout << "\033[1;3"<< (f) <<";4"<< (b) <<'m' << std::flush)
#define BLACK 0
#define RED 1
#define BLUE 4
#define YELLOW 3
#define GREEN 2

#define NORMAL (std::cout << "\033[0m")

class TicTacToe
{
private:
	enum Symbol { DEFAULT = 0, USER = 1, COMPUTER = 2, X = 'X', O = 'O', x = 'x', o = 'o' };

private:
	int board[9];
	short
		_ROUND_,
		_USER_INDEX_, _COMPUTER_INDEX_,
		_USER_SCORE_, _COMPUTER_SCORE_,
		_BOARD_WIDTH_ = 57, _BOARD_HEIGHT_ = _BOARD_WIDTH_ / 2,
		_START_POS_X_ = 5, _START_POS_Y_ = _START_POS_X_ + 1,
		_MARGIN_LEFT_ = (_BOARD_WIDTH_ / 3) - 2, _MARGIN_TOP_ = (_BOARD_HEIGHT_ / 3) - 2;
	const short _X_SYMBOL_SIZE_ = 6, _O_SYMBOL_SIZE = 5;
	const char
		_FULL_BORDER_ = 219,
		_HALF_BORDER_ = 254;
	char
		_USER_SYMBOl_, _COMPUTER_SYMBOL_,
		_X_O_SYMBOL[2] = {X, O}
		;
	bool _USER_TURN_;
	char temp;
	const std::string _GAME_NAME_ = "TIC-TAC-TOE";

public:
	void _X_SYMBOL(short, short, short);
	void _O_SYMBOL(short, short, short);
	void _DRAW_SYMBOL_(short);
	void _DISPLAY_BOARD_();
	void _DISPLAY_ROUND_INFO_(std::string);

	bool _IS_WIN_(Symbol);
	bool _IS_DRAW_();

	short _GET_RANDOM_(short min, short max) { return (rand() % max) + min; }

	void _INIT_DATA_();
	void _WHO_GO_FIRST_();
	void _CHOOSE_SYMBOL_();
	void _IS_NEXT_MATCH_();

public:
	TicTacToe();
	~TicTacToe();

	void _MAIN_();
};

#endif // !_TICTACTOE_
