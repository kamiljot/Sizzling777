#pragma once
#include "machine.h"
class player
{
private:
	long long int credits;
	machine * mchn;
public:
	player() {
		mchn = new machine();
	}

	void add_credits(long long int credits_) {
		credits += credits_;
	}

};

