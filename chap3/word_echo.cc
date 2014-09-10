
#include <string> 
#include <iostream> 

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string word;

	// read until end-of-file, writing each word to a new line
	while (cin >> word) 
		cout << word << endl;
	return 0;
	
}
