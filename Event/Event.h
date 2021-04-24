#ifndef _EVENT_H
#define _EVENT_H

class Event
{

protected:
	int ED;
	int MissionID;
public:
	Event(int ED, int MID):ED(ED), MissionID(MID)
	{}

	virtual void Execute() = 0;
	virtual ~Event();
};
#endif // !EVENT_H
