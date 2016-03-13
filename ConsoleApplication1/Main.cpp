// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Main.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
//#include <conio.h>
	try
	{
		Ex28::sol();
	}
	catch(int)
	{
		return -1;
	}
	return 0;
//	getche();
}

void Ex1::sol()
{
	int x;
	cout << "Please enter a random number: ";
	cin >> x;
	if (x >= 56 && x <= 78)
	{
		cout << "YOU WIN! :)" << endl;
	}
	else
	{
		cout << "YOU LOSE! :(" << endl;
	}
}
void Ex2::sol()
{
	int x = 0;
	for (int i = 8; i <= 23; i++)
	{
		cout << "Please type " << i << ": ";
		cin >> x;
		if (x != i)
		{
			cout << "Oops! Wrong number. Try again!" << endl;
			i--;
		}
	}
	cout << "SUCCESS!" << endl << endl;
}

void Ex3::sol()
{
	int x = 0; int i = 8;
	while (i <= 23)
	{
		cout << "Please type " << i << ": ";
		cin >> x;
		if (x != i)
		{
			cout << "Oops! Wrong number. Try again!" << endl;
			i--;
		}
		i++;
	}
	cout << "SUCCESS!" << endl << endl;
}

void Ex4::sol()
{
	int sum = 0; int num;
	cout << "Welcome to the 10-numbers-adder. Please, start entering the numbers!" << endl << endl;
	for (int count = 0; count < 10; count++)
	{
		cin >> num;
		sum += num;
		cout << "You have to enter " << 9-count << " more numbers!" << endl;

	}

	cout << "You're all done!\nThe sum is: " << sum << endl;
}

void Ex5::sol()
{
	int smallestSoFar; bool defined = false;  int num;
	cout << "Welcome to the least-number-determinor. Please, start entering the numbers!" << endl << endl;
	for (int count = 0; count < 10; count++)
	{
		cin >> num;
		if (!defined)
		{
			defined = !defined;
			smallestSoFar = num;
		}
		else
		{
			if (smallestSoFar > num)
				smallestSoFar = num;
		}
		cout << "You have to enter " << 9 - count << " more numbers!" << endl;

	}

	cout << "You're all done!\nThe smallest number is: " << smallestSoFar << endl << endl;
}

void Ex6::sol()
{
	int num; int cubeSum = 0;
	cout << "Welcome to the cubratoar. Please insert a number >= 5: ";
	cin >> num;
	for (int i = 5; i <= num; i++)
	{
		cubeSum += i*i*i;
	}
	cout << endl << "The result is: " << cubeSum << endl << endl;
}

void Ex7::sol()
{
	int val;  int uNum = 3; //u(0) = 3
	cout << "Please enter a positive a number so that its u(num) value can be calculated!" << endl << endl;
	cin >> val;
	if (val <= 0)
	{
		cout << endl << "Improper value entered! exiting..." << endl << endl;
		exit(-1);
	}
	for (int i = 1; i <= val; i++)
	{
		uNum = 3 * uNum + 4;
	}
	cout << endl << "u(" << val << ") = " << uNum << endl << endl;
}

void Ex8::sol()
{
	int val; long prevNum = 1; long prevPrevNum = 1; long uNum = 1; //u(0) = 3
	cout << "Please enter a positive a number so that its u(num) value can be calculated!" << endl << endl;
	cin >> val;
	if (val <= 1)
	{
		if (val == 1 && val == 0)
		{
			uNum = 1;
			cout << endl << "fib(" << val << ") = " << uNum << endl << endl;
			return;
		}
		else
		{
			cout << endl << "Improper value entered! exiting..." << endl << endl;
			exit(-1);
		}
	}
	for (int i = 2; i <= val; i++)
	{
		//cout << "kpa";
		uNum = prevNum + prevPrevNum; //fib[i] = fib[i-1] + fib[i-2]
		prevPrevNum = prevNum;		//preparing for
		prevNum = uNum;			//next iteration
	}
	cout << endl << "fib(" << val << ") = " << uNum << endl << endl;
}

void Ex9::sol()
{
	int num;
	while (true)
	{
		cout << "Enter a number between 0 and 20: ";
		cin >> num;
		if (num >= 0 && num <= 20)
			break;
		else
			continue;
	}
	cout << "N+17 = " << (num + 17) << endl;
}

void Ex10::sol()
{
	int num;
	cout << "Please enter an integer: ";
	cin >> num;
	while (true)
	{
		int choice;
		cout << "1. Add 1" << endl << "2. Multiply by 2" << endl << "3. Subtract 4" << endl;
		cout << "4. Quit" << endl << endl << "Please choose one of the options above!" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			num += 1;
			cout << "The new value is: " << num << endl;
			break;
		case 2:
			num *= 2;
			cout << "The new value is: " << num << endl;
			break;
		case 3:
			num += -4;
			cout << "The new value is: " << num << endl;
			break;
		case 4:
			cout << endl << "Understood. Termating..." << endl << endl;
			exit(-1);
			break;
		default:
			cout << "You have entered an invalid option. Please try again!" << endl << endl;
			break;
		}

	}
}

