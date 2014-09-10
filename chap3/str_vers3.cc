
#include <iostream>
using std::cout;
using std::endl;

const char *st = "The expense of spirit\n";

int main()
{
    int len = 0;
    const char *p = st;
    while (*p) { ++len; ++p; }
    cout << len << ": " << st << endl;
    return 0;
}
