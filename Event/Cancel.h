#ifndef _CANCEL_H
#define _CANCEL_H

#include "Event.h"
class Cancel : public Event
{

public:
	Cancel(int ED, int ID);
	virtual void Execute();
	~Cancel();
};
#endif // !
