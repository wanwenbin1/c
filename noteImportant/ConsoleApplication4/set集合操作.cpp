
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>temp1{1,3,5,47,9,6,43,645,43,43};
    vector<int>temp2{1,3,64,987,356,4521,6,1};
    
    vector<int>temp3(temp1.size()+temp2.size()+10);
    vector<int>temp4(temp1.size() + temp2.size() + 10);
    vector<int>temp5(temp1.size() + temp2.size() + 10);
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    //注意:用完unique 后,要用erase擦除  
   auto last1= unique(temp1.begin(), temp1.end());
   temp1.erase(last1, temp1.end());

    auto last2=unique(temp2.begin(), temp2.end());
    temp2.erase(last2, temp2.end());
    for (auto i :temp1)
    {
        cout << i<<"  ";
    }
    cout << endl;

    for (auto i : temp2)
    {
        cout << i<<"  ";
    }
    cout << endl;
    //计算两个集合的交集
    set_intersection(temp1.begin(), temp1.end(), temp2.begin(), temp2.end(), temp3.begin());
    for (auto i : temp3)
    {
        cout << i << "  ";
    }
    cout << endl;
    //计算两个集合的并集
    set_union(temp1.begin(), temp1.end(), temp2.begin(), temp2.end(), temp4.begin());

    for (auto i : temp4)
    {
        cout << i << "  ";
    }
    cout << endl;
     // 计算两个集合的差集
    set_difference(temp1.begin(), temp1.end(), temp2.begin(), temp2.end(), temp5.begin());

    for (auto i : temp5)
    {
        cout << i << "  ";
    }
    cout << endl;
    return 0;
}
