#include <iostream>
#include <string>
#include <cassert>


using namespace std;

int compareString(string s1, string s2)
{

	int length = 0;
	if (s1.length() > s2.length())
	{
		length = s2.length();
	}
	else
	{
		length = s1.length();
	}

	int out = 0;

	for (int i = 0; i < length+1; i++)
	{
		//read 1 character off each string, compare their ascii values, if unequal set out to -1 or 1 and break, otherwise continue
		char c1 = s1[i];
		char c2 = s2[i];
		if (tolower(c1) < tolower(c2))
		{
			return -1;
		}
		if (tolower(c1) > tolower(c2))
		{
			return 1;
		}
	}

	return out;
}

int main()
{
	assert(compareString("Hi", "hi") == 0);
	assert(compareString("Hi", "ho") == -1);
	assert(compareString("Ho", "hi") == 1);
	assert(compareString("GalloP", "AsserT") == 1);
	assert(compareString("MAGICAL", "ultrakill") == -1);
	assert(compareString("Alternate", "alter") == 1);
	assert(compareString("bug", "bug") == 0);
	cout << "woah it all work ed !" << endl;
}