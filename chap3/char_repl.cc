
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str("some string");

	for (string::size_type ix = 0; ix != str.size(); ++ix)
		cout << str[ix] << endl;

	for (string::size_type ix = 0; ix != str.size(); ++ix)
		str[ix] = '*';

	cout << str << endl;
	return 0;
}
