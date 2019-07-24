#include<iostream>
///////////////////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
///////////////////////////////////////////////////////
unsigned long long fact(int x);
///////////////////////////////////////////////////////
int main()
{
	cout << "This program calculates the factorial of a number.\n\n"
		<< "Specify a number to calculate the factorial <q - exit>\n"
		<< "Enter a number: ";
	int x = 0;

	while (cin >> x)
	{
		if (x >= 0 && x <= 21)
			cout << "Factorial of number you choose is: " << fact(x);
		else
			cout << "\nSorry. This program can't calculate number like these." << endl;
		cout << "\n\nEnter next integer: ";
	}
	cout << "\nYou choose to quit. Goodbye.\n";
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////
unsigned long long fact(int x)
{
	unsigned long long n = x;
	if (n > 1)
		return n * fact(n - 1);
	else
		return 1;
}