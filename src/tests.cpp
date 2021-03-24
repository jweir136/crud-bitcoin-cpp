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
}

int main() {
    std::cout << "Running Tests" << std::endl;
    std::cout << "Test 1 (Int4096_Init_Test_1): " << dtypes_tests::Int4096_Init_Test_1() << std::endl;
}