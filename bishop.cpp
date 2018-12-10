#include "bishop.h"

#include "board.h"
#include <cstdlib>

Bishop::Bishop(Board* board, int x, int y, bool white)
: Piece(BISHOP, board, x, y, white)
{
    //ctor
}

bool Bishop::canMove(int x, int y)
{
    return canAttack(x,y);
}

bool Bishop::canAttack(int x, int y)
{
    int r = std::abs(this->x - x);
    if(r == 0 || r != std::abs(this->y - y))
    {
        return false;
    }
    int dx = (this->x < x) ? 1 : -1;
    int dy = (this->y < y) ? 1 : -1;
    for(int i = 1; i < r; i++)
    {
        if(board->getPiece(this->x + dx * i, this->y + dy * i) != NULL)
        {
            return false;
        }
    }
    return true;
}

