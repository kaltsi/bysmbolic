#include <iostream>
#include "zhared.h"
 
struct T : S
{
    T() {
        foo();
    }
};
 
bool magic(Spmf f) { return test(reinterpret_cast<void **>(&f)); }
 
int main()
{
    using namespace std;
    T t;
    cout << boolalpha << magic(&T::foo) << endl;
}
