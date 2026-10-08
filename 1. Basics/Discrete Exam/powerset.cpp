#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");

    int n;
    vector<int> v;

    fin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        fin >> x;
        v.push_back(x);
    }

    int total = 1 << n;

    cout << "Power Set: ";

    for(int mask=0; mask<total; mask++)
    {
        cout << "{";

        bool first = true;

        for(int i=0;i<n;i++)
        {
            if(mask & (1<<i))
            {
                if(!first)
                    cout << ",";

                cout << v[i];
                first = false;
            }
        }

        cout << "} ";
    }

    cout << "\nTotal subsets: " << total;

    fin.close();

    return 0;
}