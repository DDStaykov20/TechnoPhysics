#include <iostream>
#include <cstdlib> // for the exit function

using namespace std;

void Menu()
{
	cout << "Menu" << endl;
	cout << "1) Mechanical motion and acceleration" << endl;
	cout << "2) Principles of mechanics" << endl;
	cout << "3) Mechanical work" << endl;
	cout << "4) Pressure and Pascal's law" << endl;
}

void firstTopic()
{
	cout << endl;
	cout << "\t\t" << "First Topic - Mechanical motion and acceleration" << endl;
	cout << endl;
	cout << endl;
	cout << "|- - - - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Definitions: " << endl;
	cout << "|" << "Mechanical movement - every change in the relative position of bodies over time" << endl;
	cout << "|" << "Acceleration - the physical quantity that the body becomes rapidly, which changes the speed of a body." << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
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

	cout << endl;

	Menu();

	cout << endl;

	system("pause");

	system("cls");

	for (int i = 1; i <= 4; i++)
	{
		switch (i)
		{
		case 1:
			firstTopic();
			break;
			//to continue topics!!!
		}
	}
}