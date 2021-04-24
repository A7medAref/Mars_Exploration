#include <iostream>
#include "Formulate.h"

Formulate::Formulate(MIS_TYPE t, int ED, int ID, int location, int days, int sig) :Event(ED, ID)
{
	TLoc = location;
	ReqDays = days;
	Sig = sig;
}

void Formulate::Execute()
{

}

Formulate::~Formulate()
{

}