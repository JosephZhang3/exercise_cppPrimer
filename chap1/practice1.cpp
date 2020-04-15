#include <iostream>

//练习1.4 打印两个数的乘积
void oneForm(){
    std::cout << "Enter two numbers:" << std::endl;
    int a=0,b=0;
    std::cin >> a >> b;
    std::cout << "The product of " << a << " and " << b << " is " << a*b << std::endl;
}

//练习1.5 打印两个数的乘积的另一种  等效的形式  ，将每个运算对象的打印操作或接受键盘输入的操作放在一条独立的语句中。
void equivalentForm(){
    std::cout << "Enter two numbers:" << std::endl;
    int a=0,b=0;
    //注意！标准输入对象是不需要endl刷新缓存操作的。它是从键盘读到内存中，而不是从内存写到屏幕上，实时同步操作而非异步，不存在缓存。
    std::cin >> a;
    std::cin >> b;
    std::cout << "The product of " << std::endl;
    std::cout << a << std::endl;
    std::cout << " and " << std::endl;
    std::cout << b << std::endl;
    std::cout << " is " << std::endl;
    std::cout << a*b << std::endl;
}

//练习1.6 判断程序语句合法性
void judgeValidity(){
    //------wrong statements as follow------
    //int a=1,b=3;
    //std::cout << "The sum of " << a;
    //'<<'输出运算符使用时要求必须在左右各给出一个运算对象，左侧的运算对象必须是一个ostream对象，右侧的运算对象是要打印的值。
    //<< " and " << b;
    //<< " is " << a+b << std::endl;
 
    int a=1,b=3;
    std::cout << "The sum of " << a;
    std::cout << " and " << b;
    std::cout << " is " << a+b << std::endl;
}

//练习 1.8
void comment() {
    std::cout << "/*" << "\n";
    std::cout << "*/" << "\n";
    //invalid output statements
    //std::cout << /* "*/" */;
}

int main(){
    oneForm();
    equivalentForm();
    judgeValidity();
    comment();
    return 0; 
}
