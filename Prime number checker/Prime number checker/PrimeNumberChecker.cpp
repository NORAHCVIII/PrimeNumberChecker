#include <iostream>


bool IsPrime(int number) {
	if (number <= 1)
	{
		return 0;
	}
	for (int i = 2; i * i <= number; i++){
		if (number % i == 0){
			return 0;
		}
	}
	return 1;
}

int main() {
	using namespace std;

	bool ExitLoop = true;
	int number;
	cout << "FOR BIG NUMBERS NEED MORE TIME\n(-1 to exit the loop)" << endl;

	while (ExitLoop){

		cout << "Put a number\n>:";
		cin >> number;
		
		if (IsPrime(number)){
			cout << number << " - Is a prime number." << endl;
		}
		else
		{
			cout << number << " - Is not a prime number." << endl;
		}

		if (number == -1)
		{
			ExitLoop = false;
			cout << "\nBye" << endl;
		}
	}
	system("pause");
}