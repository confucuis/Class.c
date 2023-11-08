#include "test.h"

Test::Test(int a, int b)
{
    this->a = a;
    this->b = b;
}

Test::~Test(void)
{

}

int Test::add(void)
{
    return this->a + this->b;
}

int Test::pls(void)
{
    return this->a - this->b;
}


