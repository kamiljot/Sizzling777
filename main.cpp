#include <iostream>
#include "main.h"

int main() {

	machine* m = new machine();
	for (int i = 0; i < 100000; i++) {
		//m->print_reels();
		m->set_drawn_symbols();
		m->print_drawn_symbols();
	}
	delete m;

	/*reel* r = new reel();
	r->print_the_reel();

	delete r;*/


}
