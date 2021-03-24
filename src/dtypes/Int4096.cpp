#include <vector>
#include "Int4096.h"

Int4096::Int4096() {
    this->coefs = new std::vector<int>();
}

Int4096::~Int4096() {
    delete this->coefs;
}