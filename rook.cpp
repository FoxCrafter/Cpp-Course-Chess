#include "rook.h"

#include "board.h"
#include <cstdlib>

Rook::Rook(Board* board, int x, int y, bool white)
: Piece(ROOK, board, x, y, white)
{
    //ctor
}

bool Rook::canMove(int x, int y)
{
    return canAttack(x,y);
}

bool Rook::canAttack(int x, int y)
{
    if(this->x == x)
    {
        if(this->y == y)
        {
            return false;
        }
        int d = (this->y < y) ? 1 : -1;
        for(int i = this->y + d; i != y; i += d)
        {
            if(board->getPiece(x, i) != NULL)
            {
                return false;
            }
        }
        return true;
    }
    if(this->y == y)
    {
        int d = (this->x < x) ? 1 : -1;
        for(int j = this->x + d; j != x; j += d)
        {
            if(board->getPiece(j, y) != NULL)
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

