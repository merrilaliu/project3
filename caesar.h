/*
 * caesar.h
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * Caesar cipher
 */

#ifndef __CAESAR__
#define __CAESAR__

#include <string>
using namespace std;


/*
 * Requires: c is an alphabetical character.
 * Modifies: Nothing.
 * Effects:  Returns c shifted by n characters.
 *           If c is lowercase, it will remain lowercase.
 *           If c is uppercase, it will remain uppercase.
 * Used in:  caesarCipher.
 */
char shiftAlphaCharacter(char c, int n);


/*
 * Requires: Nothing.
 * Modifies: Nothing.
 * Effects:  If encrypt is true, returns string encrypted with Caesar cipher
 *           using key. If encrypt is false, returns string decrypted with
 *           Caesar cipher using key.
 */
string caesarCipher(string original, int key, bool encrypt);


#endif
