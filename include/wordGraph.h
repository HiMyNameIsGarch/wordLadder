#pragma once
#include <iostream>
#include <string>
#include <vector>
#ifndef WORDGRAPH_H
#define WORDGRAPH_H

#define MIN_WORD 2
#define MAX_WORD 31

struct Node {
    std::string word;
    std::vector<Node*> children;
    bool isNodeEnd;
};

class WordGraph {
private:
    Node *root;
    int numOfLetters;
    const std::string pathToWords="words/";
    std::string startingWord;

public:
    WordGraph(std::string startingWord);
    void initGraph();
    void addWord(std::string word);
    void printGraph();
    void deleteNode(Node *node);
    ~WordGraph() = default;

};

#endif
