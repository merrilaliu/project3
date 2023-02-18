/*
 * vigenere.h
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * Vigenere cipher
 */

#ifndef __VIGENERE__
#define __VIGENERE__

#include <string>
using namespace std;


/*
 * Requires: keyword contains at least one alphabetical character.
 * Modifies: Nothing.
 * Effects:  If encrypt is true, returns original string encrypted with
 *           Vigenere cipher using keyword. If encrypt is false, returns
 *           original string decrypted with Vigenere cipher using keyword.
 */
string vigenereCipher(string original, string keyword, bool encrypt);


#endif

