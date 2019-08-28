// TestProgram1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
void inputQ();
void answerQ();


int main()
{
	char again;
	cout << "Welcome to Magic-8, the program that will answer all your questions.\n\n";
	cout << "				8888888\n"
		<< "				8     8\n"
		<< "				8     8\n"
		<< "				8888888\n"
		<< "				8     8\n"
		<< "				8     8\n"
		<< "				8888888\n\n";
	system("pause");
	do
	{
		system("cls");
		cout << "Please enter your question: \n";
		inputQ();
		cout << "\n...\n\n";
		answerQ();
		cout << "--------------------------------------";
		cout << "\nWant to try again? (Y = yes, N = no)\n";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	return 0;
}

void inputQ()
{
	char letter;
	do
	{
		cin.get(letter);
	} while (letter != '?');
}

void answerQ()
{
	int num = (rand() % 15) + 1;
	switch (num)
	{
	case 1:
		cout << "Nope. Sorry, Charlie\n";
		break;
	case 2:
		cout << "Well, what do you think???\n";
		break;
	case 3:
		cout << "It's possible, pig.\n";
		break;
	case 4:
		cout << "Shoot, I don't know!\n";
		break;
	case 5:
		cout << "That's a stupid question. Ask something else.\n";
		break;
	case 6:
		cout << "I think you look like Cap'n Crunch.\n";
		break;
	case 7:
		cout << "The answer is yes, or my name isn't Zaphod Beetlebrox.\n";
		break;
	case 8:
		cout << "Perhaps... but then again, perhaps not...\n";
		break;
	case 9:
		cout << "Inconceivable!\n";
		break;
	case 10:
		cout << "42.\n";
		break;
	case 11:
		cout << "I don't think so, Tim.\n";
		break;
	case 12:
		cout << "Cookie Man say no.\n";
		break;
	case 13:
		cout << "Make it so.\n";
		break;
	case 14:
		cout << "Affirmative, Captain. Live long and prosper.\n";
		break;
	case 15:
		cout << "What do I look like, a crystal ball?\n";
		break;
	default:
		cout << "Errr, sorry, there's been an error. Try again.\n";
	}
}