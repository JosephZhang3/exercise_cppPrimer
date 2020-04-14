// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{

    cout << "What a good job!\n";
    cout << "sln is the abbreviation of solution\n";
    ifstream infile("C:\\Users\\zhangjianghao\\Documents\\demoforcpp.txt");
    if (!infile)
    {
        cout << "error" << endl;
    }
    //string str;必须初始化，否则debug时会卡死
    int i;
    int a[3][4];//二维数组
    int* p = &a[0][0];
    while (infile >> i)
    {
        *p = i;
        p++;
    }
    infile.close();

    //打印二维数组
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;//endl complete a line
    }

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
