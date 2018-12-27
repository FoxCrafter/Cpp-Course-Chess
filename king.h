#ifndef KING_H
#define KING_H

#include "piece.h"

class King : public Piece
{
    public:
        King(Board* board, int x, int y, bool white);
        bool canMoveBase(int x, int y);
        bool canAttack(int x, int y);

    protected:

    private:
};

#endif // KING_H

