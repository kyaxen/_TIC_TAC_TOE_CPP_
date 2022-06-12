#include "TicTacToe.h"

void TicTacToe::_X_SYMBOL(short size, short x, short y)
{
	for (int i = 0; i < size; i++) {
		LOCATE(x + i, y + i); std::cout << _HALF_BORDER_;
		LOCATE(x + i, y + size - i - 1); std::cout << _HALF_BORDER_;
	}
}

void TicTacToe::_O_SYMBOL(short size, short x, short y)
{
	for (int i = 0; i < size - 1; i++) {
		LOCATE(x, y + i + 1); std::cout << _FULL_BORDER_;
		LOCATE(x + size * 2 - 1, y + i + 1); std::cout << _FULL_BORDER_;
	}
	for (int i = 0; i < size * 2 - 2; i++) {
		LOCATE(x + i + 1, y); std::cout << _HALF_BORDER_;
		LOCATE(x + i + 1, y + size); std::cout << _HALF_BORDER_;
	}
}

void TicTacToe::_DRAW_SYMBOL_(short i)
{
	switch (i)
	{
	case 0:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11, _MARGIN_TOP_);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9, _MARGIN_TOP_);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11, _MARGIN_TOP_);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9, _MARGIN_TOP_);
			}
			NORMAL;
		}
		break;

	case 1:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_, _MARGIN_TOP_);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_, _MARGIN_TOP_);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_, _MARGIN_TOP_);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_, _MARGIN_TOP_);
			}
			NORMAL;
		}
		break;

	case 2:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_);
			}
			NORMAL;
		}
		break;

	case 3:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11, _MARGIN_TOP_ * 2);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9, _MARGIN_TOP_ * 2);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11, _MARGIN_TOP_ * 2);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9, _MARGIN_TOP_ * 2);
			}
			NORMAL;
		}
		break;

	case 4:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_, _MARGIN_TOP_ * 2);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_, _MARGIN_TOP_ * 2);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_, _MARGIN_TOP_ * 2);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_, _MARGIN_TOP_ * 2);
			}
			NORMAL;
		}
		break;

	case 5:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 2);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 2);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 2);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 2);
			}
			NORMAL;
		}
		break;

	case 6:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11, _MARGIN_TOP_ * 3);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9, _MARGIN_TOP_ * 3);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11, _MARGIN_TOP_ * 3);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9, _MARGIN_TOP_ * 3);
			}
			NORMAL;
		}
		break;

	case 7:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_, _MARGIN_TOP_ * 3);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_, _MARGIN_TOP_ * 3);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_, _MARGIN_TOP_ * 3);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_, _MARGIN_TOP_ * 3);
			}
			NORMAL;
		}
		break;

	case 8:
		if (board[i] == USER) {
			COLOR(GREEN, BLACK);
			if (_USER_SYMBOl_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 3);
			}
			else if (_USER_SYMBOl_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 3);
			}
			NORMAL;
		}
		else if (board[i] == COMPUTER)
		{
			COLOR(RED, BLACK);
			if (_COMPUTER_SYMBOL_ == X) {
				_X_SYMBOL(_X_SYMBOL_SIZE_, 11 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 3);
			}
			else if (_COMPUTER_SYMBOL_ == O)
			{
				_O_SYMBOL(_O_SYMBOL_SIZE, 9 + _MARGIN_LEFT_ * 2, _MARGIN_TOP_ * 3);
			}
			NORMAL;
		}
		break;

	default:
		break;
	}
}