void Ex11::sol()
{
	int count = 0; double sum = 0; int num;
	cout << "Hello. This program calculates the average of all POSITIVE values" << endl
		<< "entered by the user. Just keep typing in numbers, and when you wish" << endl
		<< "to see the final average, just enter 0." << endl << endl;
	while (true)
	{
		
		cout << "Please enter a positive value: ";
		cin >> num;
		if (num < 0)
		{
			continue;
		}
		else
		{
			if (num == 0)
			{
				if (count == 0)
				{
					cout << "NO AVERAGE.";
					return;
				}
				else
				{
					cout << endl << "The average is: " << (sum / count) << endl << endl;
					return;
				}
			}
			else
			{
				count++;
				sum += num;
			}
		}


	}
}

void Ex12::sol()
{
	int num;
	cout << "Please enter a number so that u(num) can be calculated!" << endl << endl;
	cin >> num;
	cout << endl << endl << "u(" << num << ") = " << solHelper(num) << endl << endl;
}

int Ex12::solHelper(int num)
{
	if (num == 0)
		return 3;
	
	if (num == 1)
		return 2;

	return num*solHelper(num - 1) + (num + 1)*solHelper(num - 2) + num;
}

void Ex13::sol()
{
	int biggestSoFar, count, num;
	cout << "Enter 10 numbers in sequence:" << endl << endl;
	cin >> num;
	biggestSoFar = num;
	for (int i = 1; i < 10; i++)
	{
		cin >> num;
		if (num > biggestSoFar)
		{
			biggestSoFar = num;
			count = 1;
		}
		else
		{
			if (biggestSoFar == num)
			{
				count++;
			}
		}
	}
	cout << endl << endl;
	cout << "the biggest number (" << biggestSoFar << ") occurred " << count << " time(s)";
	cout << endl << endl;

}

void Ex14::sol()
{
	int num;
	cout << "Please enter a number N: ";
	cin  >> num;
	cout << "N!= " << solHelper(num) << endl << endl;
}
long Ex14::solHelper(int num)
{
	if (num < 0)
		return -1;

	if (num == 0 || num == 1)
		return 1;

	return num*solHelper(num - 1);
}

void Ex15::sol()
{
	int num;
	cout << "Please enter a number N: ";
	cin >> num;
	if (num % 2 == 0)
	{
		cout << endl << endl << num << " is NOT a prime number!" << endl << endl;
		return;
	}
	for (int test = (num / 2) + 1; test > 1; test--)
	{
		if (num % test == 0)
		{
			cout << endl << endl << num << " is NOT a prime number!" << endl << endl;
			return;
		}
	}

	cout << endl << endl << num << " IS a prime number!" << endl << endl;
}

void Ex16::sol()
{
	int num, count;
	count = 0;
	cout << "Please enter a number N: ";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		if (isPrime(i))
		{
			count++;
		}
	}
	cout << endl << endl << "There are " << count << " prime numbers <= " << num << endl << endl;
}

int Ex16::isPrime(int num)
{
	if (num<=1 || num % 2 == 0)
	{
		return false;
	}
	for (int test = (num / 2) + 1; test > 1; test--)
	{
		if (num % test == 0)
		{
			return false;
		}
	}

	return true;
}

void Ex17::sol()
{
	int num; int count = 0; int test = 3;
	cout << "Please enter a number N: ";
	cin >> num;
	while (count < num)
	{
		if (Ex16::isPrime(test))
		{
			count++;
		}

		test += 2;

	}
	test -= 2;
	cout << endl << endl << "The " << count << "-st prime number is: " << test << endl << endl;
}

void Ex18::sol()
{
	int num;
	cout << "Please enter a number N: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (j < i)
			{
			//	cout << ' ';
			}
			else
			{
				cout << '*';
			}
		}
		cout << endl;
	}
	cout << endl << endl;
}

void Ex19::sol()
{
	int num;
	cout << "Please enter a number N: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (j < i)
			{
				cout << ' ';
			}
			else
			{
				cout << '*';
			}
		}
		cout << endl;
	}
	cout << endl << endl;
}

void Ex20::sola()
{
	int num; int count = 0;
	cout << "Please enter a number: ";
	cin >> num;
	cout << endl;
	while (num != 1)
	{
		if (num % 2 == 0)
		{
			count++;
			num /= 2;
			cout << "u(" << count << ")= " << num << endl;
		}
		else
		{
			count++;
			num = 3 * num + 1;
			cout << "u(" << count << ")= " << num << endl;
		}
	}
	cout << endl << endl;
}

void Ex20::solb()
{

}

