#include <iostream>
#include "calculate.h"

// 混编译在c++文件中
// 用以下方式引入c头文件
extern "C" {
    #include "person.h"
}

using namespace std;

int main(void)
{
    Calculate c(200, 100);
    std::cout << c.add() << endl;
    std::cout << c.sub() << endl;
    std::cout << c.mul() << endl;
    std::cout << c.div() << endl;
    
    const Person person = {.num = 12, .name = "张三"};
    say_num(person);
    say_name(person);

    return 0;
}
