// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <Windows.h>
#include <time.h>
#include <deque>
#include <list>

using namespace std;



template<class Tqueue>
int check(int m, int n)
{
    Tqueue q;
   
    for (int i = 1; i <=m; i++)
    {
        q.push_back(i);
    }
    while (q.size()>1)
    {
        auto it = q.begin();
        int temp = n % (q.size());
        if (temp==0)
        {
            advance(it, (q.size() - 1));
        }
        else {
            advance(it, temp-1);
        }
       
        q.erase(it);
    }
    int t = q.front();
    return t;
}

int main()
{
    clock_t t0 = clock();
    {
        int k = check<vector<int>>(100000, 5);//123   13  1
        cout << k << endl;
    }
    clock_t t1 = clock();
    double time1 = (double)(t1 - t0) / CLOCKS_PER_SEC;  
    {
        int k = check<deque<int>>(100000, 5);//123   13  1
        cout << k << endl;
    }
    clock_t t2 = clock();
    double time2 = (double)(t2 - t1) / CLOCKS_PER_SEC;
    {
        int k = check<list<int>>(100000, 5);//123   13  1
        cout << k << endl;
    }
    clock_t t3 = clock();
    double time3 = (double)(t3 - t2) / CLOCKS_PER_SEC;
    cout << time1 << "..." << time2 << "..." << time3 << endl;
    system("pause");
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
