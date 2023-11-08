#include <iostream>
#include "test.h"

using namespace std;

int main(void)
{
    Test t(200, 100);
    std::cout << t.add() << endl;
    std::cout << t.pls() << endl;

    return 0;
}
