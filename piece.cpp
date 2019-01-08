#include "piece.h"

#include "board.h"
#include <cstdlib>

Piece::Piece(Type type, Board* board, int x, int y, bool white)
: type(type), white(white), board(board), x(x), y(y)
{
    //ctor
}

Piece::~Piece()
{
    //dtor
}

int Piece::getX()
{
    return x;
}

int Piece::getY()
{
    return y;
}

bool Piece::move(int x, int y)
{
    if(canMove(x, y))
    {
        bool epic = (type == PAWN) || (board->getPiece(x, y) != NULL);
        forceMove(x, y);
        board->onMove(epic);
        return true;
    }
    return false;
}

void Piece::forceMove(int x, int y)
{
    if(x != this->x || y != this->y)
    {
        board->removePiece(x, y);
        this->x = x;
        this->y = y;
    }
}

bool Piece::canMove(int x, int y)
{
    if(canMoveBase(x, y))
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
        bool result = !board->isChess(white, target);
        this->x = oldX;
        this->y = oldY;
        return result;
    }
    return false;
}

