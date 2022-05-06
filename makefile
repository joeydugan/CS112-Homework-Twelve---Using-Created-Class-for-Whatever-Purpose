

card-battle: card-battle.o gamecard-functs.o GameCard.o
	g++ card-battle.o gamecard-functs.o GameCard.o -o card-battle

card-battle.o: card-battle.cpp GameCard.h gamecard-functs.h
	g++ -c card-battle.cpp

GameCard.o: GameCard.cpp
	g++ -c GameCard.cpp

gamecard-functs.o: gamecard-functs.cpp GameCard.h
	g++ -c gamecard-functs.cpp

clean:
	rm *.o