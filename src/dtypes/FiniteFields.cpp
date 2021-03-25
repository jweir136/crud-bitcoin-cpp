#include "bigint/src/bigint.h"
#include "FiniteFields.h"

using namespace Dodecahedron;

FieldElement::FieldElement(Bigint num, Bigint prime) {
    if (num >= prime || num < 0)
        throw "Invalid Input. Num must be in range [0,prime)";

    this->num = num;
    this->prime = prime;
}

Bigint FieldElement::getPrime() {
    return this->prime;
}

Bigint FieldElement::getNum() {
    return this->num;
}

bool FieldElement::operator==(FieldElement& other) {
    return (this->prime == other.getPrime() && this->num == other.getNum());
}