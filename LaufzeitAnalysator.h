#ifndef LAUFZEITANALYSATOR_H
#define LAUFZEITANALYSATOR_H

#include <iostream>
#include "ListenElement.h"
//#include "GraphErzeuger.h"
#include "Faktoren.h"
//#include "Bibliothek.h"
using namespace std;

class LaufzeitAnalysator {
private:
	Faktoren* faktoren;
	ListenElement* startElement;
	long frequenz;
	string uebergangspfad;
	string ausgangspfad;
	double laufzeitUebergangspfad;
	double laufzeitAusgangspfad;
	void berechneLaufzeitEinzelgatter();

public:
	LaufzeitAnalysator();
	~LaufzeitAnalysator();
	void ausgabeErgebnis();
};
#endif