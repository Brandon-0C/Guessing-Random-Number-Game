#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	int guess;
	int ranNum = rand() % 100 + 1;
	int tries = 0;
	do
	{
		std::cout << "**********GUESSING GAME**********\n";
		std::cout << "You have to guess the number from 1 to 100:\n ";
		std::cin >> guess;
		tries++;

		if (guess > ranNum)
		{
			std::cout << "TOO HIGH!\n";
		}
		else if (guess < ranNum)
		{
			std::cout << "TOO LOW!\n";

		}
		else
		{
			std::cout << "CORRECT!\n";
			std::cout << "# of tries: " << tries << "\n";
		}

	} while (guess != ranNum);
	
	
	std::cout << "*********************************\n";

}