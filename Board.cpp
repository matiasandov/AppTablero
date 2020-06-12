//
//  Board.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include "Board.h"
#include "Tile.h"
#include "SnakeTile.h"
#include "LadderTile.h"

Board::Board() {
    numberOfTiles = 30;
    numberOfSnakes = 3;
    numberOfLadders = 3;
    penalty = -3;
    reward = 3;
    initialize();
}

Board::Board(int n, int s, int l, int p, int r) {
    numberOfTiles = n;
    numberOfSnakes = s;
    numberOfLadders = l;
    penalty = p;
    reward = r;
    initialize();
    
    
}

void Board::initialize() {
    //LE AGREGUE ESTE +7 Porque habia un error al regresar una casilla que no existìa
    tiles = vector<Tile>(numberOfTiles+7);
    int snakes = 0;
    int ladders = 0;
    while(snakes < numberOfSnakes) {
        int index = (rand() % numberOfTiles);
        if(tiles[index].getType() == 'N') {
            tiles[index] = SnakeTile(penalty);
            snakes++;
        }
    }
    while(ladders < numberOfSnakes) {
        int index = (rand() % numberOfTiles);
        if(tiles[index].getType() == 'N') {
            tiles[index] = LadderTile(reward);
            ladders++;
        }
    }
}

string Board::draw(){
    string brd = "";
    for (Tile t : tiles) {
        char c = t.getType();
        brd += c; // brd = brd + c;
        brd += " "; // brd = brd + " ";
    }
    return brd;
}

char Board::getTile(int index) {
    return tiles[index].getType();
}

int Board::getValue(int index) {
    return tiles[index].getValue();
}
