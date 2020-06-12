//
//  LadderTile.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 5/26/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include "LadderTile.h"
#include "Tile.h"

LadderTile::LadderTile():Tile('L') {
    reward = 3;
}

LadderTile::LadderTile(int r):Tile('L') {
    reward = r;
}

int LadderTile::getValue() {
    return reward;
}
