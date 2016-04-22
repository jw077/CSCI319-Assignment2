/*

	Name:			Matthew Saliba
	Student#:		3284165
	Subject:		CSCI319
	Desc:			Assignment 2: Main File
	Date:

*/

#include <iostream>
#include <string>
#include <map>
#include "functions.h"

using namespace std;

int main(){


	nodeptr chord = NULL;
	int n = 5;
	int size = 	pow(n);
	
	/*
	InitChord(size, 1, n, chord);
	AddPeer(4, n, chord);
	AddPeer(9, n, chord);
	AddPeer(11, n, chord);
	AddPeer(14, n, chord);
	AddPeer(18, n, chord);
	AddPeer(20, n, chord);
	AddPeer(21, n, chord);
	AddPeer(28, n, chord);
	outputChord(chord, n);*/
	
	
	
// fix duplicate peer entry
	InitChord(size, 0, n, chord);
//	outputChord(chord, n);
	AddPeer(7, n, chord);
//	outputChord(chord, n);
	AddPeer(3, n, chord);
//	outputChord(chord, n);
	RemovePeer(3, n, chord);
//	outputChord(chord, n);
	
	AddPeer(12, n, chord);
//	outputChord(chord, n);
	AddPeer(3, n, chord);
//	outputChord(chord, n);	
	AddPeer(9, n, chord);
//	outputChord(chord, n);
	RemovePeer(3, n, chord);
//	outputChord(chord, n);
	AddPeer(17, n, chord);
//	outputChord(chord, n);	


	FindKey("THIS IS A TEST", n, chord, n);
	FindKey("Markus Hagenbuchner", n, chord, n);
	FindKey("CSCI319", n, chord, n);
		
	/*
	unsigned int temp;
	string dataString = "CSCI319";

	temp = Hash(size,dataString);	*/

	return 0;
}