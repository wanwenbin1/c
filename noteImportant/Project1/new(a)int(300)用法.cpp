#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <atlalloc.h>

using namespace std;
template <class _Ty, _Ty _Val=100>
struct temp {
    static constexpr _Ty value = _Val;

    using value_type = _Ty;
    using type = temp;
    void tellme()
    {
        value_type b = 7;
        cout << b << endl;
    }
    constexpr operator value_type() const noexcept {
        return value;
    }
};
int main()
{
    int a[10] = {10};
    int* b = a;
    int* c = new (a)int(300);
    cout << *c << "  " << *(c + 1) << endl;
    *c = 1000; *(c + 1) = 2000;
    cout << a[0] << "  " << a[1] <<&a[0]<<"  "<<&a[1]<< endl;
    cout << b[0] << "  " << b[1] << &b[0] << "  " << &b[1] << endl;
    cout << c[0] << "  " << c[1] << &c[0] << "  " << &c[1] << endl;
    cout << &a<<".." << &b<<"..." << &c <<"..." << endl;
    return 0;
}