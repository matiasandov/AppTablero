//
//  Dice.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include "Dice.h"

Dice::Dice() {
    numberOfOptions = 6;
}

Dice::Dice(int n) {
    numberOfOptions = n;
}

int Dice::roll(){
    return 1 + (rand() % numberOfOptions);
}
