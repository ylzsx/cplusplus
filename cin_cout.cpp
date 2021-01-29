#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

// cin cout: 类对象
// scanf printf: 函数

int main() {

#if 0
    char name[3];
    scanf("%s", name);          // c不安全
    cin>>name;                  // c++不安全   >>: 重载，流输入运算符
    
    string name1;
    cin>>name1;                 // 安全
    cout<<name1.max_size()<<endl;     // name1最大值


    int a;
    char b;
    //scanf("%d%c", &a, &b);    // b = ' '或者'\t'或者'\n'
    scanf("%d%*c%c", &a, &b);   // c中通过抑制符解决上问题
    printf("a = %d, b = %d\n", a, b);
    cin>>a>>b;                  // c++中成功解决了上述问题

#endif

    // 格式输出
    int a = 12345;
    float b = 12345.6789;

    cout<<"xxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<setw(8)<<a<<endl;     // setw(): 流算子,宽度
    cout<<setiosflags(ios::left)<<setw(8)<<a<<endl;     // 左对齐
    cout<<b<<endl;             // 默认输出6个有效位数，不包括小数点
    cout<<setw(10)<<setiosflags(ios::right)<<b<<endl;    // 宽度包括小数点
    cout<<setprecision(2)<<setiosflags(ios::fixed)<<b<<endl; // setprecision与setiosflags共同使用来控制小数位数
    
    cout<<hex<<a<<endl;     // %x
    cout<<oct<<a<<endl;     // %o
    cout<<dec<<a<<endl;     // %d

    exit(0);
}
