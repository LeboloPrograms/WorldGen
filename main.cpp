#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;
struct backgroundChar{
    string title;
    string name;
    string age;
    string race;
    string clan;
    string country;
};
struct charcters{
    string title;
    string name;
    string clan;
    string race;
    string gender;
    unsigned short age;
    string hometown;
    string nation;
    string classtype;
    bool maritalStat;
    string notes;
    vector<backgroundChar> immediateFamily;
};
struct country{
    string name;
    string rulingType;
    string ruler;
    unsigned long long population;
    vector<string> allies;
    vector<string> enemies;
    vector<string> neutral;
};

class storyLine{
private:
    string world;
    vector<charcters> people;
    vector<country> countries;
    vector<backgroundChar> npcs;
public:
    void nameWorld(string name){
        world = name;
    }
    void addPeople(charcters person){
        people.push_back(person);
    }
    void addCountry(country countrie){
        countries.push_back(countrie);
    }
    void addNPC(backgroundChar chare){
        npcs.push_back(chare);
    }
    void editPeople(string who, string what){
    }
};

int main(){
    cout << "Welcome to []." << endl;
    cout << endl;

    string in;
    bool freeme = true;
    bool yena;

    while(freeme){
        cout << "Would you like to create a new world? " << endl;
        cout << "(y or n)" << endl;

        cin >> in;

        if(in == "y"){
            cout << "ye" << endl;
            freeme = false;
            yena = true;
        } else if(in == "n"){
            cout << "nah" << endl;
            freeme = false;
            yena = false;
        } else{
            cout << "Sorry thats not a valid answer, try again." << endl;
        }
        cout << endl;
    }
}


