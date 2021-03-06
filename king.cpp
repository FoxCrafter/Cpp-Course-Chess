#include "king.h"
#include <cstdlib>
#include <algorithm>

King::King(Board* board, int x, int y, bool white)
: Piece(KING, board, x, y, white)
{
    //ctor
}

bool King::canMoveBase(int x, int y)
{
    return canAttack(x,y);
}

bool King::canAttack(int x, int y)
{
    return std::max(std::abs(this->x - x), std::abs(this->y - y)) == 1;
}

