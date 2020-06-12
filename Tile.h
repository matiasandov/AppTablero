//
//  Tile.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 5/26/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef Tile_h
#define Tile_h
using namespace std;

class Tile {
protected:
    char tileType;
    
public:
    Tile();
    Tile(char);
    char getType();
    virtual int getValue();
};

#endif /* Tile_h */
