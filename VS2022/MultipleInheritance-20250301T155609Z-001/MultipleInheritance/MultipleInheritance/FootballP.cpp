#include "FootballP.h"
FootballP::FootballP(int pid, string name) :Player(pid, name) {

}
void FootballP::play() {
	cout << "\nPlayer is playing Football..";
}
void FootballP::noOfGoals() {
	cout << "\nGoals = 15";
}
void FootballP::makeGoal() {
	cout << "\nGoal Made";
}