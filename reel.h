#pragma once
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "symbol.h"
#include "cherry.h"
#include "grape.h"
#include "lemon.h"
#include "orange.h"
#include "plum.h"
#include "seven.h"
#include "star.h"
#include "watermelon.h"
class reel
{
public:
	reel() {
		srand((unsigned)time(NULL));
		reel_.reserve(55);
	};

	void fill_the_reel() {
		vector_of_symbols.reserve(55);
		for (int i = 0; i < 10; i++) {
			vector_of_symbols.push_back(new cherry);
			vector_of_symbols.push_back(new lemon);
			vector_of_symbols.push_back(new orange);
			vector_of_symbols.push_back(new plum);
		}
		for (int i = 0; i < 4; i++) {
			vector_of_symbols.push_back(new grape);
			vector_of_symbols.push_back(new watermelon);
		}
		for (int i = 0; i < 5; i++) {
			vector_of_symbols.push_back(new star);
		}
		vector_of_symbols.push_back(new seven);
		vector_of_symbols.push_back(new seven);

		for (int i = 54; i > 0; i--) {
			int rnd = rand() % i;
			reel_.push_back(vector_of_symbols[rnd]);
			vector_of_symbols.erase(vector_of_symbols.begin() + rnd);
		}
		reel_.push_back(vector_of_symbols[0]);
		vector_of_symbols.erase(vector_of_symbols.begin());
	};

	void print_the_reel() {
		for (int i = 0; i < 55; i++) {
			std::cout << reel_[i]->getSymbol() << " ";
		}
	};

	void print_symbol(int i) {
		std::cout << reel_[i]->getSymbol() << " ";
	}

	int roll_the_reel() {
		return rand() % 55;
	};

	char get_symbol(int i) {
		return reel_[i]->getSymbol();
	}

private:
	std::vector<symbol*> reel_;
	std::vector<symbol*> vector_of_symbols;
};

