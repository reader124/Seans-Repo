//Sean Reading Tic Tac Toe Game
// 1/19/2024

#include <iostream>
#include "Board.cpp"
using namespace std;

int main()
{
	int emptySpaces = 9;
	int row;
	int column;
	Board gameBoard;

	while (emptySpaces > 0)
	{
		gameBoard.Display();
		cout << "\nPlayer X turn. Which row do you choose (0, 1, 2): ";
		cin >> row;
		cout << "\nPlayer X turn. Which column do you choose (0, 1, 2): ";
		cin >> column;
		gameBoard.Move('X', row, column);
		if (gameBoard.checkWin('X'))
		{
			gameBoard.Display();
			cout << "\nPlayer X Wins!";
			break;
		}
		emptySpaces = emptySpaces - 1;

		gameBoard.Display();
		cout << "\nPlayer O turn. Which row do you choose (0, 1, 2): ";
		cin >> row;
		cout << "\nPlayer O turn. Which column do you choose (0, 1, 2): ";
		cin >> column;
		gameBoard.Move('O', row, column);
		if (gameBoard.checkWin('O'))
		{
			gameBoard.Display();
			cout << "\nPlayer O Wins!";
			break;
		}
		emptySpaces = emptySpaces - 1;
	}

	if (emptySpaces <= 0)
	{
		gameBoard.Display();
		cout << "\n It's a tie!";
	}
	return 0;
}