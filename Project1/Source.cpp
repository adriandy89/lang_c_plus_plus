#include <iostream>

using namespace std;

// global string variable

string myString = "Hello, World!";

void welcomeMessage();
void printStringMsg(string message);
void printStringMsg(string message, int x);

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

// class and hineritance example
class myClass
{
public:
	int x;
	int y;
	myClass(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	myClass() : x(0), y(0) {} // Default constructor
	void print() const // Made const
	{
		cout << "The value of x is: " << x << endl;
		cout << "The value of y is: " << y << endl;
	}
};

class myClass2 : public myClass
{
public:
	int z;
	myClass2(int x, int y, int z) : myClass(x, y) // Call base class constructor
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void print() const // Made const
	{
		cout << "The value of x is: " << x << endl;
		cout << "The value of y is: " << y << endl;
		cout << "The value of z is: " << z << endl;
	}
};


int main()
{
	welcomeMessage();
	string msgParam = "message param";
	printMessage(msgParam);

	cout << myString << endl;

	// const and example of float number
	const float myFloat = 31.f; // f is used to specify float number
	cout << "The value of myFloat is: " << myFloat << endl;

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
	int myArray[6] = { 1, 2, 3, 4, 5 };
	for (int k = 0; k < 5; k++)
	{
		cout << "The value of myArray[" << k << "] is: " << myArray[k] << endl;
	}
	// adding elements to the array at index 5, previous elements are not changed
	myArray[5] = 6;
	cout << "The value of myArray[5] added is: " << myArray[5] << endl;

	// 2D array
	int my2DArray[2][3] = { {1, 2, 3}, {4, 5, 6} };
	for (int l = 0; l < 2; l++)
	{
		for (int m = 0; m < 3; m++)
		{
			cout << "The value of my2DArray[" << l << "][" << m << "] is: " << my2DArray[l][m] << endl;
		}
	}

	// 3D array
	int my3DArray[2][3][4] = { { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }, { {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24} } };
	for (int l = 0; l < 2; l++)
	{
		for (int m = 0; m < 3; m++)
		{
			for (int n = 0; n < 4; n++)
			{
				cout << "The value of my3DArray[" << l << "][" << m << "][" << n << "] is: " << my3DArray[l][m][n] << endl;
			}
		}
	}

	// pointer
	int myInt2 = 10;
	int* myPointer = &myInt2;
	cout << "The value of myInt2 is: " << myInt2 << endl;
	cout << "The value of myPointer is: " << myPointer << endl; // address
	cout << "The value of *myPointer is: " << *myPointer << endl; // value

	// reference
	int myInt3 = 20;
	int& myReference = myInt3;
	cout << "The value of myInt3 is: " << myInt3 << endl;
	cout << "The value of myReference is: " << myReference << endl;

	// explaining the difference between pointer and reference, resume text comment:
	// pointer is a variable that stores the address of another variable,
	// while reference is a variable that is an alias for another variable

	// pointer array example
	int myArray2[5] = { 10, 20, 30, 40, 50 };
	int* myPointer2 = myArray2;
	for (int i = 0; i < 5; i++)
	{
		cout << "The value of myArray2[" << i << "] is: " << myArray2[i] << endl;
		cout << "The value of myPointer2[" << i << "] is: " << myPointer2[i] << endl;
	}
	// pointer array example with increment
	for (int i = 0; i < 5; i++)
	{
		cout << "The value of myPointer2 is: " << *myPointer2 << endl;
		myPointer2++;
	}
	// pointer example whit struct and arrow operator
	struct myStruct2
	{
		int x;
		int y;
	};
	myStruct2 myPoint2 = { 10, 20 };
	myStruct2* myPointer3 = &myPoint2;
	cout << "The value of myPoint2.x is: " << myPoint2.x << endl;
	cout << "The value of myPoint2.y is: " << myPoint2.y << endl;
	cout << "The value of myPointer3->x is: " << myPointer3->x << endl;
	cout << "The value of myPointer3->y is: " << myPointer3->y << endl;

	// increment and decrement
	int myInt4 = 30;
	cout << "The value of myInt4 is: " << myInt4 << endl;
	cout << "The value of myInt4 is: " << ++myInt4 << endl;
	cout << "The value of myInt4 is: " << --myInt4 << endl;

	// functions overloading
	printStringMsg("overloading!");
	printStringMsg("overloading!", 5);

	// Strings operations multiple ways and examples of many operations
	string myString1 = "Hello";
	string myString2 = "World";
	string myString3 = myString1 + " " + myString2;
	cout << "The value of myString3 is: " << myString3 << endl;
	cout << "The length of myString3 is: " << myString3.length() << endl;
	cout << "The first character of myString3 is: " << myString3[0] << endl;
	cout << "The last character of myString3 is: " << myString3
		[myString3.length() - 1] << endl;
	cout << "The substring of myString3 is: " << myString3.substr(6, 5) << endl;
	cout << "The find of myString3 is: " << myString3.find("World") << endl;

	// const example
	const int myConst = 40;
	// myConst = 50; // error
	// myConst++; // error
	cout << "The value of myConst is: " << myConst << endl;


	// typedef example
	typedef int myIntType;
	myIntType myInt5 = 50;
	cout << "The value of myInt5 is: " << myInt5 << endl;

	// enum example
	enum myEnum { RED, GREEN, BLUE };
	myEnum myColor = GREEN;
	cout << "The value of myColor is: " << myColor << endl;
	myEnum myColor2 = myEnum::BLUE;
	cout << "The value of myColor2 is: " << myColor2 << endl;

	// union example
	union myUnion
	{
		int x;
		float y;
	};
	myUnion myValue = { 50 };
	myValue.x = 60;
	cout << "The value of myValue.x is: " << myValue.x << endl;
	myValue.y = 70.5;
	cout << "The value of myValue.y is: " << myValue.y << endl;

	// struct example
	struct myStruct
	{
		int x;
		int y;
		void print()
		{
			cout << "The value of x is: " << x << endl;
			cout << "The value of y is: " << y << endl;
		}
	};
	myStruct myPoint = { 0, 0 };
	myPoint.x = 10;
	myPoint.y = 20;
	cout << "The value of myPoint.x is: " << myPoint.x << endl;
	cout << "The value of myPoint.y is: " << myPoint.y << endl;
	myPoint.print();

	// conditional operator
	int myInt6 = 80;
	int myInt7 = 90;
	int myMax = (myInt6 > myInt7) ? myInt6 : myInt7;
	cout << "The value of myMax is: " << myMax << endl;

	// OR, AND, NOT operators
	bool myBool1 = true;
	bool myBool2 = false;
	cout << "The value of myBool1 OR myBool2 is: " << (myBool1 || myBool2) << endl;
	cout << "The value of myBool1 AND myBool2 is: " << (myBool1 && myBool2) << endl;
	cout << "The value of NOT myBool1 is: " << !myBool1 << endl;

	// bitwise operators
	int myInt8 = 85;
	int myInt9 = 170;
	cout << "The value of myInt8 AND myInt9 is: " << (myInt8 & myInt9) << endl;
	cout << "The value of myInt8 OR myInt9 is: " << (myInt8 | myInt9) << endl;
	cout << "The value of myInt8 XOR myInt9 is: " << (myInt8 ^ myInt9) << endl;
	cout << "The value of myInt8 left shift 2 is: " << (myInt8 << 2) << endl;
	cout << "The value of myInt8 right shift 2 is: " << (myInt8 >> 2) << endl;

	// myClass and myClass2 example
	myClass myObject(100, 200);
	myObject.print();
	myClass2 myObject2(300, 400, 500);
	myObject2.print();
	
	cout << "Bye!\n";

	system("pause");
	return 0;
}

void welcomeMessage()
{
	cout << "Welcome to the program!" << endl;
	return;
}

// functions overloading - same function name but different parameters, return type is not considered
void printStringMsg(string message)
{
	cout << message << endl;
	return;
}

void printStringMsg(string message, int x)
{
	cout << message << " " << x << endl;
	return;
}


