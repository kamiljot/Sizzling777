#pragma once
#include <vector>
#include "reel.h"
class machine
{
private:
	reel* reels;
	std::vector <int> rand_reels_pos;
	char drawn_symbols[5][3];


public: 
	machine() {
		reels = new reel[5];
		for (int i = 0; i < 5; i++) {
			reels[i].fill_the_reel();
		}
		rand_reels_pos.reserve(5);
	};
	void print_reels() {
		for (int i = 0; i < 55; i++) {
			for (int j = 0; j < 5; j++) {
				reels[j].print_symbol(i);
			}
			std::cout << std::endl;
		}
	};
	void roll_the_reels() {
		for (int i = 0; i < 5; i++) {
			rand_reels_pos[i] = reels[i].roll_the_reel();
		}
	};
	void print_drawn_symbols() {
		roll_the_reels();
		for (int j = 0; j < 3; j++) {
			for (int i = 0; i < 5; i++) {

				std::cout << drawn_symbols[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
	}
	void set_drawn_symbols() {
		roll_the_reels();
			for (int j = 0; j < 5; j++) {
				if (rand_reels_pos[j] != 0) {
					drawn_symbols[j][0] = reels[j].get_symbol(rand_reels_pos[j] - 1);
				}
				else {
					drawn_symbols[j][0] = reels[j].get_symbol(55);
				}
			}
			for (int j = 0; j < 5; j++) {
				drawn_symbols[j][1] = reels[j].get_symbol(rand_reels_pos[j]);
			}
			for (int j = 0; j < 5; j++) {
				drawn_symbols[j][2] = reels[j].get_symbol(rand_reels_pos[j] % 55);
			}
		
	}

};
