#include <iostream>
#include <ctime>
#include <vector>
#include "organism.h"
#include "ant.h"

const int rows(20);
const int cols(20);

const int numberOfAnts(100);

const std::pair<int, int> upDirection(-1, 0);
const std::pair<int, int> downDirection(1, 0);
const std::pair<int, int> rightDirection(0, 1);
const std::pair<int, int> leftDirection(0, -1);

void printGrid(Organism* grid[rows][cols]) {
    for (int i(0); i < rows; ++i) {
        for (int j(0); j < cols; ++j) {
            if (grid[i][j] == nullptr) {
                std::cout << "-";
            } else {
                grid[i][j]->print();
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    Organism* grid[rows][cols];
    std::vector<Ant*> aliveAnts;
    srand(time(0));

    for (int i(0); i < rows; ++i) {
        for (int j(0); j < cols; ++j) {
            grid[i][j] = nullptr;
        }
    }

    for(int i(0); i < numberOfAnts; ++i) {
        int x;
        int y;

        do {
            x = rand()%rows+1;
            y = rand()%cols+1;
        } while (grid[x][y] != nullptr);

        Ant* ant = new Ant(x, y);
        grid[x][y] = ant;
        aliveAnts.push_back(ant);
    }

    printGrid(grid);

    //MOVE CODE HERE

    //BREED CODE HERE
    for (int i(0); i < aliveAnts.size(); ++i) {
        Ant* currAnt = aliveAnts[i];
        if(currAnt->canBreed()) {
            std::vector<std::pair<int, int>> directions{upDirection, downDirection, rightDirection, leftDirection};

            while(directions.size() > 0) {
                std::pair<int, int> offspringPosition = currAnt->breed(directions.back());
                int newX(offspringPosition.first);
                int newY(offspringPosition.second);

                if (grid[newX][newY] == nullptr) {
                    //selected field empty
                    //breed on selected field

                    Ant* offspringAnt = new Ant(newX, newY);
                    grid[newX][newY] = offspringAnt;    //add offspring ant to grid
                    aliveAnts.push_back(offspringAnt);  //add offspring ant to alive ants

                    currAnt->resetBreedTimer(); //ant created offspring, so need 3 turns again until breed
                } else {
                    //selected field not empty
                    //don't breed, don't try same field again
                    directions.pop_back();
                }
            }
        }
    }

    return 0;
}