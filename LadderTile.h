//
//  LadderTile.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 5/26/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef LadderTile_h
#define LadderTile_h

#include "Tile.h"
using namespace std;

class LadderTile: public Tile {
protected:
    int reward;
    
public:
    LadderTile();
    LadderTile(int);
    int getValue();
};

#endif /* LadderTile_h */
