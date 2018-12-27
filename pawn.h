#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

#define WHITE_START_Y 2
#define BLACK_START_Y 7

class Pawn : public Piece
{
    public:
        Pawn(Board* board, int x, int y, bool white);
        bool canMoveBase(int x, int y);
        bool canAttack(int x, int y);

    protected:

    private:
};

#endif // PAWN_H

