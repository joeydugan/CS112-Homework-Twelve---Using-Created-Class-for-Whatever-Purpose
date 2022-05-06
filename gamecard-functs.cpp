/*----
  purpose: creating a variety of functions for GameCard

  by: Joey Dugan
  last modified: 4/30/22
----*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "GameCard.h"   
#include "gamecard-functs.h"
using namespace std;

/*
signature: card_battle: GameCard& GameCard& -> string
purpose: having two gamecards fight each other in an amazing match of power

tests:

    using  GameCard george("George Washington", "the power of the one dollar bill", 4, 1)
           GameCard james("James Charles", "Makeup", 1, 0)
           GameCard john("Crazy Guy John", "Real Estate", 12, 5)

    then did 

    card_battle(george, james)
    winner == card1

    card_battle(james, john)
    winner == card2

    card_battle(george, john)
    winner == card2

by: Joey Dugan
*/


string card_battle(GameCard card1, GameCard card2)
{
    if (card1.get_power() > card2.get_power())
    {
        return "card1";
    }

    else if (card2.get_power() > card1.get_power())
    {
        return "card2";
    }

    else
    {
        return "both";
    }
}
