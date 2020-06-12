//
//  MyGame.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef MyGame_h
#define MyGame_h

#include <iostream>
#include <vector>
#include "Board.h"
#include "Player.h"
#include "Dice.h"
#include "Turn.h"

using namespace std;

class MyGame {
  private:
    Board board;
    vector<Player> players;
    int turn;
    Dice dice;
    int numberOfTiles;
    int numberOfSnakes;
    int numberOfLadders;
    int penalty;
    int reward;
    int numberOfPlayers;
    int numberOfTurns;
    char gameType;
    void initialize();
    
    
    
  public:
    MyGame();
    MyGame(int, int, int, int, int, int, int, char);
    void start();
    
    
};

#endif /* MyGame_h */
