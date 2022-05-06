/*----
  signature: main: void -> int
  purpose:

  by: Joey Dugan
  last modified: 4/30/22
----*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "GameCard.h"
#include "gamecard-functs.h"
using namespace std;

int main()
{
    cout << boolalpha;

    // initializing both cardpiles

    vector<GameCard> pile1;
    vector<GameCard> pile2;

    // adding cards to them

    pile1.push_back(GameCard("Sally", "Sleeping", 3, 10));
    pile1.push_back(GameCard("James Charles", "Makeup", 1, 0));
    pile1.push_back(GameCard("Crazy Guy John", "Real Estate", 12, 5));

    pile2.push_back(GameCard("George Washington", "the power of the one dollar bill", 4, 1));
    pile2.push_back(GameCard("Kimchi", "being in the background of videos", 1, 8));
    pile2.push_back(GameCard("Hydro Flask", "Hydration", 4, 9));

    int pile1_pos = 0;
    int pile2_pos = 0;

    string pause;

    // the loop uses the card_battle function written in gamecard-functs

    string winner = card_battle(pile1[pile1_pos], pile2[pile2_pos]);

    while (pile1.size() != 0 && pile2.size() != 0)
    {

        if(winner == "card1")
        {
            cout << pile1[pile1_pos].get_name() << " has won the battle against " << pile2[pile2_pos].get_name() << endl;

            cout << "Press enter to continue: ";
            getline(cin, pause);
            cout << endl;

            // was having issues with using pop_front, but used erase vector method along with first item as a workaround

            pile2.erase(pile2.begin());

            if (pile1.size() != 0 && pile2.size() != 0)
                winner = card_battle(pile1[pile1_pos], pile2[pile2_pos]);

        }

        else if(winner == "card2")
        {
            cout << pile2[pile2_pos].get_name() << " has won the battle against " << pile1[pile1_pos].get_name() << endl;

            cout << "Press enter to continue: ";
            getline(cin, pause);
            cout << endl;

            pile1.erase(pile1.begin());

            if (pile1.size() != 0 && pile2.size() != 0)
                winner = card_battle(pile1[pile1_pos], pile2[pile2_pos]);
        }

        else if(winner == "both")
        {
            cout << pile1[pile1_pos].get_name() << " and " << pile2[pile2_pos].get_name() << " have tied\n";

            cout << "Press enter to continue: ";
            getline(cin, pause);
            cout << endl;

            pile1.erase(pile1.begin());
            pile2.erase(pile2.begin());

            if (pile1.size() != 0 && pile2.size() != 0)
                winner = card_battle(pile1[pile1_pos], pile2[pile2_pos]);
        }

    }

    // declaring a winner by measuring pile size

    if(pile1.size() == 0)
    {
        cout << "\nPlayer 2 has achieved victory!\n\n";
    }

    else if(pile2.size() == 0)
    {
        cout << "\nPlayer 1 has achieved victory!\n\n";
    }

    else
    {
        cout << "\nNobody Won Today!\n\n";
    }

    return EXIT_SUCCESS;
}