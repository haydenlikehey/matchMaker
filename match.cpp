#include <iostream>
#include "match.hpp"
using namespace std;

int main(int argc, char* argv[]) {

	Profile sam ("Sam", 30, "New York", "USA", "he/him");

	sam.add_hobby("listening to audiobooks and podcasts");
	sam.add_hobby("playing rec sports like bowling and kickball");
	sam.add_hobby("writing a speculative fiction novel");
	sam.add_hobby("reading advice columns");
   
	cout << sam.view_profile();

}