void Ex21::sol()
{
	int num;
	while (true)
	{
		cout << "Enter a number: ";
		cin >> num;
		if (num == -999)
			exit(0);
		cout << endl << num << "'s triple is: " << num * 3;
		cout << endl << endl;
	}
}

void Ex22::sol()
{
	int num; int count = 0;
	while (true)
	{
		cout << "Enter a positive number: ";
		cin >> num;
		cout << endl;
		if (num <= 0)
		{
			cout << endl << "You entered " << count << " positive numbers!" << endl << endl;
			return;
		}
		count++;
	}
}

void Ex23::sol()
{
	int num; int count = 0; double sum = 0;
	while (true)
	{
		cout << "Enter a positive number: ";
		cin >> num;
		cout << endl;
		if (num <= 0)
		{
			if (count == 0)
				cout << endl << "No numbers entered. No average!" << endl << endl;
			else
				cout << endl << "The average is: " << sum/count << endl << endl;
			return;
		}
		else
		{
			sum += num;
			count++;
		}
	}
}

void Ex24::sol()
{
	int num; int count = 0;
	while (true)
	{
		cout << "Enter a non-zero number: ";
		cin >> num;
		cout << endl;
		if (num == 0)
		{
			cout << endl << "You have entered " << count << " number(s) between 100 and 200" <<
				endl << endl;
			return;
		}
		else
		{
			if (num>=100 && num<=200)
				count++;
		}
	}
}

void Ex25::sol()
{
	int citizensA = 50000000;
	int citizensB = 70000000;
	double growthPercentA = 0.03;
	double growthPercentB = 0.02;
	int numYrs;
	for (numYrs = 0; citizensA <= citizensB; numYrs++)
	{
		#pragma warning(suppress: 4244)
		citizensA *= (growthPercentA + 1.00);
		#pragma warning(suppress: 4244)
		citizensB *= (growthPercentB + 1.00);
	}
	cout << "City A will surpass city B in " << numYrs << " years." << endl << endl;

}

void Ex26::sol()
{
	string s[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a string: ";
		getline(cin, s[i]);
	}
	char c;
	cout << "Enter the character you wish to check for: ";
	cin >> c;
	int count = 0; int max = 0;
	cout << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		for (unsigned int j = 0; j < s[i].length(); j++)
		{
			if (s[i].at(j) == c)
			{
				count++;
			}
		}
		if (count > max)
		{
			max = count;
		}
		count = 0;
	}
	cout << "The character '" << c << "' occurred a maximum of " << max << " times." << endl
		<< endl;
}

void Ex27::sol()
{
	int num; vector<int> divisors{};
	cout << "Please enter the number N: ";
	cin >> num;
	if (Ex16::isPrime(num))
		goto PRIME;
	else
		goto NOT_PRIME;
PRIME:
	cout << num << " is a prime number, divisible only by 1 and itself." << endl << endl;
	return;

NOT_PRIME:
	for (int i = 1; i <= num; i++)
	{
		if (num%i == 0)
		{
			divisors.push_back(i);
		}
	}
	cout << "Your number is NOT prime, and is divisible by the following:" << endl;
	while (!divisors.empty())
	{
		cout << divisors.at(divisors.size()-1) << endl;
		divisors.pop_back();
	}
	cout << endl << endl;

}

void Ex28::sol()
{
	std::string s;
	getline(std::cin, s);
	char c; int count = 0;
	std::cin >> c;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
			count++;
	}
	cout << endl << endl;
	cout << "The character '" << c << "' occurred " << count << " times.";
	cout << endl << endl;

}

void Ex29::sol()
{
	int even = 0; int odd = 0;
	vector<int> vi = {10, 20, 30, 40, 1293, 1230 ,231, 323};
	vi.push_back(50);
	for (unsigned int i = 0; i < vi.size(); i++)
	{
		if (vi[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++ ;
		}
	}
	cout << "The Data Series has " << even << " even numbers, and " << odd << 
		" odd numbers." << endl << endl;
}

void Ex30::sol()
{
	int pos(0); int neg(0); int zero(0);
	vector <int> vi = { 231, -23, 0, 0, -221, 230, 031, -23, -2, 500, 0 };
	for (unsigned int i = 0; i < vi.size(); i++)
	{
		if (vi[i] > 0)
		{
			pos++;
		}
		else
		{
			if (vi[i] < 0)
			{
				neg++;
			}
			else
			{
				zero++;
			}
		}
	}
	cout << "The Data Series has:" << endl
		<< pos << " positive numbers," << endl
		<< neg << " negative numbers," << endl
		<< zero << " zeroes." << endl
		<< endl;
}

void Ex31::sol()
{
	int count(0);
	vector <int> vi = { 12,312,312,312,312,3125,234,124 , 123, 123 };
	for (unsigned int i = 0; i < vi.size(); i++)
	{
		if (vi[i] % 3 == 0)
			count++;
	}
	cout << "The amount of numbers in the Data Series divisible by 3 is: " << count
		<< endl << endl;
}