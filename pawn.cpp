#include "pawn.h"
#include <cstdlib>

Pawn::Pawn(Board* board, int x, int y, bool white)
: Piece(PAWN, board, x, y, white)
{
    //ctor
}

bool Pawn::canMove(int x, int y)
{
    return (this->x == x) && (this->y == y - (white) ? 1 : -1);
    //                                      "(white) ? 1 : -1" ha white akkor 1, ha nem, akkor -1
}

bool Pawn::canAttack(int x, int y)
{
    return std::abs((this->x - x) == 1) && (this->y == y - (white) ? 1 : -1);
}

