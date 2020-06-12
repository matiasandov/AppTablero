//
//  SnakeTile.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 5/26/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef SnakeTile_h
#define SnakeTile_h

#include "Tile.h"
using namespace std;

class SnakeTile: public Tile {
protected:
    int penalty;
    
public:
    SnakeTile();
    SnakeTile(int);
    int getValue();
};

#endif /* SnakeTile_h */
