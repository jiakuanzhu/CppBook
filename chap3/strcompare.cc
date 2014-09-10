
#include <string>
using std::string;
#include <iostream>
using std::cout; using std::endl;

int main()
{
    string substr = "Hello";
    string phrase = "Hello World";
    string slang  = "Hiya";

    if (substr < phrase) cout << "substr is smaller" << endl;
    if (slang > substr) cout << "slang is greater" << endl;
    if (slang > phrase) cout << "slang is greater" << endl;

    return 0;
}
