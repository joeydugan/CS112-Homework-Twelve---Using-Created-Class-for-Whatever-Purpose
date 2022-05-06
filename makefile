

card-battle: card-battle.o gamecard-functs.o GameCard.o rand_int.o
	g++ card-battle.o gamecard-functs.o GameCard.o rand_int.o -o card-battle

card-battle.o: card-battle.cpp GameCard.h gamecard-functs.h
	g++ -c card-battle.cpp

GameCard.o: GameCard.cpp
	g++ -c GameCard.cpp

gamecard-functs.o: gamecard-functs.cpp GameCard.h rand_int.h
	g++ -c gamecard-functs.cpp

rand_int.o: rand_int.cpp
	g++ -c rand_int.cpp

clean:
	rm *.o