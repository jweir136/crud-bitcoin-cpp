#include <vector>
#include <iostream>
#include <limits>
#include <string>
#include "Int4096.h"

Int4096::Int4096() {
    this->coefs = new std::vector<int>();
}

Int4096::Int4096(std::string serializedInt) {
    this->coefs = new std::vector<int>();

    size_t start;
    size_t end = 0;
    char delim = ' ';

    while ((start = serializedInt.find_first_not_of(delim, end)) != std::string::npos) {
        end = serializedInt.find(delim, start);
        this->coefs->insert(this->coefs->end(), std::stoi(serializedInt.substr(start, end - start)));
    }
}

Int4096::~Int4096() {
    delete this->coefs;
}

std::vector<int> *Int4096::getCoefs() {
    return (this->coefs);
}

// TODO: This needs tested!
Int4096& Int4096::add(Int4096 *value) {
    for (int i = 0; i < value->getCoefs()->size(); i++)
        this->coefs->insert(this->coefs->end(), value->getCoefs()->at(i));
    
    return (*this);
}

Int4096& Int4096::add(int value) {
    this->coefs->insert(this->coefs->end(), value);
    return (*this);
}

std::string Int4096::toString() {
    std::string result = "";

    for (int i = 0; i < this->coefs->size(); i++)
        result += std::to_string(this->coefs->at(i)) + " ";

    return (result);
}