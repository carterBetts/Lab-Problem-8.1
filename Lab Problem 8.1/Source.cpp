#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main(void)
{
	
}

int countVowel(string str)
{
	int total = 0;
	for (int i = 0; i < str.length(); i++)
	{
		string charecter = str.substr(i, 1);
		if (charecter.compare("A") == 0)
			total++;
		if (charecter.compare("a") == 0)
			total++;
		if (charecter.compare("E") == 0)
			total++;
		if (charecter.compare("e") == 0)
			total++;
		if (charecter.compare("I") == 0)
			total++;
		if (charecter.compare("i") == 0)
			total++;
		if (charecter.compare("O") == 0)
			total++;
		if (charecter.compare("o") == 0)
			total++;
		if (charecter.compare("U") == 0)
			total++;
		if (charecter.compare("u") == 0)
			total++;
	}
	return total;
}