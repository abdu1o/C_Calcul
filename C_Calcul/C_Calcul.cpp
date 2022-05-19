#include <iostream>
using namespace std;

//(1)----------------------------------------
//int main()
//{
//	int a;
//	int b;
//	int c;
//
//	cout << "Enter 3 numbers: ";
//	cin >> a >> b >> c;
//
//	int min = a < b ? a < c ? a : c : b < c ? b : c;
//
//	cout << "Min number: " << min << "\n";
//}
//-------------------------------------------


//(2)----------------------------------------
//int main()
//{
//	double a;
//
//	cout << "Enter number: ";
//	cin >> a;
//
//	if (a > 0)
//	{
//		cout << "Number is positive \n";
//	}
//	else if (a < 0)
//	{
//		cout << "Number is negative \n";
//	}
//	else if (a == 0)
//	{
//		cout << "Number is 0 \n";
//	}
//	else
//	{
//		cout << "Input Error \n";
//	}
//}
//-------------------------------------------


//(3)----------------------------------------
//int main()
//{
//	int a;
//	int b;
//
//	cout << "Enter 2 numbers: ";
//	cin >> a >> b;
//
//	int choice;
//
//	cout << "Enter number [1 - 5] \n 1 - plus \n 2 - minus \n 3 - multiplication \n 4 - degree \n 5 - degree (remainder) \n ";
//	cin >> choice;
//
//	switch (choice)
//	{
//	case 1: 
//		cout << a + b << "\n";
//		break; 
//	case 2:
//		cout << a - b << "\n";
//		break;
//	case 3:
//		cout << a * b << "\n";
//		break;
//	case 4:
//		cout << a / b << "\n";
//		break;
//	case 5:
//		cout << a % b << "\n";
//		break;
//	default:
//		cout << "Input error !\n";
//		break;
//	}
//	cout << "Adios!\n";
//}
//-------------------------------------------


//(4)----------------------------------------
//int main()
//{
//	char symb;
//
//	cout << "Enter symbol: ";
//	cin >> symb;
//
//	if (symb == '!' || symb == '?' || symb == ',' || symb == '.' || symb == ';' || symb == ':' || symb == '(' || symb == ')' || symb == '-')
//	{
//		cout << "This is a punctuation mark \n";
//	}
//	else if (symb == '0' || symb == '1' || symb == '2' || symb == '3' || symb == '4' || symb == '5' || symb == '6' || symb == '7' || symb == '8' || symb == '9')
//	{
//		cout << "This is a number \n";
//	}
//	else
//	{
//		cout << "This is a letter or unknown symbol \n";
//	}
//	
//}
//-------------------------------------------


//(5)----------------------------------------
//int main()
//{
//	int num1;
//
//	cout << "Enter number: ";
//	cin >> num1;
//
//	if (num1 % 3 == 0 && num1 % 5 == 0 && num1 % 7 == 0)
//	{
//		cout << "Number is multiple to 3, 5 and 7 \n";
//	}
//	else
//	{
//		cout << "Number is not multiple to 3, 5 and 7 \n";
//	}
//}
//-------------------------------------------


//(6)----------------------------------------
int main()
{
	int num1;

	cout << "Enter number: ";
	cin >> num1;

	int count = 0;

	while (num1 != 0)
	{
		num1 = num1 / 10;
		count ++;
	}
	cout << "In number " << count << " digits \n";
}
//-------------------------------------------