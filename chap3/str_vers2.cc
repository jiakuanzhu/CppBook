
#include <iostream>
using std::cout;
using std::endl;


int main()
{
    const char *st = "The expense of spirit\n";
    int len = 0;
    while (*st) { ++len; ++st; }
    cout << len << ": " << st << endl;
    return 0;
}
