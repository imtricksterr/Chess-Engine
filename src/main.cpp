#include "engine/search.h"
#include <chess.hpp>
#include <iostream>

using namespace chess;

int main() {

    Board board;

    Movelist moves;
    movegen::legalmoves(moves, board);

    std::cout << "Legal moves: " << moves.size() << std::endl;


}