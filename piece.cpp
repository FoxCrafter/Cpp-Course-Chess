#include "piece.h"

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

