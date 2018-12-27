#include "knight.h"
#include <cstdlib>
#include "board.h"

Knight::Knight(Board* board, int x, int y, bool white)
: Piece(KNIGHT, board, x, y, white)
{
    //ctor
}

bool Knight::canMoveBase(int x, int y)
{
    return canAttack(x, y);
}

bool Knight::canAttack(int x, int y)
{
    return (std::abs(this->x - x) == 1 && std::abs(this->y - y) == 2)
        || (std::abs(this->x - x) == 2 && std::abs(this->y - y) == 1);
}

