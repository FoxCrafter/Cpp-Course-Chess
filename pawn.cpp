#include "pawn.h"

#include "board.h"
#include <cstdlib>

Pawn::Pawn(Board* board, int x, int y, bool white)
: Piece(PAWN, board, x, y, white)
{
    //ctor
}

bool Pawn::canMoveBase(int x, int y)
{
    Piece* target = board->getPiece(x, y);
    if(target != NULL)
    {
        return canAttack(x, y);
    }

    if(x != this->x)
    {
        return false;
    }
    int dir = (white) ? 1 : -1;
    if(y == this->y + dir)
    {
        return true;
    }
    if(y == this->y + 2 * dir)
    {
        if(board->getPiece(x, y + dir) == NULL)
        {
            if(white)
            {
                return this->y <= WHITE_START_Y;
            }
            return this->y >= BLACK_START_Y;
        }
    }
    return false;
}

bool Pawn::canAttack(int x, int y)
{
    return std::abs((this->x - x) == 1) && (this->y == y - (white) ? 1 : -1);
}

