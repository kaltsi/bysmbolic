#ifndef SHARED_H
#define SHARED_H
 
struct S {
    virtual ~S();
    void foo();
    void bar();
};
 
typedef void (S::*Spmf)();
 
bool test(void **f);
 
#endif // SHARED_H
