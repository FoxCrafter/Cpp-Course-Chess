#include "queen.h"

Queen::Queen(Board* board, int x, int y, bool white)
: Piece(QUEEN, board, x, y, white), Rook(board, x, y, white), Bishop(board, x ,y, white)
{
    //ctor
}

bool Queen::canMove(int x, int y)
{
    return canAttack(x,y);
}

bool Queen::canAttack(int x, int y)
{
    return Rook::canAttack(x, y) || Bishop::canAttack(x, y);
}

