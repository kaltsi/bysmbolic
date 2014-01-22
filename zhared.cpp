#include "zhared.h"
#include <cstring>
 
S::~S() {}
void S::foo() {}
void S::bar() {}
 
static const Spmf spmfArray[] = { 0, &S::foo, 0 };
static const size_t spmfArraySize = sizeof(spmfArray) / sizeof(spmfArray[0]);
 
bool test(void **f)
{
    for (size_t i = 0; i < spmfArraySize; ++i) {
        if (spmfArray[i] == *reinterpret_cast<Spmf *>(f))
            return true;
    }
   
    return false;
}
 
