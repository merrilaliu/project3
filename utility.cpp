/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <#Names#>
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * <#description#>
 */

#include "utility.h"
#include <iostream>


string toUpperCase(string original) {
    // TODO: implement
    
    // returning a string to avoid compile error
    return "";
}

string removeNonAlphas(string original) {
    // TODO: implement
    
    // returning a string to avoid compile error
    return "";
}

string removeDuplicate(string original) {
    // TODO: implement
    string finalString = "";
    for (int i = 0; i < original.size(); i++) {
        if (! (finalString.find(original[i]) < finalString.length())) {
            finalString += original[i];
        }
    }
    
    // returning a string to avoid compile error
    return finalString;
}

int charToInt(char original) {
    // TODO: implement
    int integerForm = 0;
    integerForm = int(original) - 48;
    // returning 0 to avoid compile error
    return integerForm;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
