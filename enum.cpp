#include <iostream>
#include <stdlib.h>

using namespace std;

enum DAY {
    Mon, Tue, Wen
};

int main() {

    DAY day = Mon;  // c中这个地方可以不只是枚举的几个值，可以为其他值，因此枚举也可以充当一种宏。但c++必须从enum中选一个
    
    int a, b = 10;
    (a = b) = 100;  // c中会出错，因为表达式不能被赋值
    printf("a = %d, b= %d\n", a, b);    // 100 10 c++中相当于a = b; a = 100(运算符重载)

    (a != b ? a : b) = 5;   // c中会出错
    printf("a = %d, b= %d\n", a, b);    // 5 10

    exit(0);
}
