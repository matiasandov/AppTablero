//
//  Tile.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 5/26/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include "Tile.h"

Tile::Tile() {
    tileType = 'N';
}

Tile::Tile(char t) {
    tileType = t;
}

char Tile::getType() {
    return tileType;
}

int Tile::getValue() {
    return 0;
}
