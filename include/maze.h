#ifndef MAZE_H
#define  MAZE_H

#include "node.h"

#include <vector>

class Maze {

public:
    Maze(std::string filename);
    Node* getStart();
    std::vector<Node*>* getGoals();
    void printSolution();

private:
    Node* start;
    std::vector<Node*>* goals;
    Node*** maze;
    int w, h;

};

#endif
