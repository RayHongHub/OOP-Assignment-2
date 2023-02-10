#include "DisneyCharacter.h"

int main() {
	DisneyCharacter Mickey("Mickey", "1929-01-01", 100, 'M');
	DisneyCharacter Minnie("Minnie", "1930-01-01");
	Minnie.SameMovies(Mickey);
	Minnie.ShowInfo();
	Mickey.ShowInfo();
	return 0;
}