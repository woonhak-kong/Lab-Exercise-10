#include <iostream>
#include <string>


using namespace std;


bool CheckCharacterLong(string& string);
bool CheckUppercase(string& string);
bool CheckLowercase(string& string);
bool CheckDigit(string& string);

int main()
{
	string id;
	bool pass = true;

	cout << "Type your ID\n";
	cout << "> ";
	getline(cin, id);

	if (!CheckCharacterLong(id))
	{
		cout << "You must type at least 6 character long.\n";
		pass = false;
	}

	if (!CheckUppercase(id))
	{
		cout << "You must type at least one uppercase.\n";
		pass = false;
	}

	if (!CheckLowercase(id))
	{
		cout << "You must type at least one lowercase.\n";
		pass = false;
	}

	if (!CheckDigit(id))
	{
		cout << "You must type at least one digit.\n";
		pass = false;
	}

	if (pass)
	{
		cout << "Good Job!! You made it!\n";
	}

	return 0;
}

bool CheckCharacterLong(string& string)
{

	if (string.length() < 6)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool CheckUppercase(string& string)
{
	for (int i = 0; i < string.length(); i++)
	{
		if ((int)string[i] >= 65 && (int)string[i] <= 90)
		{
			return true;
		}

	}
	return false;
}

bool CheckLowercase(string& string)
{
	for (int i = 0; i < string.length(); i++)
	{
		if ((int)string[i] >= 97 && (int)string[i] <= 122)
		{
			return true;
		}

	}
	return false;
}

bool CheckDigit(string& string)
{
	for (int i = 0; i < string.length(); i++)
	{
		if ((int)string[i] >= 48 && (int)string[i] <= 57)
		{
			return true;
		}

	}
	return false;
}
