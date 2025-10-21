#include <iostream>
using namespace std;
int main() {
int marks[10], first = 0, second = 0;
for (int i = 0; i < 10; i++) {
cin >> marks[i];
if (marks[i] > first) {
second = first;
first = marks[i];
} else if (marks[i] > second && marks[i] != first) {
second = marks[i];
}
}
cout << "1st Highest: " << first << endl;
cout << "2nd Highest: " << second << endl;
return 0;
}
