//
//  main.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <iostream>
#include "MyGame.h"
#include "InvalidConfigurationException.h"

using namespace std;

int main(int argc, const char * argv[]) {
    char params = 'N';
    cout << "Do you want to give parameters (Y/N)?" << endl;
    cin >> params;
    try {
        if(params == 'Y') {
            int tiles;
            int snakes;
            int ladders;
            int penalty;
            int reward;
            int players;
            int turns;
            char gameType;
            
            cout << "Number of tiles:" << endl;
            cin >> tiles;
            if(tiles < 1) {
                throw  InvalidConfigurationException("tiles", tiles);
            }
            
            cout << "Number of snakes:" << endl;
            cin >> snakes;
            if(snakes < 0) {
                throw  InvalidConfigurationException("snakes", snakes);
            }
            
           
            cout << "Number of ladders:" << endl;
            cin >> ladders;
            if(ladders < 0) {
                throw  InvalidConfigurationException("ladders", ladders);
            }
            
            
            cout << "Amount of penalty:" << endl;
            cin >> penalty;
            if(penalty < 0) {
                throw  InvalidConfigurationException("penalty", penalty);
            }
            
            cout << "Amount of reward:" << endl;
            cin >> reward;
            if(reward < 0) {
                       throw  InvalidConfigurationException("reward", reward);
                   }
            
            
            cout << "Number of players:" << endl;
            cin >> players;
            if(players <= 0) {
                throw  InvalidConfigurationException("players", players);
            }
            
            cout << "Number of turns:" << endl;
            cin >> turns;
            if(turns <= 0) {
                throw  InvalidConfigurationException("turns", turns);
            }
            
            cout << "Game type (M/A):" << endl;
            cin >> gameType;
            MyGame g = MyGame(tiles, snakes, ladders, penalty, reward, players, turns, gameType);
            
            g.start();
        } else {
            MyGame g;
            //g.initialize();
            g.start();
        }
    }
    
    
    catch(InvalidConfigurationException &e) {
        cout << e.what() << e.getName() <<" with value :"<< e.getValue() <<endl;
        return 1;
    }
    return 0;
}
