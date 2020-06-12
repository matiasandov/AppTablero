//
//  Header.h
//  Tablero SUPER FINAL
//
//  Created by Matías Méndez on 09/06/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
#include <exception>


class InvalidConfigurationException : public exception{
    
private:
    string param_name;
    int param_value;
    
    
    
public:
  
    InvalidConfigurationException();
    InvalidConfigurationException(string, int);
    string getName();
    int getValue();
    
    virtual const char* what() const throw(){
        
        return "Invalid parameter for ";
    }

    
};
#endif /* Header_h */
