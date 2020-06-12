//
//  InvalidOptionException.h
//  Tablero SUPER FINAL
//
//  Created by Matías Méndez on 10/06/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#ifndef InvalidOptionException_h
#define InvalidOptionException_h

#include <stdio.h>
#include <iostream>
using namespace std;
#include <exception>


class InvalidOptionException : public exception{
    
private:
    string nameError;
    char letter;
    
public:
    InvalidOptionException();
    InvalidOptionException(string, char);
    
    virtual const char* what() const throw(){
        //return "Invalid ", param_name ," value ", param_value;
        return "Invalid option, please press C to continue next turn or E to end the game : ";
    }

    
};
#endif /* InvalidOptionException_h */
