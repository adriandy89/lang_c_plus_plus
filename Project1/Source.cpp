#include <iostream>
using namespace std;

// global string variable
string myString = "Hello, World!";

void welcomeMessage();

void printMessage(string message)
{
	cout << message << endl;
	return;
}

int square(int x)
{
	cout << "The value of x is: " << x << endl;
	return x * x;
}

int main()
{
	welcomeMessage();
	string msgParam = "message param";
	printMessage(msgParam);

	cout << myString << endl;

	char myVar = 'A';
	cout << "The value of myVar is: " << myVar << endl;

	int myInt = 65;
	cout << "The value of myInt is: " << myInt << endl;
	int mySquare = square(myInt);
	cout << "The square of myInt is: " << mySquare << endl;

	myVar = 'B';
	cout << "The value of myVar is: " << myVar << endl;

	// if statement
	if (myVar == 'A')
	{
		cout << "The value of myVar is: " << myVar << endl;
	}
	else
	{
		cout << "The value of myVar is not A" << endl;
	}

	// switch statement
	switch (myVar)
	{
	case 'A':
		cout << "The value of myVar is: " << myVar << endl;
		break;
	case 'B':
		cout << "The value of myVar is: " << myVar << endl;
		break;
	default:
		cout << "The value of myVar is not A or B" << endl;
		break;
	}

	// while loop
	int i = 0;
	while (i < 5)
	{
		i++;
		if (i == 3)
		{
			continue;
		}
		cout << "The value of i is: " << i << endl;
	}

	// do while loop
	i = 0;
	do
	{
		i++;
		if (i == 3)
		{
			break;
		}
		cout << "The value of i is: " << i << endl;
	} while (i < 5);

	// for loop
	for (int j = 0; j < 5; j++)
	{
		if (j == 3)
		{
			continue;
		}
		cout << "The value of j is: " << j << endl;
	}

	// array
	int myArray[5] = { 1, 2, 3, 4, 5 };
	for (int k = 0; k < 5; k++)
	{
		cout << "The value of myArray[" << k << "] is: " << myArray[k] << endl;
	}

	// pointer
	int myInt2 = 10;
	int* myPointer = &myInt2;
	cout << "The value of myInt2 is: " << myInt2 << endl;
	cout << "The value of myPointer is: " << myPointer << endl;
	cout << "The value of *myPointer is: " << *myPointer << endl;

	// reference
	int myInt3 = 20;
	int& myReference = myInt3;
	cout << "The value of myInt3 is: " << myInt3 << endl;
	cout << "The value of myReference is: " << myReference << endl;

	// increment and decrement
	int myInt4 = 30;
	cout << "The value of myInt4 is: " << myInt4 << endl;
	cout << "The value of myInt4 is: " << ++myInt4 << endl;
	cout << "The value of myInt4 is: " << --myInt4 << endl;

	cout << "Bye!\n";

	system("pause");
	return 0;
}

void welcomeMessage()
{
	cout << "Welcome to the program!" << endl;
	return;
}