#include <iostream>
using namespace std;

class Board
{
    public:
        Board();
        void Display();
        void Move(char player, int row, int column);
        bool checkWin(char player);

    private:
        char layout[3][3] ={{' ', ' ', ' '},
                            {' ', ' ', ' '},
                            {' ', ' ', ' '}};
};
