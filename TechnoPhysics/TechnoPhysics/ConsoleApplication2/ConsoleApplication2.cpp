#include <iostream>
using namespace std;

int main()
{
	int option;
	char start, DF;

	cout << "Do you want to start the programme?" << endl;
	cout << "Type Y or N" << endl;
	cin >> start;

	if (start == 'Y' or start == 'y')
	{
		system("CLS");
		cout << "Choose theme." << endl;
		cout << endl;
			cout << "1.Mechanical motion and acceleration." << endl;
			cout << endl;
			cout << "2.Principles of mechanics. " << endl;
			cout << endl;
			cout << "3.Mechanical work." << endl;
			cout << endl;
			cout << "4.Pressure and Pascal’s law."<< endl;
			cout << endl;
			cout << "Enter 1 - 4:" << endl;
			cin >> option;
			if (option == 1)
			{
				system("CLS");
				cout << "Defenition or Formula?" << endl;
				cout << "Type D or F" << endl;
				cin >> DF;
				if (DF == 'D')
				{
					system("CLS");
					cout << "Mechanical movement -> every change in the relative position of bodies over time.";
						cout << endl;
						cout << "Acceleration -> the physical quantity that the body becomes rapidly, which changes the speed of a body.";
						cout << endl;
						cout << "Press E to end." << endl;
						cin >> DF;

						if (DF == 'E' or DF == 'e')
						{
							system("CLS");
						}
						else
						{
							system("CLS");
							cout << "Err0r!! Try Again!" << endl;
						}

				}
				else if (DF == 'F')
				{
					system("CLS");
					cout << "Acceleration ->  a = v/t = (v2- v1)/(t2-t1)[m/s2]";
					cout << endl;
						cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}
				}
				else
				{
					system("CLS");
					cout << "Err0r!! Try Again!" << endl;
					
				}
			}
			else if ( option == 2)
			{
				system("CLS");
				cout << "Defenition or Formula?" << endl;
				cout << "Type D or F" << endl;
				cin >> DF;
				if (DF == 'D')
				{
					system("CLS");
					cout << "First principle of mechanics (Law of Inertia) -> Every body maintains its state of rest or of rectilinear uniform motion until external influence brings it out of this state." << endl;
					cout << endl;
					cout << "Second principle of mechanics -> The acceleration of the body is directly proportional to the force of the forces applied to the body and is inversely proportional to the mass of the body. " << endl;
					cout << endl;
					cout << "Third principle of mechanics -> If one body acts on another body with force, then always the second body opposes the second with equal in size and opposite in direction force (Each action has equal in size and opposite in direction counteraction)." << endl;
					cout << endl;
					cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}
				}
				else if (DF == 'F')
				{
					system("CLS");
					cout << "Mass -> m = F/a [kg]" << endl;
					cout << endl;
					cout << "Force -> F = m.a[N]" << endl;
					cout << endl;
					cout << "Acceleration -> a = F/m [m/s2] " << endl;
					cout << endl;
					cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}

				}
				else
				{
					system("CLS");
					cout << "Err0r!! Try Again!" << endl;
					
				}
			}
			else if(option == 3)
			{
				system("CLS");
				cout << "Defenition or Formula?" << endl;
				cout << "Type D or F" << endl;
				cin >> DF;
				if (DF == 'D')
				{
					system("CLS");
					cout << "Mechanical work  ->  Work of force directed in the direction of movement of the body." << endl;
					cout << endl;
					cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}
				}
				else if (DF == 'F')
				{ 
					system("CLS");
					cout << "Mechanical work -> A = Fs [J] -> when the force is directed in the direction of the body's movement." << endl;
					cout << endl;
					cout << "Mechanical work -> A = -Fs [J] -> when the orce is with the opposite direction of movement of the body." << endl;
					cout << endl;
					cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}
				}
				else
				{
					system("CLS");
					cout << "Err0r!! Try Again!" << endl;
					
				}
			}
			else if (option == 4)
			{
				system("CLS");
				cout << "Defenition or Formula?" << endl;
				cout << "Type D or F" << endl;
				cin >> DF;
				if (DF == 'D')
				{
					system("CLS");
					cout <<"Pressure -> The force of pressure on area." << endl;
					cout << endl;
					cout << "Pascal's law -> the pressure applied to a liquid or gas closed in a container is transmitted unchanged at all points of the liquid or gas and on the walls of the container." << endl;
					cout << endl;
					cout << "Hydraulic machine -> two connected to the tube cylinders of different diameters, filled with liquids and closed with movable pistons - with a hydraulic machine gains power." <<endl;
					cout << endl;
					cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}
				}
				else if (DF == 'F')
				{
					system("CLS");
					cout << "Pressure -> p = F/S [kg/m3]" << endl;
					cout << endl;
					cout << "Gains power with hydraulic machine -> F2 = (S2/S1).F1 ";
					cout << "Press E to end." << endl;
					cin >> DF;

					if (DF == 'E' or DF == 'e')
					{
						system("CLS");
					}
					else
					{
						system("CLS");
						cout << "Err0r!! Try Again!" << endl;
					}
				}
				else
				{
					system("CLS");
					cout << "Err0r!! Try Again!" << endl;
					
				}
			}
			else
			{
				system("CLS");
				cout << "Err0r!! Try Again!";
				
			}
	}
	else if (start == 'N' or start == 'n')
	{
		system("CLS");
		cout << "See you again :)!";
		cout << "Press E to end." << endl;
		cin >> DF;

		if (DF == 'E' or DF == 'e')
		{
			system("CLS");
		}
		else
		{
			system("CLS");
			cout << "Err0r!! Try Again!" << endl;
		}

	}
	else
	{
		system("CLS");
		cout << "Err0r!! Try again." << endl;
		
		
	};

}