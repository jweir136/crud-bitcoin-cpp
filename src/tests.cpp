#include <iostream>
#include "dtypes/bigint/src/bigint.h"
#include "dtypes/FiniteFields.h"

namespace FiniteFieldTests {
    using namespace Dodecahedron;

    void constructorTest1() {
        try {
            Bigint num = 1;
            Bigint prime = 5;
            FieldElement *element = new FieldElement(num, prime);

            std::cout << "FiniteFieldTests::constructorTest1 passed" << std::endl;
        } catch (...) {
            throw "FiniteFieldTests::constructorTest1 failed";
        }
    }

    void constructorTest2() {
        try {
            Bigint num = -1;
            Bigint prime = 0;
            FieldElement *element = new FieldElement(num, prime);

            throw "FiniteFieldTests::constructorTest2 failed";
        } catch(...) {
            std::cout << "FiniteFieldTests::constructorTest2 passed" << std::endl;
        }
    }

    void equalityTest1() {
        try {
            Bigint num1 = 1;
            Bigint prime1 = 5;
            Bigint num2 = 1;
            Bigint prime2 = 5;

            FieldElement *element1 = new FieldElement(num1, prime1);
            FieldElement *element2 = new FieldElement(num2, prime2);

            if (*element1 == *element2) {
                std::cout << "FiniteFieldTests::equalityTest1 passed" << std::endl;
            } else {
                std::cout << "FiniteFieldTests::equalityTest1 failed" << std::endl;
            }
        } catch(...) {
            throw "FiniteFieldTests::equalityTest1 failed";
        }
    }

    void equalityTest2() {
        try {
            Bigint num1 = 1;
            Bigint prime1 = 10;
            Bigint num2 = 2;
            Bigint prime2 = 5;

            FieldElement *element1 = new FieldElement(num1, prime1);
            FieldElement *element2 = new FieldElement(num2, prime2);

            if (*element1 == *element2) {
                std::cout << "FiniteFieldTests::equalityTest2 failed" << std::endl;
            } else {
                std::cout << "FiniteFieldTests::equalityTest2 passed" << std::endl;
            }
        } catch(...) {
            throw "FiniteFieldTests::equalityTest2 failed";
        }
    }


}

int main() {
    FiniteFieldTests::constructorTest1();
    FiniteFieldTests::constructorTest2();
    FiniteFieldTests::equalityTest1();
    FiniteFieldTests::equalityTest2();
}