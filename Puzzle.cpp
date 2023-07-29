#include "Puzzle.hpp"
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

Puzzle::Puzzle(int n){
    //TODO
}

void Puzzle::addEdge(int v1, int v2){
    //TODO
}

void Puzzle::addVertex(int num){
    //TODO
}

void Puzzle::displayEdges(){
    //TODO
}

// Finds the vertex number from the position of the open path in the maze
int Puzzle::findVertexNumFromPosition(int x, int y){
    //TODO
    return 0;
}

// Creates a default maze of all 1s of size n x n, except for positions (0,0) and (n-1, n-1)
void Puzzle::createDefaultPuzzle(){
    //TODO
}

void Puzzle::createPath(int i, int j){
    //TODO
}

void Puzzle::printPuzzle(){
    //TODO
}

vector<int> Puzzle::findOpenAdjacentPaths(int x, int y){
    //TODO
    return vector<int>();
}

void Puzzle::convertPuzzleToAdjacencyListGraph(){
    //TODO
}

bool Puzzle::findPathThroughPuzzle(){
    //TODO
    return false;
}

bool Puzzle::checkIfValidPath(){
    //TODO
    return false;
}

Puzzle::~Puzzle(){
    //TODO
}
