#include <iostream>

using namespace std;



int MiniRefills(int x[], int n, int L)
{
	// n is actually point A and n + 1 means point B , L is actually tge distance that the car can travel

	int num_Refills = 0;
	int Current_Refills = 0;

	while (Current_Refills <= n)
	{
		int last_Refill = Current_Refills;

		while (Current_Refills <= n && x[Current_Refills + 1] - x[last_Refill] <= L )
		{
			Current_Refills++;
		}

		if (Current_Refills == last_Refill)
		{
			return -1;
		}

		if (Current_Refills <= n)
		{
			num_Refills++;
		}

		return num_Refills;
	}

}



int main() {
	
	int Car[9];
	int Point = 2;
	int L = 400;

	cout << MiniRefills(Car , Point , L);

	system("PAUSE");
	return 0; 
	
}
