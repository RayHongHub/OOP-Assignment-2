#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <string>
#include <stdlib.h>

#pragma warning(disable: 4996)

#define maxCharCount 50
#define defaultMovies 0
#define defaultPark 'N'

using namespace std;

class DisneyCharacter {
public:
    DisneyCharacter(string nameInput, string creationDateInput, int numMoviesInput, char whichParkInput) {
        name = nameInput;
        creationDate = creationDateInput;
        numMovies = numMoviesInput;
        whichPark = whichParkInput;
    }

    DisneyCharacter(string nameInput, string creationDateInput) {
        name = nameInput;
        creationDate = creationDateInput;
        numMovies = defaultMovies;
        whichPark = defaultPark;
    }

private:
    string name;
    string creationDate;
    int numMovies;
    char whichPark;
}; 