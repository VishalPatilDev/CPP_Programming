#include "Player.h"
#include "CricketP.h"
CricketP::CricketP(int pid, string name) :Player(pid, name) {
	
}
void CricketP::play() {
	cout << "\nCricket Player is playing ..";
}
void CricketP::noOfRuns() {
	cout << "\nTotal runs : " << 500;
}
void CricketP::bowling() {
	cout << "\nBowling";
}