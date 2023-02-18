/*
 * main.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * main() function for Project 3 Ciphers
 * selects between executing your test cases in test.cpp
 * and your implementation of Ciphers in ciphers.cpp
 */

#include <iostream>
#include <string>

using namespace std;

//************************************************************************
// Function declarations. Function definitions are in rps.cpp and test.cpp
//************************************************************************
void ciphers();
void startTests();

int main() {
    
    cout << "-------------------------------" << endl
         << "EECS 183 Project 3 Menu Options" << endl
         << "-------------------------------" << endl;
    cout << "1) Execute testing functions in test.cpp" << endl;
    cout << "2) Execute ciphers() function to use ciphers" << endl;    
    cout << "Choice --> ";

    int choice;
    cin >> choice;

    // remove the retrun character from the cin stream buffer
    string junk;
    getline(cin, junk);

    if (choice == 1) {
        startTests();
    }
    //else if (choice == 2) {
   //     ciphers();
   // }
    
    //return 0;
}
