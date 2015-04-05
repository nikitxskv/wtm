#include <iostream>

extern int x;

int f()
{
    std::cout<<x;
    return 0;
}