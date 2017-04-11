// /*
//  *单行注释中的任何内容都会被忽略
//  *嵌套的注释界定符/* */也一样会被忽略，所以单行注释是最稳妥的注释方式。
//  */

#include<iostream>

//练习 1.8
int main(){
    std::cout << "/*" << "\n";
    std::cout << "*/" << "\n";
    //invalid output statements
    std::cout << /* "*/" */;
    return 0;
}
