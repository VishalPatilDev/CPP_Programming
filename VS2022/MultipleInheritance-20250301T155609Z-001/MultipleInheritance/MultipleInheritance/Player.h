#pragma once
#include <iostream>
using namespace std;
class Player {
private:
	int pid;
	string name;
public:
	Player(int pid, string name);
	virtual void play()=0;


};