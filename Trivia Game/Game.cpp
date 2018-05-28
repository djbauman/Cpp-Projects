#include "Game.hpp"


Game::Game()
{
	Player player;
	Player* playerPtr = &player;

	Start start(playerPtr);
	Hall1 hall1(playerPtr);
	History history(playerPtr);
	Geography geography(playerPtr);
	Hall2 hall2(playerPtr);
	Math math(playerPtr);
	Physics physics(playerPtr);
	Hall3 hall3(playerPtr);
	Biology biology(playerPtr);
	Chemistry chemistry(playerPtr);
	Hall4 hall4(playerPtr);
	Mythology mythology(playerPtr);
	Art art(playerPtr);
	End end(playerPtr);
	GameOver gameOver(playerPtr);

	start.setForward(&hall1);
	
	hall1.setForward(&hall2);
	hall1.setBack(&start);
	hall1.setLeft(&geography);
	hall1.setRight(&history);
	hall1.setGameOver(&gameOver);

	history.setLeft(&hall1);
	history.setGameOver(&gameOver);
	geography.setRight(&hall1);
	geography.setGameOver(&gameOver);

	hall2.setForward(&hall3);
	hall2.setBack(&hall1);
	hall2.setLeft(&math);
	hall2.setRight(&physics);
	hall2.setGameOver(&gameOver);

	math.setRight(&hall2);
	physics.setLeft(&hall2);

	math.setGameOver(&gameOver);
	physics.setGameOver(&gameOver);

	hall3.setForward(&hall4);
	hall3.setBack(&hall2);
	hall3.setRight(&chemistry);
	hall3.setLeft(&biology);
	hall3.setGameOver(&gameOver);

	biology.setRight(&hall3);
	chemistry.setLeft(&hall3);

	biology.setGameOver(&gameOver);
	chemistry.setGameOver(&gameOver);

	hall4.setForward(&end);
	hall4.setBack(&hall3);
	hall4.setLeft(&art);
	hall4.setRight(&mythology);
	hall4.setGameOver(&gameOver);

	art.setRight(&hall4);
	mythology.setLeft(&hall4);

	art.setGameOver(&gameOver);
	mythology.setGameOver(&gameOver);

	end.setBack(&hall4);
	end.setGameOver(&gameOver);

	std::cout << "Welcome. You must answer the upcoming questions correctly in order to escape this place." << std::endl;
	std::cout << "But if you answer incorrectly too many times, or wander for too long, you will be banished." << std::endl << std::endl;
	start.play();
}


