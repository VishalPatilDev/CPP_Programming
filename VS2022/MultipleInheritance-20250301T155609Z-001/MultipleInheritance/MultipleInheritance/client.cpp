#include "Player.h"
#include "CricketP.h"
#include "FootballP.h"
#include "Print.h"
int main() {
	cout << "\nCricket---------";
	CricketP c1(101, "Virat");
	Print::display(c1);

	cout << "\nFootball---------";
	FootballP f1(102, "Ronaldo");
	Print::display(f1);

}