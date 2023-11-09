#include <iostream>
#include "calculate.h"

using namespace std;

int main(void)
{
    Calculate c(200, 100);
    std::cout << c.add() << endl;
    std::cout << c.sub() << endl;
    std::cout << c.mul() << endl;
    std::cout << c.div() << endl;

    return 0;
}
