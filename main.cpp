/*******************************************************************************
 * AUTHORS		: Zac Campos & Chris Burrell
 * STUDENT ID	: 1058476
 * LAB #16		: Selection = Party Planner
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 3/14/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
 * Selection - Party Planner
 * -----------------------------------------------------------------------------
 * This program will output which snack should be served to the guests based
 * on the guests' preferences.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<The program takes in the user's name, age, and whether they like
 * 		chocolate and nuts.>
 *
 * OUTPUT:
 * 	<This program will output what should be served to the guest.>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING and cstring size.
	 * -------------------------------------------------------------------------
	 * PROGRAMMERS	: Programmers' Name
	 * CLASS		: Students' Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 * CSTRINGSIZE	: Size of the cstring for the user's name
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos & Chris Burrell";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 16;
	const char LAB_NAME[]	= "Selection - Party Planner";
	const int  CSTRINGSIZE	= 30;

	// Input & Processing variables
	char name[CSTRINGSIZE];
	int  age = 0;
	char chocPreference;
	char nutPreference;

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT - Reads in friend's name, age, and whether they like
	 * chocolate and nuts.
	 **************************************************************************/
	cout << left;
	cout << setw(30) << "What is your friend's name?";
	cin.getline (name, CSTRINGSIZE);

	cout << setw(30) << "How old is your friend?";
	cin  >> age;
	cin.ignore(10000, '\n');

	cout << setw(30) << "Do they like chocolate (Y/N)?";
	cin  >> chocPreference;
	chocPreference = toupper(chocPreference);
	cin.ignore(10000, '\n');

	cout << setw(30) << "Do they like nuts (Y/N)?";
	cin  >> nutPreference;
	nutPreference = toupper(nutPreference);
	cin.ignore(10000, '\n');

	cout << endl;
	/***************************************************************************
	 * PROCESSING and OUTPUT - Processes what food and drink should be served.
	 **************************************************************************/
	if (age >= 21)
	{
		if(chocPreference == 'Y')
		{
			if(nutPreference == 'Y')
			{
				cout << "You should serve " << name << " Peanut M & M's and beer.";
			}
			else
			{
				cout << "You should serve " << name << " M & M's and beer.";
			}
		}
		else
		{
			cout << "You should serve " << name << "Skittles and beer.";
		}
	}
	else
	{
		if(chocPreference == 'Y')
		{
			if(nutPreference == 'Y')
			{
				cout << "You should serve " << name << " Peanut M & M's and soda.";
			}
			else
			{
				cout << "You should serve " << name << " M & M's and soda.";
			}
		}
		else
		{
			cout << "You should serve " << name << "Skittles and soda.";
		}
	}

	return 0;
}
