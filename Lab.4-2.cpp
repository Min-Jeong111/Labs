#include <iostream>

// Ex.5
struct FruitCounts
{
	int apples;
	int pears;
	int oranges;
};

int main()
{
	int apples;
	int pears;
	int oranges;
	
	FruitCounts fruitCounts;

	std::cout << "Apples:";
	std::cin >> fruitCounts.apples;

	std::cout << "Pears:";
	std::cin >> fruitCounts.pears;

	std::cout << "Oranges:";
	std::cin >> fruitCounts.oranges;
	
	// Ex.1
	if(apples > 5 && pears < 8 && oranges * 2 > apples)
	{
		std::cout << "Hello" << std::endl;
	}

	// Ex.2
	bool result = apples > 5 && pears < 8 && oranges * 2 > apples; // Поменял с int на bool
	if(result)
	{
		std::cout << "Hello" << std::endl;
	}

	// Ex.3
	bool checkApples = apples > 5;
	bool checkPears = pears < 8;
	bool checkOranges = oranges * 2 > apples;
	bool checkResult = checkApples && checkPears && checkOranges;

	if(checkResult)
    	{
		std::cout << "Hello" << std::endl;
    	}

    	// Ex.4
    	bool result1; // Объявил вне блока булевую переменную, которую я инициализирую ниже со всеми условиями
    	{
		result1 = checkApples && checkPears && checkOranges;

		bool checkApples = apples > 5;
    		bool checkPears = pears < 8;
	    	bool checkOranges = oranges * 2 > apples;

		if(result1)
    		{
	    		std::cout << "Hello" << std::endl;
    		}
    	}
	
	{
	  bool checkApples = fruitCounts.apples > 5;
    	  bool checkPears = fruitCounts.pears < 8;
    	  bool checkOranges = fruitCounts.oranges * 2 > fruitCounts.apples;
	  if(checkApples && checkPears && checkOranges)
    	  {
		std::cout << "Hello" << std::endl;
    	  }
	}
	// Насчёт отступов, у меня, вроде бы, тут где я написал код, есть отступы и всё выглядит как должно. Во всех блоках есть отступы.
	return 0;
}