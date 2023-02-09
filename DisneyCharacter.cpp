#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <string>
#include <stdlib.h>

#pragma warning(disable: 4996)

#define maxCharCount 50

using namespace std;

class DisneyCharacter {
private:
    string name;
    string creationDate;
    int numMovies_;
    char whichPark_;
};