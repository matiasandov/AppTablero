//
//  Turn.h
//  Tablero SUPER FINAL
//
//  Created by Matías Méndez on 06/06/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#ifndef Turn_h
#define Turn_h
#include <iostream>
#include "Dice.h"
#include "Board.h"
using namespace std;

class Turn{
private:
    int turnAct;
    int numTurns;
    int playerT;
    int tileTI;
    char typeTileT;
    int tileTF;
    int diceT;
    
public:
   
    Turn();
    Turn(int, int, int, int, char, int);
    int getNumTurns();
    //nota que si no le pones friend no funciona, asi le indicas que se le pasaran atributos de otros clases creo
    friend ostream & operator << (ostream &os, const Turn &t2);
    
};


#endif /* Turn_h */