void TicTacToe::_DISPLAY_BOARD_()
{
	COLOR(BLUE, BLACK);
	LOCATE(1, 1); for (int i = 0; i < 120; i++) { std::cout << _HALF_BORDER_; }
	LOCATE(60 - _GAME_NAME_.size() / 2, 2); std::cout << _GAME_NAME_;
	LOCATE(1, 3); for (int i = 0; i < 120; i++) { std::cout << _HALF_BORDER_; }

	for (int i = 2; i < 30; i++) {
		LOCATE(1, i); std::cout << _FULL_BORDER_;
		LOCATE(60, i + 2); std::cout << _FULL_BORDER_;
		LOCATE(120, i); std::cout << _FULL_BORDER_;
	}

	LOCATE(1, 30); for (int i = 0; i < 120; i++) { std::cout << _HALF_BORDER_; }

	for (int i = _START_POS_X_; i < _BOARD_WIDTH_; i++) {
		LOCATE(i, _START_POS_Y_); std::cout << _HALF_BORDER_;
		LOCATE(i, _START_POS_Y_ + _MARGIN_TOP_); std::cout << _HALF_BORDER_;
		LOCATE(i, _START_POS_Y_ + _MARGIN_TOP_ * 2); std::cout << _HALF_BORDER_;
		LOCATE(i, _START_POS_Y_ + _MARGIN_TOP_ *3); std::cout << _HALF_BORDER_;
	}

	for (int i = _START_POS_Y_ + 1; i < _BOARD_HEIGHT_ - 1; i++) {
		LOCATE(_START_POS_X_, i); std::cout << _FULL_BORDER_;
		LOCATE(_START_POS_X_ + _MARGIN_LEFT_, i); std::cout << _FULL_BORDER_;
		LOCATE(_START_POS_X_ + _MARGIN_LEFT_ * 2, i); std::cout << _FULL_BORDER_;
		LOCATE(_START_POS_X_ + _MARGIN_LEFT_ * 3, i); std::cout << _FULL_BORDER_;
	}

	for (int i = 0; i < 9; i++) {
		_DRAW_SYMBOL_(i);
	}

	COLOR(BLUE, BLACK); LOCATE(87, 4); std::cout << "ROUND - " << _ROUND_;
	COLOR(GREEN, BLACK); LOCATE(62, 5); std::cout << "YOUR SCORE - " << _USER_SCORE_;
	COLOR(RED, BLACK); LOCATE(98, 5); std::cout << "COMPUTER'S SCORE - " << _COMPUTER_SCORE_;
	COLOR(BLUE, BLACK);
	for (int i = 0; i < 59; i++) {
		LOCATE(61 + i, 6); std::cout << _HALF_BORDER_;
	}
	NORMAL;
}

void TicTacToe::_DISPLAY_ROUND_INFO_(std::string info)
{
	system("cls");
	_DISPLAY_BOARD_();
	if (_IS_WIN_(USER)) {
		COLOR(GREEN, BLACK);
	}
	else if (_IS_WIN_(COMPUTER)) {
		COLOR(RED, BLACK);
	}
	else if (_IS_DRAW_())
	{
		COLOR(YELLOW, BLACK);
	}
	LOCATE(60 + 30 - info.size() / 2, 17); std::cout << info;
	std::cin >> temp;
	NORMAL;
}

