#include<iostream>
#include<cstdlib>
#include<Windows.h>
using namespace std;
//Guessing Game Using C++
int main()
{
	//There were 2 ways to use random 
	//First one was rand()%100 ->To make highest value but what if the Customer Enter -ive value than
	//For that Reason I have used Min value and Max Value
	int Min = 0;
	int Max = 100;
	int count = 1;
	int inp = 0;
	cout << "----Generating Random Number----" << endl;
	cout << "Random Number will be between 0 - 100" << endl;
    //To Generate Different Random Number everytime Program Compiles
	//This will Allow the Random Function to Give different results in range of 0-100
	srand(time(0));
	//Limiting Maximum Random Number to 100 and Lowest to 0 
	int rm = (rand() % (Max - Min + 1)) - Min;
	//Not Compulsory but using sleep function for before guessing Random number
	Sleep(3000);
	cout << "----Random Number Generated----" << endl;
	cout << endl;
	for (int i = 0; inp != rm;i++)
	{
		cout << "Enter Number = ";
		cin >> inp;
		cout << endl;
		//Applying condition If ELSE IF logic
		if (rm > inp)
		{
			cout << "Guess Higher Number" << endl;
			cout << endl;

			count++;
		}
		else if (rm < inp)
		{
			cout << "Guess Lower Number" << endl;
			cout << endl;
			count++;
		}
		else
		{
			cout << "--------Congratulations you have guessed the Number = " <<rm<<"--------" << endl;
			cout << "---------Total number of tries = " << count <<"----------" << endl;
		}
	}
}