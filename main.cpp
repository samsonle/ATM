#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {

    int x;
    vector<int> v = {1,2};


    ostream_iterator<int> os{cout, ", "};
    copy(v.begin(), v.end(), os);
    
    auto foo = [&x](){ x = 42; };

    foo();
    cout << x << endl;
}