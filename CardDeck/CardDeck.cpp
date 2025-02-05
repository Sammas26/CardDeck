#include <iostream>
#include <string>

using namespace std;

enum CardSuit {CS_CLUB, CS_DIAMOND, CS_HEART, CS_SPADE};

enum CardRank {CR_ACE, CR_TWO, CR_THREE, CR_FOUR, CR_FIVE, CR_SIX, CR_SEVEN, CR_EIGHT, CR_NINE, CR_TEN, CR_JACK, CR_QUEEN, CR_KING};


class Card {
public:
	Card(CardSuit s = CS_CLUB, CardRank r = CR_ACE);
	string getStr() const;

private:
	static string toSuitStr(CardSuit s);
	static string toRankStr(CardRank r);
};

Card::Card(CardSuit s, CardRank r) {
	suit = s; rank = r;
}

string Card::getStr() const {
	return toRankStr(rank) + " of " + toSuitStr(suit);
}



int main()
{
	
}
