#ifndef AGENT_H
#define AGENT_H

//#include "flock.h"

class Flock;

class Agent
{    
    Flock *m_f;

public:
    Agent(Flock *f);  /* : f(new Flock())  {}*/

};

#endif // AGENT_H
