#include "junk.h"

#include <iostream>


A::A(int _i) : m_Int(_i) {}
int A::getInt() {
    std::cout << "hello world !";
    return m_Int; }