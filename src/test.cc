#include "test.h"
#include <iostream>

using namespace std;

// 构造函数
Test::Test(int a, int b)
{
    this->a = a;
    this->b = b;
}

// 析构函数
Test::~Test(void)
{
    std::cout << "析构函数: 无参数,无返回值\n";
}

int Test::add(void)
{
    return this->a + this->b;
}

int Test::pls(void)
{
    return this->a - this->b;
}


