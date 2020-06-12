//
//  MyGame.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include "Dice.h"
#include "Board.h"
#include "MyGame.h"
#include "Turn.h"
#include "InvalidOptionException.h"

using namespace std;

MyGame::MyGame() {
    numberOfTiles = 30;
    numberOfSnakes = 3;
    numberOfLadders = 3;
    penalty = -3;
    reward = 3;
    numberOfPlayers = 2;
    numberOfTurns = 30;
    gameType = 'M';
}

//juego personalizado
MyGame::MyGame(int t, int s, int l, int p, int r, int py, int mt, char gt) {
    //de board
    numberOfTiles = t;
    numberOfSnakes = s;
    numberOfLadders = l;
    penalty = p;
    reward = r;
    
    
    numberOfPlayers = py;
    numberOfTurns = mt;
    gameType = gt;
}

void MyGame::initialize() {
    
    board = Board(numberOfTiles, numberOfSnakes, numberOfLadders, penalty, reward);
    //estaba counter=0 y numberOfPlayers+
    for(int counter = 1; counter < (numberOfPlayers+1); counter++) {
        //se agrega un objeto Player a a un vector de players y se inicializa en turno 1
        players.push_back(Player(counter));
    }
    
    turn = 1;
    dice = Dice();
    
}

void MyGame::start() {
    int cont000 = 0;
    
    initialize();
    
    for(Player p: players) {
        p.setTile(1);
    }
    
    if(gameType == 'M')
        cout << "Press C to continue next turn, or E to end the game:" << endl;
    char option = 'C';
    
    
    bool playerWon = false;
    
    //mientras no se acaben los turnos
    while(option != 'E' && turn <=  numberOfTurns &&
          !playerWon) {

        if(option == 'C') {
            
           int playerIndex = turn % numberOfPlayers;
            Player *p = &players[playerIndex];
            
            //asignar variables para contruir objeto turno
            int playerNum = (p->getNumber());
            int actTile = p->getTile();
            int number = dice.roll();
            
            //se avanza al jugador segun resultado de number
            p->setTile(actTile + number);
            
            char c = board.getTile(p->getTile() - 1);
            
            //se suma si es reward o penalty
            p->setTile(p->getTile() + board.getValue(p->getTile()));
            
            int finalTile = p->getTile();
            
            //asi no imprimira una casilla que exceda el numberOfTiles
            if (finalTile >= numberOfTiles){
                finalTile = numberOfTiles;
            }
            
            Turn t = Turn(turn, playerNum, actTile, number, c, finalTile);
            
            //se hace sobrecarga de operador <<
            cout << t;
            
            
            
        
            if(finalTile >= numberOfTiles || turn >= numberOfTurns) {
                //AQUI LE QUITE EL +1
                cout << "Player " + to_string(playerIndex +1) + " is the winner!!!" << endl;
                playerWon = true;
            }
            
            turn = turn +1;
            playerIndex++;
            
            if(gameType == 'M')
                cin >> option;

        
        }//if
        
        try {
            if (option != 'E' && option != 'C') {
                throw InvalidOptionException("option", option);
                //cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
                
            }
        } catch (exception &e) {
            cout << e.what() <<endl;
            cin >> option;
            cont000 = cont000 + 1;
            
            if (cont000 == 5) {
                option = 'E';
            }
            
            //option = 'E';
        }
                 
    }
    cout << "-- GAME OVER --" << endl;
    
    if(turn >= numberOfTurns)
        cout << "The maximum number of turns has been reached..." << endl;
        
    else
        cout << "Thanks for playing!!!" << endl;
    
    
}// void


