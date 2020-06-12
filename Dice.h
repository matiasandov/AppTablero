//
//  Dice.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef Dice_h
#define Dice_h

#include <vector>
using namespace std;

class Dice {
  private:
    int numberOfOptions;
    
  public:
    Dice();
    Dice(int);
    int roll();
};

#endif /* Dice_h */
