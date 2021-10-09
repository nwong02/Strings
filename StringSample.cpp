#include <iostream>
#include <string>

using namespace std;



int main(int argc, char* argv[])
{
	char ourString[10] = { 0 };
	char c1, c2, c3, c4;
	int index = 0;


	cout << "Enter a line of input: \n";
	cin.get(c1);
	cin.get(c2);
	cin.get(c3);
	cin.get(c4);
	cout << c1 << c2 << c3 << c4 << "END OF OUTPUT";

	while (ourString[index] != '/0')
	{
		ourString[index] = 'X';
		index++;
	}




	return 1;
}