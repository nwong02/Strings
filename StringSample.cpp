#include <iostream>
#include <string>

using namespace std;



int main(int argc, char* argv[])
{
	char ourString[10] = { 0 };
	int index = 0;
	while (ourString[index] != '/0')
	{
		ourString[index] = 'X';
		index++;
	}
	return 1;
}