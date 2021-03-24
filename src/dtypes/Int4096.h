#ifndef INT4096_H
#define INT4096_H

#include <vector>
#include <limits>
#include <string>

class Int4096 {
    private:
        std::vector<int> *coefs;

    public:
        Int4096();
        Int4096(std::string serializedInt);

        ~Int4096();

        std::vector<int> *getCoefs();

        Int4096& add(Int4096 *value);
        Int4096& add(int value);

        std::string toString();
};

#endif
