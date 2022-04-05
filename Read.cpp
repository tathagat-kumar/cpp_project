#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	char ch;
	string fileName1, fileName2;
	fstream fp1, fp2;

	cout << "Enter the name of File-1:- \n";
	cin >> fileName1;

	cout << "Enter the name of File-2:- \n";
	cin >> fileName2;

	fp1.open(fileName1, fstream::in);
	fp2.open(fileName2, fstream::in);

	if (fp1.eofbit == NULL)
	{
		cout << "\n Error Occurred! \n";
		return 0;
	}

	cout << "\n Content of " << fileName1 << " :- \n";
	while (fp1.eof() == 0)
	{
		fp1.get(ch);
		cout << ch;
	}
	fp1.close();

	cout << " \n \n ";

	cout << "\n Content of " << fileName2 << " :- \n";
	while (fp2.eof() == 0)
	{
		fp2.get(ch);
		cout << ch;
	}
	fp2.close();
	cout << "\n";
	return 0;

}