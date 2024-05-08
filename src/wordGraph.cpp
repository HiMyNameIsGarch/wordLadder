#include "../include/wordGraph.h"
#include <fstream>

WordGraph::WordGraph(std::string startingWord) {
    root = NULL;
    // root->isNodeEnd = true;
    this->numOfLetters = startingWord.size();
    this->startingWord = startingWord;
}

void WordGraph::initGraph() {
    // Make sure the number of letters is within the range
    if(numOfLetters < MIN_WORD) {
        throw std::invalid_argument("Number of letters must be greater than 1");
    }
    if(numOfLetters > MAX_WORD) {
        throw std::invalid_argument("Number of letters must be less than 32");
    }

    // read the words from the file
    std::string path = pathToWords + std::to_string(numOfLetters);

    // check if the file exists
    std::ifstream file(path);

    // Check if the file exists
    if(!file) {
        std::cerr << "File " << path << " does not exist!" << std::endl;
        throw std::invalid_argument("Error reading the words file!");
    }

    std::string word;
    // read the words from the file
    while(file >> word) {
        addWord(word);
    }

    // close the file
    file.close();
}

void WordGraph::printGraph() {
    for (size_t i = 0; i < root->children.size(); i++) {
        std::cout << root->children[i]->word << std::endl;
    }
}

void WordGraph::addWord(std::string word) {
    // TODO
    std::cout << "Adding word: " << word << std::endl;
    throw std::exception();
}

void WordGraph::deleteNode(Node *node) {
    // TODO
    std::cout << "deleting node: " << node->word << std::endl;
    throw std::exception();
}
