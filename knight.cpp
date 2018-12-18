#include "knight.h"
#include <cstdlib>
#include "board.h"

Knight::Knight(Board* board, int x, int y, bool white)
: Piece(KNIGHT, board, x, y, white)
{
    //ctor
}

bool Knight::canMove(int x, int y)
{
    if(canAttack(x, y))
    {
        Piece* target = board->getPiece(x, y);
        if(target != NULL)
        {
            if(target->white == white)
            {
                return false;
            }
        }
        int oldX = this->x;
        int oldY = this->y;
        this->x = x;
        this->y = y;
        bool result = true;
        if(board->isChess(white, target))
        {
            result = false;
        }
        this->x = oldX;
        this->y = oldY;
        return result;
    }
}

bool Knight::canAttack(int x, int y)
{
    return (std::abs(this->x - x) == 1 && std::abs(this->y - y) == 2)
        || (std::abs(this->x - x) == 2 && std::abs(this->y - y) == 1);
}

