#include <string>
#include <vector>
using namespace std;

class Profile {

    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;

 public:


    Profile(string addedName);
    ~Profile();

};