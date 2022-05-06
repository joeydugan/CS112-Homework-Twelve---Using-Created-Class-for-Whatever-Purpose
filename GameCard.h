/*----
  header file for class: GameCard

  by: Joey Dugan
  last modified: 4/30/22 - Added health variable
                 4/26/22 - Added capability for overridden methods to_string and display
                 4/13/22 - Added Overloaded == operator
                 2/25/22 - created header file
----*/

#ifndef GAMECARD_H    
#define GAMECARD_H
#include <string>
using namespace std;

class GameCard
{
    public:

    //constructors

    GameCard();
    GameCard(string init_name, string init_ability, int init_power, int init_summoningCost);

    //accessors

    string get_name() const;
    string get_ability() const;
    int get_power() const;
    int get_summoningCost() const;
    int get_health() const;

    //mutators

    void set_name(string new_name);
    void set_ability(string new_ability);
    void set_power(int new_power);
    void set_summoningCost(int new_summoningCost);
    void set_health(int new_health);

    //overloaded == operator

    bool operator==(const GameCard& rhs);


    //other methods:

    /* signature: void -> void
       purpose: expects nothing and returns nothing while having the
                side effect of printing the data fields of the class
    */
    virtual void display() const;

    /* signature: void -> string
       purpose: expects nothing and returns a string version of the 
                data fields of the class
    */
    virtual string to_string() const;

    /* signature: void -> string
       purpose: computes the rank of a card class based off the power it supplies

       tests:
       for GameCard() john;
       john.compute_rank() == "alright"

       for GameCard() powerful_john("JOHNNY", "BOY", 100, 100);
       powerful_john.compute_rank() == "great"
    */

    


    private:
    string name;
    string ability;
    int power;
    int summoningCost;
    int health;
    



};

#endif