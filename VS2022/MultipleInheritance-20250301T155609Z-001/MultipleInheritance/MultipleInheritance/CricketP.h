#pragma once
#include "Player.h"
class CricketP :public Player{
public:
	CricketP(int pid, string name);
	void play();
	void noOfRuns();
	void bowling();

};