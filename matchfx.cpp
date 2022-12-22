#include <iostream>
#include <string>
#include "match.hpp"
using namespace std;


//constructor
Profile::Profile(string addedName) {
    
    name = addedName;
    
}


//destructor
Profile::~Profile() {
    
}

/*
Member functions look like this:

returnType Profile::functionName(paramType param) {
    cout << Just like usual functions but with double colons to associate << endl
         << them with what came before << param;
}

*/