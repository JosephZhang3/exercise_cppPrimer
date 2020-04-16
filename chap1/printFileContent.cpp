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
    //string str;必须初始化，否则debug时会卡死！
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
