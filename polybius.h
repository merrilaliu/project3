/*
 * polybius.h
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * Polybius square
 */

#ifndef __POLYBIUS__
#define __POLYBIUS__

#include "utility.h"
#include <string>
using namespace std;


/*
 * Requires: key does not contain duplicate characters and consists of only
 *           uppercase alphabet and/or digits from 0 to 9.
 * Modifies: Nothing.
 * Effects:  Returns a string with the key at the beginning and all the
 *           remaining characters from ALNUM following it.
 */
string mixKey(string key);


/*
 * Requires: Length of content equals 36 (since the grid is 6x6).
 * Modifies: grid.
 * Effects:  Fills the grid with the content.
 */
void fillGrid(char grid[SIZE][SIZE], string content);



/*
 * Requires: c is an uppercase alphanumeric character.
 * Modifies: Nothing.
 * Effects:  Returns a pair of coordinates in a string representation.
 *
 *           Example:
 *                      0   1   2   3   4   5
 *                      --- --- --- --- --- ---
 *                   0 | P | O | L | Y | B | I |
 *                      --- --- --- --- --- ---
 *                   1 | U | S | A | C | D | E |
 *                      --- --- --- --- --- ---
 *                   2 | F | G | H | J | K | M |
 *                      --- --- --- --- --- ---
 *                   3 | N | Q | R | T | V | W |
 *                      --- --- --- --- --- ---
 *                   4 | X | Z | 0 | 1 | 2 | 3 |
 *                      --- --- --- --- --- ---
 *                   5 | 4 | 5 | 6 | 7 | 8 | 9 |
 *                      --- --- --- --- --- ---
 *
 *                   Given the character 'G', this function should return "21",
 *                   since 2 is the row and 1 is the column that corresponds to
 *                   'G'.
 */
string findInGrid(char c, char grid[SIZE][SIZE]);


/*
 * Requires: key consists of only uppercase alphanumeric characters, 
 *           with no duplicate characters. 
 *           original consist of only uppercase alphanumeric 
 *           characters and spaces.
 *           A space is a valid character in original and must be represented as
 *           as a space in the ciphertext.
 * Modifies: grid
 * Effects:  If encrypt is true, returns original string encrypted with
 *           the polybius square created using key. If encrypt is false, returns
 *           original string decrypted with polybius square created using key.
 */
string polybiusSquare(char grid[SIZE][SIZE], string key, 
                      string original, bool encrypt);

#endif
