//
//  Board.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef Board_h
#define Board_h

#include <iostream>
#include <vector>

#include "Tile.h"
using namespace std;

class Board {
  private:
    vector<Tile> tiles;
    int numberOfTiles;
    int numberOfSnakes;
    int numberOfLadders;
    int penalty;
    int reward;
    void initialize();
    
  public:
    Board();
    Board(int, int, int, int, int);
    string draw();
    char getTile(int);
    int getValue(int);
    
};


#endif /* Board_h */
