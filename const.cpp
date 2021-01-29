#include <iostream>
#include <stdlib.h>

using namespace std;

enum BOOL {
    FALSE, TRUE
};

int main() {

    const int a = 100;    // c++必须初始化,否则无法进行编译，c可以不初始化，但以后就没有初始化的机会了
    const int *p = &a;    // int *p = &a; c++会报错,c不会报错

    char *q = (char *) malloc(100);  // c++必须加强转，c不需要加强转

    bool bo = false;      // c++引入了bool类型，其实就相当于一种枚举类型
    bool bo1 = 100;       // c++也可编译通过, true
    printf("sizeof(bool) = %ld, sizeof(bo) = %ld\n", sizeof(bool), sizeof(bo)); // 1 1

    BOOL bo2 = FALSE;     // 自己定义bool, 注意如果在c环境中需要加enum

    string str;           //  string类

    exit(0);
}
