#ifndef FINITE_FIELDS_H
#define FINITE_FIELDS_H

#include "bigint/src/bigint.h"

using namespace Dodecahedron;

class FieldElement {
    private:
        Bigint num;
        Bigint prime;

    public:
        FieldElement(Bigint num, Bigint prime);

        bool operator==(FieldElement& other);

        // TODO:  Add division and modulus to Bigint.

        Bigint getPrime();

        Bigint getNum();
};

#endif