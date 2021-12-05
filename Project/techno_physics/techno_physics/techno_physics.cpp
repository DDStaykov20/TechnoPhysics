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

char firstTopic(char symbol, char answer)
{
	cout << endl;

	cout << "\t\t" << "First Topic - Mechanical motion and acceleration" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Definitions: " << endl;
	cout << "|" << "Mechanical movement -> every change in the relative position of bodies over time" << endl;
	cout << "|" << "Acceleration -> the physical quantity that the body becomes rapidly, which changes the speed of a body." << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Formula: " << endl;
	cout << "|" << "a = (v2 - v1) / (t2 - t1) [m/s2]" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Task with solution:" << endl;
	cout << "|" << "Task:" << endl;
	cout << "|" << "Calculate the acceleration of a car that changes its speed:" << endl;
	cout << "|" << "a) From 2 m/s to 4 m/s for 2s" << endl;
	cout << "|" << "b) From 4 m/s to 10 m/s for 4s" << endl;
	cout << "|" << endl;
	cout << "|" << "Solution:" << endl;
	cout << "|" << "a) a = (v2 - v1) / (t2 - t1)" << endl;
	cout << "|" << "a = (4-2) / 2" << endl;
	cout << "|" << "a = 3 m/s2" << endl;
	cout << "|" << endl;
	cout << "|" << "b) a = (v2 - v1) / (t2 - t1)" << endl;
	cout << "|" << "a = (10-4) / 4" << endl;
	cout << "|" << "a = 1,5 m/s2" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;

	system("pause");

	cout << endl;

	cout << "Do you want to practise your knowledge about mechanical motion and acceleration? (Y/N)" << endl;

	while (symbol != 'Y' and symbol != 'N')
	{
		cin >> symbol;
	}

	cout << endl;

	if (symbol == 'Y')
	{
		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is mechanical movement?" << endl;
		cout << "|" << "a) every change in the relative position of bodies over time" << endl; // correct answer
		cout << "|" << "b) the physical quantity that the body becomes rapidly, which changes the speed of a body" << endl;
		cout << "|" << "c) body, according to which we define the position and movement of other bodies" << endl;
		cout << "|" << endl;
		cout << "|" << "Your answer(a, b or c): ";

		while (answer != 'a')
		{
			cin >> answer;
		}

		if (answer == 'a')
		{
			cout << "|" << "Correct answer!" << endl;
			cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
		}
	}
	else
	{
		return 0;
	}
} 

int main()
{
	string YesOrNo;
	bool flag = false;
	char symbolTopics= 'f';
	char answers = 'f';

	cout << "Hello!" << endl;
	cout << "Do you want to play? (Yes/No)" << endl;

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

			firstTopic(symbolTopics, answers);

			cout << "Do you want to continue? (Yes/No)" << endl;

			cin >> YesOrNo;

			while (YesOrNo != "Yes" and YesOrNo != "No")
			{
				cin >> YesOrNo;
			}

			if (YesOrNo == "Yes")
			{
				continue;
			}
			else
			{
				exit(0);
			}
			break;
			//to continue topics!!!
		}
	}
}