bool TicTacToe::_IS_WIN_(Symbol symbol)
{
	if (
		(board[0] == symbol && board[1] == symbol && board[2] == symbol) ||
		(board[3] == symbol && board[4] == symbol && board[5] == symbol) ||
		(board[6] == symbol && board[7] == symbol && board[8] == symbol) ||

		(board[0] == symbol && board[3] == symbol && board[6] == symbol) ||
		(board[1] == symbol && board[4] == symbol && board[7] == symbol) ||
		(board[2] == symbol && board[5] == symbol && board[8] == symbol) ||

		(board[0] == symbol && board[4] == symbol && board[8] == symbol) ||
		(board[2] == symbol && board[4] == symbol && board[6] == symbol)
		) {
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::_IS_DRAW_()
{
	if (board[0] == 0 || board[1] == 0 || board[2] == 0 ||
		board[3] == 0 || board[4] == 0 || board[5] == 0 ||
		board[6] == 0 || board[7] == 0 || board[8] == 0
		) {
		return false;
	}
	else
	{
		return true;
	}
}

void TicTacToe::_INIT_DATA_()
{
	for (int i = 0; i < 9; i++) {
		board[i] = DEFAULT;
	}
	_ROUND_ = 0;
	_USER_SCORE_ = 0; _COMPUTER_SCORE_ = 0;
	_USER_INDEX_ = NULL; _COMPUTER_INDEX_ = NULL;
	_USER_SYMBOl_ = NULL; _COMPUTER_SYMBOL_ = NULL;
	temp = NULL;
}

void TicTacToe::_WHO_GO_FIRST_()
{
	std::string _QUIZ_ = "DO YOU WANNA GO FIRST? [ Y / N ] : ";
	while (true)
	{
		system("cls");
		COLOR(GREEN, BLACK);
		LOCATE(60 - _QUIZ_.size() / 2, 15); std::cout << _QUIZ_;
		std::cin >> temp;
		NORMAL;

		if (temp == 'Y' || temp == 'y') {
			_USER_TURN_ = true;
			break;
		}
		else if (temp == 'N' || temp == 'n') {
			_USER_TURN_ = false;
			break;
		}
	}
}

void TicTacToe::_CHOOSE_SYMBOL_()
{
	std::string
		_USER_TEXT_ = "USER'S SYMBOL [ X or O ] : ",
		_COMPUTER_TEXT_ = "COMPUTER'S SYMBOL [ X or O ] : "
		;
	if (_USER_TURN_) {
		while (true)
		{
			system("cls");
			COLOR(GREEN, BLACK);
			LOCATE(60 - _USER_TEXT_.size() / 2, 15);
			std::cout << _USER_TEXT_;
			std::cin >> _USER_SYMBOl_;
			NORMAL;

			if (_USER_SYMBOl_ == X || _USER_SYMBOl_ == x) {
				_COMPUTER_SYMBOL_ = O;
				system("cls");
				COLOR(RED, BLACK);
				LOCATE(60 - _COMPUTER_TEXT_.size() / 2, 15);
				std::cout << _COMPUTER_TEXT_ << _COMPUTER_SYMBOL_;
				Sleep(1500);
				NORMAL;
				break;
			}
			else if (_USER_SYMBOl_ == O || _USER_SYMBOl_ == o) {
				_COMPUTER_SYMBOL_ = X;
				system("cls");
				COLOR(RED, BLACK);
				LOCATE(60 - _COMPUTER_TEXT_.size() / 2, 15);
				std::cout << _COMPUTER_TEXT_ << _COMPUTER_SYMBOL_;
				Sleep(1500);
				NORMAL;
				break;
			}
		}
	}
	else
	{
		system("cls");
		COLOR(RED, BLACK);
		LOCATE(60 - 41 / 2, 15);
		std::cout << "COMPUTER'S SYMBOL [ X or O ] : ";
		_COMPUTER_SYMBOL_ = _X_O_SYMBOL[_GET_RANDOM_(1, 2) - 1];
		Sleep(1500); std::cout << _COMPUTER_SYMBOL_; Sleep(1500);
		NORMAL;

		if (_COMPUTER_SYMBOL_ == X) {
			_USER_SYMBOl_ = O;
			system("cls");
			LOCATE(60 - _USER_TEXT_.size() / 2, 15);
			COLOR(GREEN, BLACK);
			std::cout << _USER_TEXT_ << _USER_SYMBOl_;
			NORMAL;
			Sleep(1500);
		}
		else if (_COMPUTER_SYMBOL_ == O) {
			_USER_SYMBOl_ = X;
			system("cls");
			LOCATE(60 - _USER_TEXT_.size() / 2, 15);
			COLOR(GREEN, BLACK);
			std::cout << _USER_TEXT_ << _USER_SYMBOl_;
			NORMAL;
			Sleep(1500);
		}
	}
}

void TicTacToe::_IS_NEXT_MATCH_()
{
	std::string _QUIZ_ = "DO YOU WANNA PLAY NEXT MATCH? [ Y / N ] : ";
	do
	{
		system("cls");
		COLOR(GREEN, BLACK);
		LOCATE(60 - _QUIZ_.size() / 2, 15); std::cout << _QUIZ_;
		std::cin >> temp;
		NORMAL;
	} while (!(temp == 'Y' || temp == 'y' ||
		temp == 'N' || temp == 'n'
		));

	if (temp == 'Y' || temp == 'y') {
		_INIT_DATA_();
		_MAIN_();
	}
}

TicTacToe::TicTacToe()
{
	srand(time(NULL));
	_INIT_DATA_();
}

TicTacToe::~TicTacToe()
{
}

void TicTacToe::_MAIN_()
{
	_WHO_GO_FIRST_();
	_CHOOSE_SYMBOL_();
	do
	{
		_ROUND_++;
		while (true)
		{
			system("cls");
			_DISPLAY_BOARD_();

			if (_USER_INDEX_ == NULL) {
				COLOR(GREEN, BLACK);
				LOCATE(63, 8); std::cout << "YOUR INDEX : -";
				COLOR(RED, BLACK);
				LOCATE(97, 8); std::cout << "COMPUTER'S INDEX : -";
				NORMAL;
			}
			else
			{
				COLOR(GREEN, BLACK);
				LOCATE(63, 8); std::cout << "YOUR INDEX : " << _USER_INDEX_;
				COLOR(RED, BLACK);
				LOCATE(97, 8); std::cout << "COMPUTER'S INDEX : " << _COMPUTER_INDEX_;
				NORMAL;
			}

			if (_USER_TURN_) {
				COLOR(GREEN, BLACK);
				LOCATE(65, 11); std::cout << "ENTER YOUR INDEX [ 1 - 9 ] : ";
				if (
					std::cin >> _USER_INDEX_ &&
					(_USER_INDEX_ > 0 && _USER_INDEX_ < 10) &&
					(board[_USER_INDEX_ - 1] != USER && board[_USER_INDEX_ - 1] != COMPUTER)
					)
				{
					NORMAL;
					board[_USER_INDEX_ - 1] = USER;
					_DRAW_SYMBOL_(_USER_INDEX_ - 1);
					if (_IS_WIN_(USER) || _IS_DRAW_()) {
						break;
					}
					else
					{
						COLOR(RED, BLACK);
						LOCATE(65, 12); std::cout << "COMPUTER'S INDEX [ 1 - 9 ] : ";
						Sleep(1500);
						do
						{
							_COMPUTER_INDEX_ = _GET_RANDOM_(1, 9);
						} while (
							board[_COMPUTER_INDEX_ - 1] == USER || board[_COMPUTER_INDEX_ - 1] == COMPUTER
							);
						std::cout << _COMPUTER_INDEX_;
						NORMAL;
						Sleep(1000);
						board[_COMPUTER_INDEX_ - 1] = COMPUTER;

						if (_IS_WIN_(COMPUTER) || _IS_DRAW_()) {
							break;
						}
					}
				}
				else
				{
					std::cin.sync();
				}
			}
			else
			{
				COLOR(RED, BLACK);
				LOCATE(65, 11); std::cout << "COMPUTER'S INDEX [ 1 - 9 ] : ";
				Sleep(1500);
				do
				{
					_COMPUTER_INDEX_ = _GET_RANDOM_(1, 9);
				} while (
					board[_COMPUTER_INDEX_ - 1] == USER || board[_COMPUTER_INDEX_ - 1] == COMPUTER
					);
				std::cout << _COMPUTER_INDEX_;
				NORMAL;
				Sleep(1000);
				board[_COMPUTER_INDEX_ - 1] = COMPUTER;
				_DRAW_SYMBOL_(_COMPUTER_INDEX_ - 1);

				if (_IS_WIN_(COMPUTER) || _IS_DRAW_()) {
					break;
				}
				else
				{
					COLOR(GREEN, BLACK);
					LOCATE(65, 12); std::cout << "ENTER YOUR INDEX [ 1 - 9 ] : ";
					do
					{
						std::cin >> _USER_INDEX_;
					} while (
						_USER_INDEX_ < 1 ||
						_USER_INDEX_ > 9 ||
						board[_USER_INDEX_ - 1] == USER ||
						board[_USER_INDEX_ - 1] == COMPUTER
						);
					NORMAL;
					board[_USER_INDEX_ - 1] = USER;

					if (_IS_WIN_(USER) || _IS_DRAW_()) {
						break;
					}
				}
			}
		}

		if (_IS_WIN_(USER)) {
			_USER_SCORE_++;
			_DISPLAY_ROUND_INFO_("YOU WIN...!");
		}
		else if (_IS_WIN_(COMPUTER)) {
			_COMPUTER_SCORE_++;
			_DISPLAY_ROUND_INFO_("YOU LOSE...!");
		}
		else if (_IS_DRAW_()) {
			_DISPLAY_ROUND_INFO_("DRAW..!");
		}

		for (int i = 0; i < 9; i++) { board[i] = DEFAULT; }
		_USER_INDEX_ = NULL; _COMPUTER_INDEX_ = NULL;

		(_USER_TURN_) ? _USER_TURN_ = false : _USER_TURN_ = true;
	} while (_ROUND_ < 5);
	_IS_NEXT_MATCH_();
}
