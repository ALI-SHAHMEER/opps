#include <iostream>
#include <string>

using namespace std;

struct Youtube {
    string name;
    int subscribers;

    Youtube(string n = "", int s = 0) : name(n), subscribers(s) {}

    // Overload the << operator to display the Youtube channel details
    friend ostream& operator<<(ostream& cout, const Youtube& yt) {
        cout << "Channel Name: " << yt.name << endl;
        cout << "Channel Subscribers: " << yt.subscribers << endl;
        return cout;
    }

    // Overload the = operator to compare the subscribers of two Youtube channels
    friend operator==(Youtube& yt1, const Youtube& yt2) {
        if (yt1.subscribers > yt2.subscribers) {
            cout << yt1.name << " has more subscribers than " << yt2.name << endl;
        } else if (yt1.subscribers < yt2.subscribers) {
            cout << yt2.name << " has more subscribers than " << yt1.name << endl;
        } else {
            cout << yt1.name << " and " << yt2.name << " both have equal subscribers." << endl;
        }
    }
};

int main() {
    Youtube yt1("Ali", 3600);
    Youtube yt2("Shahmeer", 8500);

    // Display the Youtube channel details using the overloaded << operator
    cout << yt1;

    // Compare subscribers of the two Youtube channels
    yt1==yt2;

    return 0;
}
