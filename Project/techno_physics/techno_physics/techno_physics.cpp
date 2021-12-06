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

char firstTopic(char symbol, char answer, char answer2)
{
	cout << endl;

	cout << "\t\t" << "First topic - Mechanical motion and acceleration" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Definitions: " << endl;
	cout << "|" << "Mechanical movement -> every change in the relative position of bodies over time" << endl;
	cout << "|" << "Acceleration -> the physical quantity that the body becomes rapidly, which changes the speed of a body." << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
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
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

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

		cout << endl;

		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is acceleration?" << endl;
		cout << "|" << "a) every change in the relative position of bodies over time " << endl;
		cout << "|" << "b) the physical quantity that the body becomes rapidly, which changes the speed of a body" << endl; // correct answer
		cout << "|" << "c) body, according to which we define the position and movement of other bodies" << endl;
		cout << "|" << endl;
		cout << "|" << "Your answer(a, b or c): ";

		while (answer2 != 'b')
		{
			cin >> answer2;
		}

		if (answer2 == 'b')
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

char secondTopic(char symbol, char answer, char answer2, char answer3)
{
	cout << endl;

	cout << "\t\t" << "Second topic - Principles of mechanics" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Definitions: " << endl;
	cout << "|" << "First principle of mechanics (Law of Inertia) -> Every body maintains its state of rest or of rectilinear uniform motion until external influence brings it out of this state" << endl;
	cout << "|" << "Second principle of mechanics -> The acceleration of the body is directly proportional to the force of the forces applied to the body and is inversely proportional to the mass of the body" << endl;
	cout << "|" << "Third principle of mechanics -> If one body acts on another body with force, then always the second body opposes the second with equal in size and opposite in direction force (Each action has equal in size and opposite in direction counteraction)" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Formulas: " << endl;
	cout << "|" << "m (mass) = F / a [kg]" << endl;
	cout << "|" << "F (force) = m.a [N]" << endl;
	cout << "|" << "a (acceleration) = F / m [m/s2]" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Task with solution:" << endl;
	cout << "|" << "Task:" << endl;
	cout << "|" << "A body with mass m = 2kg moves under the action of the force F = 10N. How much is the acceleration of the body?" << endl;
	cout << "|" << endl;
	cout << "|" << "Solution:" << endl;
	cout << "|" << "a = F / m" << endl;
	cout << "|" << "a = 10 / 2" << endl;
	cout << "|" << "a = 5 m/s2" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

	cout << endl;

	system("pause");

	cout << endl;

	cout << "Do you want to practise your knowledge about principles of mechanics with questions? (Y/N)" << endl;

	while (symbol != 'Y' and symbol != 'N')
	{
		cin >> symbol;
	}

	cout << endl;

	if (symbol == 'Y')
	{
		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is the first principle of mechanics?" << endl;
		cout << "|" << "a) The acceleration of the body is directly proportional to the force of the forces applied to the body and is inversely proportional to the mass of the body" << endl; 
		cout << "|" << "b) Every body maintains its state of rest or of rectilinear uniform motion until external influence brings it out of this state" << endl; // correct answer
		cout << "|" << "c) If one body acts on another body with force, then always the second body opposes the second with equal in size and opposite in direction force (Each action has equal in size and opposite in direction counteraction)" << endl;
		cout << "|" << endl;
		cout << "|" << "Your answer(a, b or c): ";

		while (answer != 'b')
		{
			cin >> answer;
		}

		if (answer == 'b')
		{
			cout << "|" << "Correct answer!" << endl;
			cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
		}

		cout << endl;

		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is the second principle of mechanics?" << endl;
		cout << "|" << "a) The acceleration of the body is directly proportional to the force of the forces applied to the body and is inversely proportional to the mass of the body" << endl; // correct answer
		cout << "|" << "b) Every body maintains its state of rest or of rectilinear uniform motion until external influence brings it out of this state" << endl; 
		cout << "|" << "c) If one body acts on another body with force, then always the second body opposes the second with equal in size and opposite in direction force" << endl;
		cout << "|" << endl;
		cout << "|" << "Your answer(a, b or c): ";

		while (answer2 != 'a')
		{
			cin >> answer2;
		}

		if (answer2 == 'a')
		{
			cout << "|" << "Correct answer!" << endl;
			cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
		}

		cout << endl;

		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is the third principle of mechanics?" << endl;
		cout << "|" << "a) The acceleration of the body is directly proportional to the force of the forces applied to the body and is inversely proportional to the mass of the body" << endl; 
		cout << "|" << "b) Every body maintains its state of rest or of rectilinear uniform motion until external influence brings it out of this state" << endl;
		cout << "|" << "c) If one body acts on another body with force, then always the second body opposes the second with equal in size and opposite in direction force" << endl; // correct answer
		cout << "|" << endl;
		cout << "|" << "Your answer(a, b or c): ";

		while (answer3 != 'c')
		{
			cin >> answer3;
		}

		if (answer3 == 'c')
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

char thirdTopic(char symbol, char answer)
{
	cout << endl;

	cout << "\t\t" << "Third topic - Mechanical work" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Definition: " << endl;
	cout << "|" << "Mechanical work -> Work of force directed in the direction of movement of the body" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Formulas: " << endl;
	cout << "|" << "A = F.s [J] (when the force is directed in the direction of the body's movement)" << endl;
	cout << "|" << "A = -F.s [J] (when the force is with the opposite direction of movement of the body)" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Task with solution:" << endl;
	cout << "|" << "Task:" << endl;
	cout << "|" << "Mother pushes the pushchair horizontally with a force F = 25N, directed in the direction of movement. How much work will the woman do when the pushchair elapses s = 100m?" << endl;
	cout << "|" << endl;
	cout << "|" << "Solution:" << endl;
	cout << "|" << "A = F * s" << endl;
	cout << "|" << "A = 25 * 100" << endl;
	cout << "|" << "A = 2500N = 2,5kN" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

	cout << endl;

	system("pause");

	cout << endl;

	cout << "Do you want to practise your knowledge about mechanical work with questions? (Y/N)" << endl;

	while (symbol != 'Y' and symbol != 'N')
	{
		cin >> symbol;
	}

	cout << endl;

	if (symbol == 'Y')
	{
		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is mechanical work?" << endl;
		cout << "|" << "a) Work of force directed in the direction of movement of the body" << endl; // correct answer
		cout << "|" << "b) body, according to which we define the position and movement of other bodies" << endl;
		cout << "|" << "c) every change in the relative position of bodies over time" << endl;
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

char fourthTopic(char symbol, char answer)
{
	cout << endl;

	cout << "\t\t" << "Fourth topic - Pressure and Pascal's law" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Definitions: " << endl;
	cout << "|" << "Pressure -> The force of pressure on area" << endl;
	cout << "|" << "Pascal's law -> the pressure applied to a liquid or gas closed in a container is transmitted unchanged at all points of the liquid or gas and on the walls of the container" << endl;
	cout << "|" << "Hydraulic machine -> two connected to the tube cylinders of different diameters, filled with liquids and closed with movable pistons - with a hydraulic machine gains power" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - -" << endl;
	cout << "|" << "\t\t" << "Formulas: " << endl;
	cout << "|" << "p(Pressure) = F / s [kg/m3]" << endl;
	cout << "|" << "Gains power with a hydraulic machine - F2 = (S2 / S1) * F1" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << endl;
	cout << endl;

	cout << "|- - - - - - - - - - - - - - - - - - - " << endl;
	cout << "|" << "\t\t" << "Task with solution:" << endl;
	cout << "|" << "Task:" << endl;
	cout << "|" << "A force F1 = 300N acts on the small piston of the hydraulic machine. The ratio of the area of the two pistons is (S2 / S1) = 50. Determinate the force F2 that acts on the fluid with the large piston." << endl;
	cout << "|" << endl;
	cout << "|" << "Solution:" << endl;
	cout << "|" << "F2 = (S2 / S1) * F1" << endl;
	cout << "|" << "F2 = 50 * 300" << endl;
	cout << "|" << "F2 = 15 000N = 15kN" << endl;
	cout << "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

	cout << endl;

	system("pause");

	cout << endl;

	cout << "Do you want to practise your knowledge about pressure and Pascal's law with questions? (Y/N)" << endl;

	while (symbol != 'Y' and symbol != 'N')
	{
		cin >> symbol;
	}

	cout << endl;

	if (symbol == 'Y')
	{
		cout << "|- - - - - - - - - - - - - - - " << endl;
		cout << "|" << "What is the Pascal's law?" << endl;
		cout << "|" << "a) every change in the relative position of bodies over time" << endl; 
		cout << "|" << "b) the physical quantity that the body becomes rapidly, which changes the speed of a body" << endl;
		cout << "|" << "c) The pressure applied to a liquid or gas closed in a container is transmitted unchanged at all points of the liquid or gas and on the walls of the container" << endl; // correct answer
		cout << "|" << endl;
		cout << "|" << "Your answer(a, b or c): ";

		while (answer != 'c')
		{
			cin >> answer;
		}

		if (answer == 'c')
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
	char answersTwo = 'f';
	char answersThree = 'f';

	cout << "Hello!" << endl;
	cout << "Do you want to play? (Yes/No)" << endl;

	while (YesOrNo != "Yes" and YesOrNo != "No")
	{
		cin >> YesOrNo;
	}

	if (YesOrNo == "No")
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

			firstTopic(symbolTopics, answers, answersTwo);

			cout << endl;

			cout << "Do you want to continue? (Yes/No)" << endl;

			cin >> YesOrNo;

			while (YesOrNo != "Yes" and YesOrNo != "No")
			{
				cin >> YesOrNo;
			}

			if (YesOrNo == "Yes")
			{
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Ok! Goodbye!";
				exit(0);
			}
			break;

		case 2:

			secondTopic(symbolTopics, answers, answersTwo, answersThree);

			cout << endl;

			cout << "Do you want to continue? (Yes/No)" << endl;

			cin >> YesOrNo;

			while (YesOrNo != "Yes" and YesOrNo != "No")
			{
				cin >> YesOrNo;
			}

			if (YesOrNo == "Yes")
			{
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Ok! Goodbye!";
				exit(0);
			}
			break;

		case 3:

			thirdTopic(symbolTopics, answers);

			cout << endl;

			cout << "Do you want to continue? (Yes/No)" << endl;

			cin >> YesOrNo;

			while (YesOrNo != "Yes" and YesOrNo != "No")
			{
				cin >> YesOrNo;
			}

			if (YesOrNo == "Yes")
			{
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Ok! Goodbye!";
				exit(0);
			}
			break;

		case 4:

			fourthTopic(symbolTopics, answers);

			cout << endl;

			cout << "Do you want to continue? (Yes/No)" << endl;

			cin >> YesOrNo;

			while (YesOrNo != "Yes" and YesOrNo != "No")
			{
				cin >> YesOrNo;
			}

			if (YesOrNo == "Yes")
			{
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Ok! Goodbye!";
				exit(0);
			}
			break;
		}
	}

	cout << "This was the end! Do you want to start again? (Yes/No)" << endl;

	cin >> YesOrNo;

	while (YesOrNo != "Yes" and YesOrNo != "No")
	{
		cin >> YesOrNo;
	}

	if (YesOrNo == "Yes")
	{
		system("cls");
		main();
	}
	else
	{
		cout << "Ok! Goodbye!";
		exit(0);
	}
}