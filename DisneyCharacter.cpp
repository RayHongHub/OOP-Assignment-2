/*
* Filename: DisneyCharacter.cpp
* Project: OOP:: A-02: Disney Character Class
* By: Ray Hong (8665442)
* Date: February 11th, 2023
* Description: This file contains the two overloaded constructors, destructors, accessors for each data member and mutators for numMovies and whichPark.
*/

#include <string.h>
#include <string>
#include <iostream>
#include "DisneyCharacter.h"

#pragma warning(disable: 4996)

DisneyCharacter::DisneyCharacter(string nameInput, string creationDateInput, int numMoviesInput, char whichParkInput) :name(nameInput), creationDate(defaultDate), numMovies(defaultMovies), whichPark(defaultPark) {
    // name validation check
    if (name.length() > maxCharCount) {
        name = nameInput.substr(0, 46) + " ...";
    }

    // creationDate validation check
    char* dateCopy = (char*)(creationDateInput.c_str());
    char dateCopy2[maxCharCount];

    strcpy(dateCopy2, dateCopy);
    char* token = strtok(dateCopy2, "-");
    string dateParts[3] = {};
    dateParts[0] = token;
    int i = 1;
    while (token != NULL) {
        token = strtok(NULL, "-");
        if (token == NULL) {
            break;
        }
        dateParts[i] = token;
        i++;
    }

    if (dateParts[0].length() == yearDigits && dateParts[1].length() == monthAndDayDigits && dateParts[2].length() == monthAndDayDigits) {
        int year = 0, month = 0, day = 0;
        if (sscanf(dateCopy, "%d-%d-%d", &year, &month, &day) == 3) {
            if (year <= currentYear && month >= minMonths && month <= monthsInYear && day >= minDays && day <= maxDays) {
                creationDate = creationDateInput;
            }
        }
    }

    // numbMovies validation check
    SetNumMovies(numMoviesInput);

    // whichPark validation check
    SetWhichPark(whichParkInput);
}

DisneyCharacter::DisneyCharacter(string nameInput, string creationDateInput)
    :name(nameInput), creationDate(creationDateInput), numMovies(defaultMovies), whichPark(defaultPark) {
    // name validation check
    if (name.length() > maxCharCount) {
        name = nameInput.substr(0, 46) + " ...";
    }

    // creationDate validation check
    char* dateCopy = (char*)(creationDateInput.c_str());
    char dateCopy2[maxCharCount];

    strcpy(dateCopy2, dateCopy);
    char* token = strtok(dateCopy2, "-");
    string dateParts[3] = {};
    dateParts[0] = token;
    int i = 1;
    while (token != NULL) {
        token = strtok(NULL, "-");
        if (token == NULL) {
            break;
        }
        dateParts[i] = token;
        i++;
    }

    if (dateParts[0].length() == yearDigits && dateParts[1].length() == monthAndDayDigits && dateParts[2].length() == monthAndDayDigits) {
        int year = 0, month = 0, day = 0;
        if (sscanf(dateCopy, "%d-%d-%d", &year, &month, &day) == 3) {
            if (year <= currentYear && month >= minMonths && month <= monthsInYear && day >= minDays && day <= maxDays) {
                creationDate = creationDateInput;
            }
        }
    }
}

string DisneyCharacter:: GetName() {
    return name;
}

string DisneyCharacter::GetCreationDate() {
    return creationDate;
}

int DisneyCharacter:: GetNumMovies() {
    return numMovies;
}

char DisneyCharacter::GetWhichPark() {
    return whichPark;
}


void DisneyCharacter::SetNumMovies(int numMoviesInput)
{
    if (numMoviesInput >= defaultMovies) {
        numMovies = numMoviesInput;
    }
}

bool DisneyCharacter::SetWhichPark(char whichParkInput)
{
    bool returnValue = false;
    if (whichParkInput == 'A' || whichParkInput == 'C' || whichParkInput == 'E' || whichParkInput == 'M' || whichParkInput == 'N' || whichParkInput == 'S') {
        whichPark = whichParkInput;
        returnValue = true;
    }
    return returnValue;
}

void DisneyCharacter::ShowInfo(void) {
    cout << GetName() << endl;
    cout << GetCreationDate() << endl;
    cout << GetNumMovies() << endl;
    switch (GetWhichPark()) {
    case 'A':
        cout << "Animal Kingdom";
        break;
    case 'C':
        cout << "California Adventure";
        break;
    case 'E':
        cout << "Epcot";
        break;
    case 'M':
        cout << "Magic Kingdom";
        break;
    case 'S':
        cout << "Disney Studios";
        break;
    case 'N':
        cout << "Not Placed";
        break;
    default:
        cout << "Not Placed";
        break;
    }
    cout << endl << endl;
}

bool DisneyCharacter::PlaceCharacter(char whichPark) {
    return SetWhichPark(whichPark);
}

void DisneyCharacter::SameMovies(DisneyCharacter& anotherCharacter) {
    SetNumMovies(anotherCharacter.GetNumMovies());
}

DisneyCharacter::~DisneyCharacter() {
    cout << GetName() << " destroyed" << endl;
}