#ifndef __ANT_H__
#define __ANT_H__

#include "organism.h"

class Ant: public Organism {
    public:
        Ant(int xpos, int ypos);
        virtual bool canBreed();
        virtual void move(Organism ***, const int, const int);
        virtual std::pair<int,int> breed(std::pair<int, int>);
        virtual void resetBreedTimer();
        virtual void print();
};

#endif