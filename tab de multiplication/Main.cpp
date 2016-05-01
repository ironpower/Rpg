#include <iostream>


int main()
{
	const int maxTab = 10;

	for (size_t j = 0; j <= maxTab; j++)
	{
		for (int i = 0; i <= maxTab; i++)
		{
			std::cout << i*j << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}