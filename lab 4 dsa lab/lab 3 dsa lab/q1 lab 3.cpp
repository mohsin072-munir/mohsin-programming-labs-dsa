#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int choice;
    queue<int> q;
    int value;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Enqueue (Add)\n";
        cout << "2. Dequeue (Remove)\n";
        cout << "3. Display Queue\n";
        cout << "4. Create Queues from String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to add: ";
            cin >> value;
            q.push(value);
            cout << "Added " << value << " to queue.\n";
        }
        else if (choice == 2) {
            if (q.empty())
                cout << "Queue is empty!\n";
            else {
                cout << "Removed " << q.front() << " from queue.\n";
                q.pop();
            }
        }
        else if (choice == 3) {
            if (q.empty())
                cout << "Queue is empty!\n";
            else {
                cout << "Queue elements: ";
                queue<int> temp = q;
                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
        }
        else if (choice == 4) {
            cin.ignore();  // clear input buffer
            string text;
            cout << "Enter a string: ";
            getline(cin, text);

            stringstream ss(text);
            string word;
            int count = 1;

            while (ss >> word) {
                queue<char> q2;
                for (char c : word) {
                    q2.push(c);
                }
                cout << "Q" << count++ << ": ";
                while (!q2.empty()) {
                    cout << q2.front();
                    q2.pop();
                    if (!q2.empty()) cout << "-";
                }
                cout << endl;
            }
        }
        else if (choice == 5) {
            cout << "Program Ended.\n";
        }
        else {
            cout << "Invalid Choice!\n";
        }
    } while (choice != 5);

    return 0;
}
