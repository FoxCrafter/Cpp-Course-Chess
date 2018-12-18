#include <iostream>

#include "board.h"

int main()
{
    Board b;
    b.addPiece(Piece::KING, 1, 1, true);
    b.addPiece(Piece::KING, 8, 8, false);
    b.addPiece(Piece::QUEEN, 8, 5, true);
    b.addPiece(Piece::KNIGHT, 7, 7, false);
    b.addPiece(Piece::PAWN, 5, 5, true);
    b.addPiece(Piece::QUEEN, 5, 4, false);
    b.addPiece(Piece::ROOK, 2, 8, true);
    b.print();
    Knight* n = (Knight*)b.getPiece(7, 7);
    std::cout << "\n---------------------------------------------\n\n";
    for(int i = 8; i > 0; i--)
    {
        for(int j = 1; j <= 8; j++)
        {
            if(n->canMove(j, i))
            {
                std::cout << "# ";
            }
            else
            {
                std::cout << "- ";
            }
        }
        std::cout << '\n';
    }
    return 0;
}
