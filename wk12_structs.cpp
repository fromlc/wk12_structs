//------------------------------------------------------------------------------
// wk12_structs.cpp 
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------
// struct definitions
//------------------------------------------------------------------------------
struct Pitcher {

    string name;
    int wins{};
};

// globals

//------------------------------------------------------------------------------
// local functions
//------------------------------------------------------------------------------
void display_pitcher(Pitcher& p1);
 
//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    // local variable of type Pitcher
    
    // data
    Pitcher p;
    p.name = "Cy Young";
    p.wins = 511;

    display_pitcher(p);

    Pitcher p2 = { "Greg Maddux", 400 };

    display_pitcher(p2);

    if (p.wins > 500) {
        cout << "wins > 500!";
    }
    else {
        cout << "wins NOT > 500!";
    }

    while (p.wins > 500) {
        p.wins--;
    }

    cout << "New number of wins: " << p.wins << '\n';

    for (int i = 0; i < p.wins; i++)
        cout << p.wins << ' ';

    cout << '\n';
}

//------------------------------------------------------------------------------
// display passed Pitcher info to console
//------------------------------------------------------------------------------
void display_pitcher(Pitcher& p1) {
    p1.wins++;
    cout << p1.name << ' ' << p1.wins << '\n';
}

