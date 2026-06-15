#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    // Accessing the front and back elements
    cout << q.front() << endl;
    cout << q.back()<<endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back();
}