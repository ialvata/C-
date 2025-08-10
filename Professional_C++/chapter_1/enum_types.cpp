#include <iostream>
#include <limits>

enum class PieceType {King, Queen, Rook, Pawn};

PieceType king {PieceType::King};
PieceType queen {PieceType::Queen};

int main(){
    std::cout<< "King value -> " << static_cast<int>(king) <<"\n";
    std::cout<< "Queen value -> " << static_cast<int>(queen) <<"\n";
}
