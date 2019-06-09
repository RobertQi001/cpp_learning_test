#ifndef DECK_H
#define DECK_H

#include <vector>
#include <iostream>
#include <fstream>
#include "card.h"

using namespace std;

class Deck
{
public:
	explicit Deck();		//explicit�ر��Զ�����ת������
	void print_Deck() const;
	void getOneCard();
	void shuffle();
private:
	std::vector<Card> m_deck;

};

#endif