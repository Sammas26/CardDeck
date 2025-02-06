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

string Card::toSuitStr(CardSuit s) {
	string ans;

	switch (s) {
		case CS_CLUB:
			ans = "Club";
			break;
		case CS_DIAMOND:
			ans = "Diamond";
			break;
		case CS_HEART:
			ans = "Heart";
			break;
		case CS_SPADE:
			ans = "Spade";
			break;

	}

	return ans;

}

string Card::toRankStr(CardRank r) {
	string ans;

	switch (r) {
		case CR_ACE:
			ans = "Ace";
			break;
		case CR_KING:
			ans = "King";
			break;
		case CR_QUEEN:
			ans = "Queen";
			break;
		case CR_JACK:
			ans = "Jack";
			break;
		case CR_TEN:
			ans = "Ten";
			break;
		case CR_NINE:
			ans = "Nine";
			break;
		case CR_EIGHT:
			ans = "Eight";
			break;
		case CR_SEVEN:
			ans = "Seven";
			break;
		case CR_SIX:
			ans = "Six";
			break;
		case CR_FIVE:
			ans = "Five";
			break;
		case CR_FOUR:
			ans = "Four";
			break;
		case CR_THREE:
			ans = "Three";
			break;
		case CR_TWO:
			ans = "Two";
			break;

	}

	return ans;

}



int main()
{
	
}
