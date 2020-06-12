//
//  Turn.cpp
//  Tablero SUPER FINAL
/* int turnAct;
   int numTurns;
   
   int playerT;
   int tileTI;
   char typeTileT;
   int tileTF;
   int diceT;
   
*/  //Created by Matías Méndez on 06/06/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#include <stdio.h>
#include "Turn.h"
#include <iostream>
using namespace std;

Turn::Turn(int _nTurns, int pla, int tiI, int dic, char type, int tiF){
    turnAct = _nTurns;
    playerT = pla;
    tileTI = tiI;
    diceT = dic;
    typeTileT = type;
    tileTF = tiF;
}




ostream & operator << (ostream &os, const Turn &t2){
    //se regresara un objeto de tipo ostream
    os << t2.turnAct <<" "<<t2.playerT <<" "<<t2.tileTI<<" "
    <<t2.diceT<<" "<<t2.typeTileT<<" "<<t2.tileTF <<endl;
    return os;
}
