/*
* Filename: testDisneyCharacter.cpp
* Project: OOP:: A-02: Disney Character Class
* By: Ray Hong (8665442)
* Date: February 11th, 2023
* Description: This file contains the test-harness for the DisneyCharacter class.
*/

#include "DisneyCharacter.h"

int main() {
	DisneyCharacter Mickey("Mickey", "1929-01-01", 100, 'M');
	DisneyCharacter Minnie("Minnie", "1930-01-01");
	Minnie.SameMovies(Mickey);
	Minnie.ShowInfo();
	Mickey.ShowInfo();
	Minnie.SetWhichPark('E');
	Minnie.ShowInfo();
	return 0;
}