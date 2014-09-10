
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec(10);

    // reset all the elements in ivec to 0
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
            ivec[ix] = 0;

    // print what we've got so far: should print 10 0's
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
            cout << ivec[ix] << " ";
    cout << endl;

    // equivalent loop using iterators to reset all the elements in ivec to 0
    for (vector<int>::iterator iter = ivec.begin();
                               iter != ivec.end(); ++iter)
	    *iter = 0;  // set element to which iter refers to 0

    // print using iterators: should print 10 0's
    for (vector<int>::iterator iter = ivec.begin();
                               iter != ivec.end(); ++iter)
            cout << *iter << " "; // print the element to which iter refers 
    cout << endl;

    vector<int>::iterator iter = ivec.begin();
    while (iter != ivec.end()) {
            *iter = 0;
            ++iter;
    }
    return 0;
}
