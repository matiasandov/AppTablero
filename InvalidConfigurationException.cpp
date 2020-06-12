//
//  Exception.cpp
//  Tablero SUPER FINAL
//
//  Created by Matías Méndez on 09/06/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//
#include "InvalidConfigurationException.h"
using namespace std;
#include <stdio.h>
#include <iostream>
#include <exception>

InvalidConfigurationException::InvalidConfigurationException(){
    param_name = "";
    param_value = 0;
}

InvalidConfigurationException::InvalidConfigurationException(string name, int value) {
    param_name = name;
    param_value = value;
}

string InvalidConfigurationException::getName(){
    return param_name;
}

int InvalidConfigurationException::getValue(){
    return param_value;
}


