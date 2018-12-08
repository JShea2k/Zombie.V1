#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Map.h"

class Zombie : public Person
{
public:
	Zombie() : Person() {}
	void move()
	{
		// can only move to adjacent districts
		int Loc = this->currentLoc;
		int random = rand() % 3;
		if (Loc == 1) {
			if (random == 0 || random == 1)
				this->currentLoc++;

		}
		else if (Loc >= 2 && Loc < 6) {
			if (random == 0)
				this->currentLoc--;
			else if (random == 1)
				this->currentLoc = Loc;
			else
				this->currentLoc++;
		}
		else
			this->currentLoc--;
	}


	void bite();
};
#endif
