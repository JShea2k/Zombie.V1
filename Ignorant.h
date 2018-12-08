#ifndef IGNORANT_H
#define IGNORANT_H

#include <iostream>
#include <string>
#include "Person.h"

class Ignorant : public Person
{
public:
	Ignorant() : Person() {}

	void move() {
		if (currentLoc == workLoc)
			currentLoc = homeLoc;
		else if (currentLoc == homeLoc)
			currentLoc = workLoc;
	}
};
#endif
