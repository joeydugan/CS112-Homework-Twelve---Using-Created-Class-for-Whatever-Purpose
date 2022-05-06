/*----
  purpose: creating a variety of functions for GameCard

  by: Joey Dugan
  last modified: 5/6/22
----*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "GameCard.h"
#include "gamecard-functs.h"
#include "rand_int.h"
using namespace std;

/*
signature: card_battle: GameCard& GameCard& -> string
purpose: having two gamecards fight each other in an amazing match of power

tests:

    using  GameCard george("George Washington", "the power of the one dollar bill", 4, 1)
           GameCard james("James Charles", "Makeup", 1, 0)
           GameCard john("Crazy Guy John", "Real Estate", 12, 5)

    then in a battle of power:

        card_battle(george, james)
        winner == card1

        card_battle(james, john)
        winner == card2

        card_battle(george, john)
        winner == card2

    in a battle of summoning cost:

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

    int battle_type = rand_int(1,2);

    switch (battle_type)
    {

        case(1):

            cout << "Battle of Power\n";

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

            battle_type = rand_int(1,2);

            break;


        case(2):

            cout << "Battle of Cost\n";

            if (card1.get_summoningCost() > card2.get_summoningCost())
            {
                return "card1";
            }

            else if (card2.get_summoningCost() > card1.get_summoningCost())
            {
                return "card2";
            }

            else
            {
                return "both";
            }

            battle_type = rand_int(1,2);

            break;

        default:

            return "both";

            battle_type = rand_int(1,2);

            break;

    }
}
