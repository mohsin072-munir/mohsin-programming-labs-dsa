#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

void menuDrivenQueue() {
    queue<int> q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue (Add Element)\n";
        cout << "2. Dequeue (Remove Element)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.push(value);
                cout << value << " added to the queue.\n";
                break;
            case 2:
                if (!q.empty()) {
                    cout << q.front() << " removed from the queue.\n";
                    q.pop();
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 3:
                if (!q.empty()) {
                    cout << "Queue elements: ";
                    queue<int> temp = q;
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 4:
                cout << "Exiting menu...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);
}

void createMultipleQueuesFromString() {
    string input;
    cout << "\nEnter a string: ";
    cin.ignore();
    getline(cin, input);

    stringstream ss(input);
    string word;
    int queueNumber = 1;

    while (ss >> word) {
        queue<char> q;
        for (char c:word) {
            q.push(c);
        }

        cout << "Q" << queueNumber++ << ": ";
        while (!q.empty()) {
            cout << q.front();
            if (q.size() > 1) cout << "-";
            q.pop();
        }
        cout << endl;
    }
}

int main() {
    cout << "=== Queue Operations Program ===\n";

    int option;
    do {
        cout << "\nMain Menu:\n";
        cout << "1. Perform Queue Operations\n";
        cout << "2. Create Queues from String\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                menuDrivenQueue();
                break;
            case 2:
                createMultipleQueuesFromString();
                break;
            case 3:
                cout << "Program Ended.\n";
                break;
            default:
                cout << "Invalid Option!\n";
        }
    } while (option != 3);

    return 0;
