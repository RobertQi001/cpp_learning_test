#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>

#include "card.h"
#include "deck.h"
using namespace std;

int main()
{
	srand(time(NULL));

	Deck _deck;
	_deck.shuffle();
	_deck.print_Deck();
	//_deck.getOneCard();

	//std::cout << std::endl;
	//_deck.print_Deck();
	//_deck.getOneCard();

	//std::cout << std::endl;
	//_deck.print_Deck();
	int playernumber;
	cout << "Please enter the playernumber:";
	cin >> playernumber;
	for (int j = 0; j < 52/playernumber; j++)
	{
		for (int i = 0; i < playernumber; i++)
		{
			_deck.getOneCard();
		}
		cout << endl;
	}
	return 0;
}