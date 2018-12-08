#ifndef MAP_H_
#define MAP_H_
#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Person.h"
using namespace std;
//vectors holding people at these locations

vector<string> listNames;
vector<Person> Soho;
vector<Person> Docks;
vector<Person> University;
vector<Person> Uptown;
vector<Person> Downtown;
vector<Person> MedicalHill;

// list of vectors from above
list <vector<Person>> districtLayout;


#endif