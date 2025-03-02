#pragma once
#include "Player.h"
#include "CricketP.h"
#include "FootballP.h"
class Print {
public:
	static void display(Player& p ) {
		p.play();


		/*if (typeid(*p) == typeid(CricketP) ){
			CricketP* cp=dynamic_cast<CricketP*>(p);
			cp->noOfRuns();
			cp->bowling();

		}
		if (typeid(*p) == typeid(FootballP)) {
			FootballP* cp = dynamic_cast<FootballP*>(p);
			cp->noOfGoals();
			cp->makeGoal();

		}*/

		if (typeid(p) == typeid(CricketP)) {
			CricketP& cp = dynamic_cast<CricketP&>(p);
			cp.noOfRuns();
			cp.bowling();

		}
		if (typeid(p) == typeid(FootballP)) {
			FootballP& cp = dynamic_cast<FootballP&>(p);
			cp.noOfGoals();
			cp.makeGoal();

		}

	}
};