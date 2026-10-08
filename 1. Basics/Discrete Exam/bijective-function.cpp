#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");

    int n;
    vector<int> domain;

    fin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        fin >> x;
        domain.push_back(x);
    }

    int m;
    vector<char> codomain;

    fin >> m;

    for(int i=0;i<m;i++)
    {
        char x;
        fin >> x;
        codomain.push_back(x);
    }

    int k;
    vector<char> mapping;

    fin >> k;

    for(int i=0;i<k;i++)
    {
        char x;
        fin >> x;
        mapping.push_back(x);
    }

    bool onetoone = true;
    bool onto = true;

    // One-to-One Check
    set<char> s1;
    s1.insert(mapping.begin(), mapping.end());

    if(s1.size() != k)
    {
        onetoone = false;
    }

    // Onto Check
    for(char x : codomain)
    {
        if(s1.count(x) == 0)
        {
            onto = false;
        }
    }

    // Result
    if(onetoone && onto)
    {
        cout << "Function is Bijective (One-to-One and Onto)";
    }
    else if(onetoone)
    {
        cout << "Function is One-to-One";
    }
    else if(onto)
    {
        cout << "Function is Onto";
    }
    else
    {
        cout << "Function is Neither One-to-One nor Onto";
    }

    fin.close();

    return 0;
}