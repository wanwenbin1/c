

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = { 1,2,3,4,4,5 };
    vector<int>temp(arr, arr + 6);
   auto it= unique(temp.begin(), temp.end());
    temp.erase(it, temp.end());  //unique只是把重复的放后面了
    copy(temp.begin(), temp.end(), ostream_iterator<int>(cout, " "));



    return 0;
}
