#ifndef CARD_H
#define CARD_H

#include <string>

const int SUIT_MAX(4);
const int RANK_MAX(13);

class Card
{
	friend class Deck;			//Card与Deck为友元类
public:
	Card(const int &suit, const int &rank);

	std::string Card2Str() const;

private:
	int get_suit() const;
	int get_rank() const;
	int m_suit;
	int m_rank;
};
#endif
