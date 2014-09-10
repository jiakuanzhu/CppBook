
#include <iostream>
#include <string>

using std::string; using std::cout; using std::endl;

int main() 
{

    string s1("hello, ");
    string s2("world\n");

    string s3 = s1 + s2;   // s3 is hello, world\n
    
    // print what we've got so far
    cout << "s1: " << s1 << " s2: " << s2 << " s3: " << s3 << endl;

    s1 += s2;   // equivalent to s1 = s1 + s2

    // print after update to s1
    cout << "s1: " << s1 << " s2: " << s2 << " s3: " << s3 << endl;

{
    // a better way to ``add'' punctuation
    string s1("hello");
    string s2("world");

    string s3 = s1 + ", " + s2 + "\n";

    // print again, now there won't be a newline after printing s2
    cout << "s1: " << s1 << " s2: " << s2 << " s3: " << s3 << endl;

}
return 0;
}
