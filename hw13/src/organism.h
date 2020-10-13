#ifndef __ORGANISM_H__
#define __ORGANISM_H__

#include <tuple>

const int UP = 1;
const int DOWN = 2;
const int RIGHT = 3;
const int LEFT = 4;

class Organism {
    protected:
        int timeToBreed;
        int xpos;
        int ypos;
        
        Organism(int xpos, int ypos, int timeToBreed): xpos(xpos), ypos(ypos), timeToBreed(timeToBreed) {}
    
    public:
        virtual bool canBreed() = 0;
        virtual void move(Organism ***grid, const int, const int) = 0;
        virtual std::pair<int,int> breed(std::pair<int, int>) = 0;
        virtual void resetBreedTimer() = 0;
        virtual void print() = 0;
};

#endif