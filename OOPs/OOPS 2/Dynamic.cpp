#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int testMatches;
    float averageRuns;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of test matches: ";
        cin >> testMatches;
        cout << "Enter average runs: ";
        cin >> averageRuns;
    }

    void display() {
        cout << "Name: " << name 
             << ", Age: " << age 
             << ", Matches: " << testMatches 
             << ", Avg Runs: " << averageRuns << endl;
    }
};

int main()
    {
        int n;
        cout<<"Enter the number of player: ";
        cin>>n;

        vector<Cricketer*> player;
        
        for(int i=0;i<n;i++)
            {
                Cricketer* c=new Cricketer();
                cout<<"Cricketer "<<i+1<<endl;
                c->input();
                player.push_back(c);
            }

        cout<<"\n--- Cricketer Records ---\n";//auto c: player
        for(auto c: player)
            {
                c->display();
            }


    }

