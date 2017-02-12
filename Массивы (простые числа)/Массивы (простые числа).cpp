// Массивы (простые числа).cpp: определяет точку входа для консольного приложения.
//

#include "iostream"
using namespace std;

int main()
{
	const int N = 15;

	bool SimpleNumbers[N + 1]; // От нуля до 15
	for (int i = 2; i < N + 1; ++i)
		SimpleNumbers[i] = true;

	for (int i = 2; i * i < N; ++i)
	{
		if (SimpleNumbers[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				SimpleNumbers[j] = false;
			}
		}
	}

	for (int i = 2; i < N + 1; ++i)
	{
		if (SimpleNumbers[i])
			cout << i << endl;
	}
    return 0;
}

