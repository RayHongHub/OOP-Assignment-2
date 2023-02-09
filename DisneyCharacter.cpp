#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <string>
#include <stdlib.h>

#pragma warning(disable: 4996)

#define maxCharCount 50

using namespace std;

class DisneyCharacter {
public:
    DisneyCharacter(string nameInput, string creationDateInput, int numMoviesInput, char whichParkInput) {
        name = nameInput;
        creationDate = creationDateInput;
        numMovies = numMoviesInput;
        whichPark = whichParkInput;
    }
private:
    string name;
    string creationDate;
    int numMovies;
    char whichPark;
}; 