#pragma once

#include <string.h>
#include <string>
#include <iostream>

using namespace std;

#define maxCharCount 50
#define defaultMovies 0
#define defaultPark 'N'
#define defaultDate " "
#define monthsInYear 12
#define minMonths 1
#define minDays 1 
#define maxDays 31
#define currentYear 2023
#define monthAndDayDigits 2
#define yearDigits 4

class DisneyCharacter {
private:
    string name;
    string creationDate;
    int numMovies;
    char whichPark;

public:
    DisneyCharacter(string nameInput, string creationDateInput, int numMoviesInput, char whichParkInput);
    DisneyCharacter(string nameInput, string creationDateInput);
    string GetName();
    string GetCreationDate();
    int GetNumMovies();
    char GetWhichPark();
    void SetNumMovies(int numMoviesInput);
    bool SetWhichPark(char whichParkInput);
    void ShowInfo(void);
    bool PlaceCharacter(char whichPark);
    void SameMovies(DisneyCharacter& anotherCharacter);
    ~DisneyCharacter();
};