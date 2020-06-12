//
//  InvalidOptionException.cpp
//  Tablero SUPER FINAL
//
//  Created by Matías Méndez on 10/06/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#include <stdio.h>
#include "InvalidOptionException.h"
#include <iostream>
using namespace std;

InvalidOptionException::InvalidOptionException(){
    nameError = " ";
    letter = ' ';
}

InvalidOptionException::InvalidOptionException(string nE, char lett){
    nameError =nE ;
    letter = lett;
}
