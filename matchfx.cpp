#include <iostream>
#include <string>
#include "match.hpp"
using namespace std;


//constructor
Profile::Profile(string setName, int setAge, string setCity, string setCountry, string setPronouns) {
    
    name = setName;
    age = setAge;
    city = setCity;
    country = setCountry;
    pronouns = setPronouns;

    
}


//destructor
Profile::~Profile() {
    
}

string Profile::view_profile() {
    
    string retVal = "Name: " + name + "\nAge: " + to_string(age) + "\nCity: " + city + "\nCountry: " + country + "\nPronouns: " + pronouns + "\n" + "Hobbies: \n";

    for (int i = hobbies.size(); i < 0; i--) {

        retVal += "-" + hobbies[i] + "\n";

    }

    return retVal;

}

void Profile::add_hobby(string new_hobby) {

    hobbies.push_back(new_hobby);

}
/*
void Profile::view_profile(void) {

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Pronouns: " << pronouns << endl;
    //cout << "Hobbies include " << hobbies << endl;
}
*/
/*
Member functions look like this:

returnType Profile::functionName(paramType param) {
    cout << Just like usual functions but with double colons to associate << endl
         << them with what came before << param;
}

*/