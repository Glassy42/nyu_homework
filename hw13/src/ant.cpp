#include "ant.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <tuple>

Ant::Ant(int xpos, int ypos): Organism(xpos, ypos, 3) {}

bool Ant::canBreed() {
    return this->timeToBreed == 0;
}

void Ant::move(Organism ***grid, const int rows, const int cols) {
    int direction = rand()%4+1;
    switch(direction) {
        case UP:
            int newX(this->xpos-1);
            if (grid[newX][this->ypos] == nullptr && newX >= 0) {
                //move the ant
                grid[newX][this->ypos] = this; //move ant to new position
                grid[this->xpos][this->ypos] = nullptr; //mark old position as empty
                this->xpos = newX;  //update ant's row
            }
            break;
        case DOWN:
            int newX(this->xpos+1);
            if (grid[newX][this->ypos] == nullptr && newX < rows) {
                //move the ant
                grid[newX][this->ypos] = this; //move ant to new position
                grid[this->xpos][this->ypos] = nullptr; //mark old position as empty
                this->xpos = newX;  //update ant's row
            }
            break;
        case RIGHT:
            int newY(this->ypos+1);
            if (grid[this->xpos][newY] == nullptr && newY < cols) {
                //move the ant
                grid[this->xpos][newY] = this; //move ant to new position
                grid[this->xpos][this->ypos] = nullptr; //mark old position as empty
                this->ypos = newY;  //update ant's row
            }
            break;
        case LEFT:
            int newY(this->ypos-1);
            if (grid[this->xpos][newY] == nullptr && newY >= 0) {
                //move the ant
                grid[this->xpos][newY] = this; //move ant to new position
                grid[this->xpos][this->ypos] = nullptr; //mark old position as empty
                this->ypos = newY;  //update ant's row
            }
            break;
    }
    this->timeToBreed--;
}

std::pair<int, int> Ant::breed(std::pair<int, int> direction) {
    return std::pair<int, int>(this->xpos+direction.first, this->ypos+direction.second);
}

void Ant::resetBreedTimer() {
    this->timeToBreed = 3;
}

void Ant::print() {
    std::cout << "o";
}