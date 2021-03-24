#ifndef INT4096_H
#define INT4096_H

#include <vector>

class Int4096 {
    private:
        std::vector<int> *coefs;

    public:
        Int4096();

        ~Int4096();
};

#endif
