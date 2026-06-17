#include <bits/stdc++.h>
using namespace std;

class PriorityQueue {
private:
    vector<int> arr;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void shiftUp(int i) {
        while (i > 0 && arr[parent(i)] < arr[i]) {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void shiftDown(int i) {
        int size = arr.size();
        int maxIndex = i;

        int l = leftChild(i);
        if (l < size && arr[l] > arr[maxIndex]) maxIndex = l;

        int r = rightChild(i);
        if (r < size && arr[r] > arr[maxIndex]) maxIndex = r;

        if (i != maxIndex) {
            swap(arr[i], arr[maxIndex]);
            shiftDown(maxIndex);
        }
    }

public:
    // Insert a new element
    void insert(int p) {
        arr.push_back(p);
        shiftUp(arr.size() - 1);
    }

    // Extract element with maximum priority
    int pop() {
        int size = arr.size();
        if (size == 0) return -1;
        int result = arr[0];
        arr[0] = arr[size - 1];
        arr.pop_back();
        if (!arr.empty()) shiftDown(0);
        return result;
    }

    // Get current maximum element
    int getMax() {
        if (arr.empty()) return -1;
        return arr[0];
    }

    // Print heap
    void printHeap() {
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(45);
    pq.insert(20);
    pq.insert(14);
    pq.insert(12);
    pq.insert(31);
    pq.insert(7);
    pq.insert(11);
    pq.insert(13);
    pq.insert(7);

    cout << "Priority Queue after inserts: ";
    pq.printHeap();

    cout << "Current max element: " << pq.getMax() << endl;

    pq.pop();
    cout << "Priority Queue after extracting max: ";
    pq.printHeap();

    return 0;
}
