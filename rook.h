#ifndef ROOK_H
#define ROOK_H

#include "piece.h"

class Rook : virtual public Piece
{
    public:
        Rook(Board* board, int x, int y, bool white);
        bool canMoveBase(int x, int y);
        bool canAttack(int x, int y);

    protected:

    private:
};

#endif // ROOK_H

