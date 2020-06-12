//
//  Player.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <iostream>

using namespace std;

class Player {
  private:
    int number;
    int tile;
    
  public:
    Player();
    Player(int);
    string draw();
    void setTile(int);
    int getTile();
    int getNumber();
    
};

#endif /* Player_h */
