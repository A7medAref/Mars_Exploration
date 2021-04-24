#ifndef _PERMUTE_H
#define _PERMUTE_H

#include "Event.h"
class Permute : public Event
{

public:
	Permute(int ED, int ID);
	virtual void Execute();
	~Permute();
};
#endif // !
