#ifndef ALARMED_H
#define ALARMED_H

#include <iostream>
#include <string>
#include "Person.h"

class Alarmed : public Person
{
public:
	Alarmed() : Person() {}
	void move() {
		srand(time(NULL));
		int randomLoc = rand() % 6 + 1;
		while (randomLoc == this->homeLoc)
			this->currentLoc = randomLoc;
		if (randomLoc == this->homeLoc && randomLoc > 2)
		{
			randomLoc--;
			this->currentLoc = randomLoc;
		}
		else if (randomLoc == this->homeLoc && randomLoc < 2)
		{
			randomLoc++;
			this->currentLoc = randomLoc;
		}
	}
	void interact() {
		string myLoc = this->getCurrentLoc();
		if (myLoc == "Docks") {
			int docksPop = Docks.size();
			int random = rand() % docksPop;
			vector<Person>::iterator it = Docks.begin() + random;
			Person temporary = Docks.at(random);
			if (temporary.getPersonState == "Ignorant") {
				Person *newAlarmed = new Alarmed;
				newAlarmed->setName(temporary.getName());
				newAlarmed->setPersonState(1);
				newAlarmed->currentLoc = temporary.currentLoc;
				newAlarmed->homeLoc = temporary.homeLoc;
				newAlarmed->workLoc = temporary.workLoc;
				Docks.erase(it);
			}
		}
		else if (myLoc == "Medical Hill") {
			int medHillPop = MedicalHill.size();
			int random = rand() % medHillPop;
			vector<Person>::iterator it = MedicalHill.begin() + random;
			Person temporary = MedicalHill.at(random);
			if (temporary.getPersonState == "Ignorant") {
				Person *newAlarmed = new Alarmed;
				newAlarmed->setName(temporary.getName());
				newAlarmed->setPersonState(1);
				newAlarmed->currentLoc = temporary.currentLoc;
				newAlarmed->homeLoc = temporary.homeLoc;
				newAlarmed->workLoc = temporary.workLoc;
				MedicalHill.erase(it);
			}
		}
		else if (myLoc == "Downtown") {
			int DtownPop = Downtown.size();
			int random = rand() % DtownPop;
			vector<Person>::iterator it = Downtown.begin() + random;
			Person temporary = Downtown.at(random);
			if (temporary.getPersonState == "Ignorant") {
				Person *newAlarmed = new Alarmed;
				newAlarmed->setName(temporary.getName());
				newAlarmed->setPersonState(1);
				newAlarmed->currentLoc = temporary.currentLoc;
				newAlarmed->homeLoc = temporary.homeLoc;
				newAlarmed->workLoc = temporary.workLoc;
				Downtown.erase(it);
			}
		}
		else if (myLoc == "University") {
			int UniversityPop = University.size();
			int random = rand() % UniversityPop;
			vector<Person>::iterator it = University.begin() + random;
			Person temporary = University.at(random);
			if (temporary.getPersonState == "Ignorant") {
				Person *newAlarmed = new Alarmed;
				newAlarmed->setName(temporary.getName());
				newAlarmed->setPersonState(1);
				newAlarmed->currentLoc = temporary.currentLoc;
				newAlarmed->homeLoc = temporary.homeLoc;
				newAlarmed->workLoc = temporary.workLoc;
				University.erase(it);
			}
		}
		else if (myLoc == "Soho") {
			int SohoPop = Soho.size();
			int random = rand() % SohoPop;
			vector<Person>::iterator it = Soho.begin() + random;
			Person temporary = Soho.at(random);
			if (temporary.getPersonState == "Ignorant") {
				Person *newAlarmed = new Alarmed;
				newAlarmed->setName(temporary.getName());
				newAlarmed->setPersonState(1);
				newAlarmed->currentLoc = temporary.currentLoc;
				newAlarmed->homeLoc = temporary.homeLoc;
				newAlarmed->workLoc = temporary.workLoc;
				Soho.erase(it);
			}
		}
		else {
			int UptownPop = Uptown.size();
			int random = rand() % UptownPop;
			vector<Person>::iterator it = Uptown.begin() + random;
			Person temporary = Uptown.at(random);
			if (temporary.getPersonState == "Ignorant") {
				Person *newAlarmed = new Alarmed;
				newAlarmed->setName(temporary.getName());
				newAlarmed->setPersonState(1);
				newAlarmed->currentLoc = temporary.currentLoc;
				newAlarmed->homeLoc = temporary.homeLoc;
				newAlarmed->workLoc = temporary.workLoc;
				Uptown.erase(it);
			}
		}
	}
};
#endif