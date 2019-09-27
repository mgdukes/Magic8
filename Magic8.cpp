// Magic8: the snarky magic 8 ball program

#include <iostream>
#include <string>
#include <random>

using namespace std;
void inputQ();
string answerQ();
int randomNumber();
void clearScreen();
void pause();

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
	pause();
	do
	{
		clearScreen();
		cout << "Please enter a yes/no question: \n";
		inputQ();
		cout << "\n...\n\n";
		cout << answerQ() << endl;
		cout << "--------------------------------------";
		cout << "\nWant to try again? (Y = yes, N = no)\n";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	return 0;
}


// read the question that was input
void inputQ()
{
	string ans;
	do 
	{
		getline(cin, ans);
	} while (ans.length() < 1);
}

//give a randomly selected answer
string answerQ()
{
	string response;
	//int num = (rand() % 20) + 1;
	int num = randomNumber();
	
	switch (num)
	{
	case 1:
		response = "Nope. Sorry, Charlie";
		break;
	case 2:
		response = "The answer is yes, or my name isn't Zaphod Beeblebrox.";
		break;
	case 3:
		response = "It's possible, pig.";
		break;
	case 4:
		response = "Shoot, I don't know!";
		break;
	case 5:
		response = "That's a stupid question. Ask something else.";
		break;
	case 6:
		response = "I think you look like Cap'n Crunch.";
		break;
	case 7:
		response = "Well, what do you think???";
		break;
	case 8:
		response = "Perhaps... but then again, perhaps not...";
		break;
	case 9:
		response = "Inconceivable!";
		break;
	case 10:
		response = "42.";
		break;
	case 11:
		response = "I don't think so, Tim.";
		break;
	case 12:
		response = "Cookie Man say no.";
		break;
	case 13:
		response = "Make it so.";
		break;
	case 14:
		response = "Affirmative, Captain.";
		break;
	case 15:
		response = "What do I look like, a crystal ball?";
		break;
	case 16:
		response = "Look, pal, that's your problem.";
		break;
	case 17:
		response = "Use the Force, Luke.";
		break;
	case 18:
		response = "I am Groot.";
		break;
	case 19:
		response = "Ehhh, wibbly-wobbly timey-wimey.";
		break;
	case 20:
		response = "What's your problem???";
		break;
	case 21:
		response = "LOL that's cute.";
		break;
	case 22:
		response = "Seriously?";
		break;	
	case 23:
		response = "Well duhhhh...";
		break;
	case 24:
		response = "50 points from Griffindor for asking that question.";
		break;
	default:
		response = "Errr, sorry, there's been an error. Try again.";
	}
	return response;
}

//generate a uniformly distributed random number
int randomNumber()
{
	const int lower = 1;
	const int upper = 24;
	random_device randDev;
	mt19937 generator(randDev());
	uniform_int_distribution<int> distr(lower, upper);
	return distr(generator);
}


//clear screen regardless of platform
void clearScreen()
{
	#ifdef WINDOWS
		system("cls");
	#else
		// Assume POSIX
		system ("clear");
	#endif
}

//to replace system("pause") command
void pause()
{
	cout << "Press enter to continue ..."; 
	cin.get();  
}
