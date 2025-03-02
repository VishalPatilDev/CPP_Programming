#pragma once
#include "Player.h"
class FootballP :public Player {
public:
	FootballP(int pid, string name);
	void play();
	void noOfGoals();
	void makeGoal();

};