#include <iostream>
#include <cstdlib> // for the exit function

using namespace std;

int Menu(int numberOfChoice)
{
	cout << "Menu" << endl;
	cout << "1) First topic" << endl;
	cout << "2) Second topic" << endl;
	cout << "3) Third topic" << endl;
	cout << "4) Forth topic" << endl;
	cout << "5) Exit" << endl;

	return 0;
}

int Choice(int choice)
{
	cout << "Choose:" << endl;

	cin >> choice;

	cout << endl;

	switch (choice)
	{
	case 1:
		cout << "First Topic";
		break;

	case 2:
		cout << "Second Topic";
		break;
	case 3:
		cout << "Third Topic";
		break;

	case 4:
		cout << "Fourth Topic";
		break;

	case 5:
		cout << "Exit";
		exit(0);
		break;

	default:
		exit(0);
		break;
	}
	return choice;
}

int main()
{
	string YesOrNo;
	int ChooseNumber = 0;
	bool flag = false;

	cout << "Hello!" << endl;
	cout << "Do you want to play?(Yes/No)" << endl;

	while (YesOrNo != "Yes" and YesOrNo != "No")
	{
		cin >> YesOrNo;
	}

	if (YesOrNo == "Yes")
	{
		flag = true;
	}
	else
	{
		cout << "Ok! Goodbye!";
		exit(0);
	}

	/*cout << endl;

	Menu(ChooseNumber);

	cout << endl;

	Choice(ChooseNumber);

	cout << endl;*/
}