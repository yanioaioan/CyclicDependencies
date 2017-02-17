#ifndef FLOCK_H
#define FLOCK_H

#include "agent.h"
#include <vector>
#include <memory>

class Flock
{
    std::vector< std::unique_ptr<Agent> > agentsvector;

public:
    Flock()
    {
         agentsvector.resize(10);
         for(auto &v:agentsvector)
         {
             v = std::unique_ptr<Agent>{new Agent(this)}  ;
         }
    }
};

#endif // FLOCK_H
