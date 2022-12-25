#include <string>
#include <vector>
using namespace std;

class Profile {

 private:

    int age;
    string name, city, country, pronouns; 
    vector<string> hobbies;

 public:

    Profile(string setName, int setAge, string setCity, string setCountry, string setPronouns = "they/them");
    ~Profile();
    //void view_profile();
    string view_profile();

};