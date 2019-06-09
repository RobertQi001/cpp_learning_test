#include <iostream>
#include "deck.h"


Deck::Deck()
{
	for (int i(0); i < SUIT_MAX; ++i)
	{
		for (int j(0); j < RANK_MAX; ++j)
		{
			Card card(i,j);
			m_deck.push_back(card);
		}
	}
	/*for(unsigned int i(0);i<52;i++)
	{
		Card card;
		m_deck.push_back(card);
	}*/
}


void Deck::print_Deck() const
{
	int count(1);

	for (int i(0); i < m_deck.size(); ++i)
	{
		cout << m_deck[i].Card2Str() << " ";
		if (count == m_deck.size())
		{
			cout << endl;
			count = 0;
		}
		++count;
	}
}

void Deck::shuffle()
{

	for (int i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		swap(m_deck[i], m_deck[j]);
	}
}

void Deck::getOneCard()
{
	Card cd(m_deck.back().get_suit(), m_deck.back().get_rank());
	m_deck.pop_back();
	cout << cd.Card2Str()<<"       ";
}