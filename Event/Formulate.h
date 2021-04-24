#ifndef _FORMULATE_H
#define _FORMULATE_H
#include "Event.h"

enum MIS_TYPE
{
	MOUNTAIN,
	EMERGENCY,
	POLAR
};

class Formulate : public Event
{
	MIS_TYPE Type;  //Type of mission
	int TLoc;	//Target Location
	int ReqDays; //Required days to complete the mission
	int Sig; //significant of the mission
public:
	Formulate(MIS_TYPE t, int ED, int ID, int location, int days, int sig);

	virtual void Execute();
	virtual ~Formulate();

};

#endif // !_FORMULATE_H
