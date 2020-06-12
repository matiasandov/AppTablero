//
//  SnakeTile.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 5/26/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include "SnakeTile.h"
#include "Tile.h"

SnakeTile::SnakeTile():Tile('S') {
    penalty = -3;
}

SnakeTile::SnakeTile(int p):Tile('S') {
    penalty = p;
}

int SnakeTile::getValue() {
    return penalty;
}
