#include<iostream>
//DO NOT WRITE FUNCTION CODE HERE; USE dna.cpp for function implementation


/**
Given two dna strings returns the hamming distance of the strings.

The Hamming distance between these two strings is 7. Mismatched symbols are
colored red.  Given two strings s and t of equal length, the Hamming 
distance between s and t, denoted dH(s,t), is the number of
corresponding symbols that differ in s and t.

Note if strings aren't equal in length return -1.

@param dna1 A dna string.
@param dna2 A dna string.

@return The hamming distance of the two dna strings.

Sample Dataset (function parameter)
Parameter dna_string1: GAGCCTACTAACGGGAT
Parameter dna_string2: CATCGTAATGACGGCCT
Sample Output (function return value)
7

*/
int get_point_mutations(std::string dna1, std::string dna2);

/**
Given a dna string returns the reverse complement of the dna string.

In DNA strings, symbols "A" and "T" are complements of each other, as are 
"C" and "G".  The reverse complement of a DNA string s is the string sc 
formed by reversing the symbols of s(reversing the string), then taking the 
complement of each symbol (e.g., the reverse complement of "GTCA" is 
"TGAC").

IMPORTANT!!: ADD PARAMETER(@param) AND RETURN(@return) COMMENTS 
(see my example above)

*/
std::string get_dna_complement(std::string dna);

/**
Given a dna string returns the rna of the string.

An RNA string is a string formed from the alphabet containing "A", "C", 
"G", and "U".  Given a DNA string t corresponding to a coding strand, its 
transcribed RNA string u is formed by replacing all occurrences of "T" in
t with "U" in u.

IMPORTANT!!: 
DEFINE FUNCTION PROTOTYPE BELOW AND
ADD PARAMETER(@param) AND RETURN(@return) COMMENTS 
(see my example above)
*/

//define function prototype for transcribe_dna_into_rna with one string parameter
//that returns a string





/**
Given a dna string returns the gc content of dna.

The GC-content of a DNA string is given by the percentage of symbols in the string 
that are "C" or "G". For example, the GC-content of "AGCTATAG" is 37.5%. Note that 
the reverse complement of any DNA string has the same GC-content.

IMPORTANT!!:
DEFINE FUNCTION PROTOTYPE BELOW AND
ADD PARAMETER(@param) AND RETURN(@return) COMMENTS
(see my example above)
*/

//define function prototype for get_gc_content with a string parameter that returns
//a double
double get_gc_content(std::string dna);


/**
Given a number and precision will return a double rounded to the required precision.

@param number a double number
@param precision required precision for number
@return number rounded to required precision
https://stackoverflow.com/questions/11208971/round-a-float-to-a-regular-grid-of-predefined-points
*/
double round_to_precision(double number, int precision);




