#include <string>
#include <vector>
using namespace std;

class Profile {

    int age;
    string name, city, country, pronouns; 
    vector<string> hobbies;

 public:


    Profile(string addedName);
    ~Profile();

};