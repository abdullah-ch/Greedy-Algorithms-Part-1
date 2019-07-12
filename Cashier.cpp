#include <iostream>

using namespace std;



int Cashier(long long money)
{
	int counter = 0;
	while (money > 0)
	{
		if (money >= 10)
			money = money - 10;
		else if (money >= 5)
		{
			money = money - 5;
		}

		else
		{
			money = money - 1;
		}


		counter++;


	}


	return counter;
}



int main() {
	long long money = 0;

	cin >> money;
	
	cout << Cashier(money);

	system("PAUSE");
	return 0; 
	
}
