#include <iostream>
#include "dtypes/Int4096.h"

namespace dtypes_tests {
    bool Int4096_Init_Test_1() {
        try {
            Int4096 *bigint = new Int4096();
            return (true);
        } catch(...) {
            return (false);
        }
    }

    bool Int4096_Print_Test() {
        try {
            Int4096 *bigint = new Int4096();
            std::cout << "\t" << bigint->toString() << "\t";
            return (true);
        } catch(...) {
            return (false);
        }
    }

    bool Int4096_Add_Test_1() {
        try {
            Int4096 *bigint = new Int4096();
            bigint->add(1);
            bigint->add(10);
            std::cout << "\t" << bigint->toString() << "\t";
            return (true);
        } catch(...) {
            return (false);
        }
    }

    bool Int4096_Add_Test_2() {
        try {
            Int4096 *bigint1 = new Int4096();
            Int4096 *bigint2 = new Int4096();
            bigint1->add(8049238);
            bigint2->add(0);
            bigint1->add(0);
            bigint2->add(38490329);
            bigint1->add(bigint2);
            std::cout << "\t" << bigint1->toString() << "\t";
            return  (true);
        } catch(...) {
            return (false);
        }
    }

    bool Int4096_Serialization_Test() {
        try {
            Int4096 *bigint1 = new Int4096();

            bigint1->add(3890438);
            bigint1->add(3849030);
            bigint1->add(99999999);

            std::string serializedInt = bigint1->toString();

            Int4096 *bigint2 = new Int4096(serializedInt);

            std::cout << "\t" << bigint2->toString() << "\t";

            return (true);
        } catch(...) { 
            return (false);
        }
    }
}

int main() {
    std::cout << "Running Tests" << std::endl;
    std::cout << "Test 1 (Int4096_Init_Test_1): " << dtypes_tests::Int4096_Init_Test_1() << std::endl;
    std::cout << "Test 2 (Int4096_Print_Test): " << dtypes_tests::Int4096_Print_Test() << std::endl;
    std::cout << "Test 3 (Int4096_Add_Test_1): " << dtypes_tests::Int4096_Add_Test_1() << std::endl;
    std::cout << "Test 4 (Int4096_Add_Test_2): " << dtypes_tests::Int4096_Add_Test_2() << std::endl;
    std::cout << "Test 5 (Int4096_Serialization_Test): " << dtypes_tests::Int4096_Serialization_Test() << std::endl;
}