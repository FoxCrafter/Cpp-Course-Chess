#ifndef PIECE_H
#define PIECE_H

class Board;

class Piece
{
    public:
        const enum Type{
            PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, N_TYPES
        } type;
        const bool white;
        Piece(Type type, Board* board, int x, int y, bool white);
        virtual ~Piece();
        virtual bool move(int x, int y);
        void forceMove(int x, int y);
        bool canMove(int x, int y);
        virtual bool canMoveBase(int x, int y) = 0; // Does not care about chess
        virtual bool canAttack(int x, int y) = 0;
        int getX();
        int getY();

    protected:
        Board * const board;
        int x, y;
};

#endif // PIECE_H

