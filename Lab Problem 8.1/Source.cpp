#include <iostream>
#include <string>
using namespace std;

int countCharecter(string str);

int main(void)
{
	cout << countCharecter("Northern");
}

int countCharecter(string str)
{
	return str.length();
}