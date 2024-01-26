#include "Board.h"

Board :: Board()
{
    //This doesn't have any content at the moment
}

void Board :: Display()
{
    for(int i=0; i<255; i++) // C++ doesn't have a function to clear the console,
    {                        // so in order to clear the screen I have to flood it with newlines
        std::cout << "\n";
    }

    std::cout << layout[0][0] << " | " << layout[0][1] << " | " << layout[0][2] << "\n";
    std::cout << "----------\n";
    std::cout << layout[1][0] << " | " << layout[1][1] << " | " << layout[1][2] << "\n";
    std::cout << "----------\n";
    std::cout << layout[2][0] << " | " << layout[2][1] << " | " << layout[2][2] << "\n";
}

void Board :: Move(char player, int row, int column)
{
    if (layout[row][column] == ' ')
    {
        layout[row][column] = player;
    }
}

bool Board :: checkWin(char player)
{
    //check if either X or O has won
    for (int x=0; x <3; x++)
    {
        if (layout[x][0] == player && layout[x][1] == player && layout[x][2] == player)
        {
            return true;
        }
        if (layout[0][x] == player && layout[1][x] == player && layout[2][x] == player)
        {
            return true;
        }
    }
    if (layout[0][0] == player && layout[1][1] == player && layout[2][2] == player)
    {
        return true;
    }
    if (layout[0][2] == player && layout[1][1] == player && layout[2][0] == player)
    {
        return true;
    }
    return false;
}