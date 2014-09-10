
#include <string>
using std::string;
#include <cctype>
using std::isupper; using std::toupper;
using std::islower; using std::tolower;
using std::isalpha; using std::isspace;
#include <iostream>
using std::cout; using std::endl;

int main()
{
    string s("Hello World!!!");
    string::size_type punct_cnt = 0; 

    // count number of punctuation characters in s
    for (string::size_type index = 0; index != s.size(); ++index)
        if (ispunct(s[index]))
            ++punct_cnt;

    cout << punct_cnt 
         << " punctuation characters in " << s << endl;

{
    // convert s to lowercase
    for (string::size_type index = 0; index != s.size(); ++index) 
        s[index] = tolower(s[index]);

    cout << s << endl;
}
    return 0;
}
