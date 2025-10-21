#include <iostream>
#include <stack>
using namespace std;
int main() {
stack<int> marksStack;
int n, value;
cout << "How many marks do you want to enter? ";
cin >> n;
cout << "Enter the marks:\n";
for (int i = 0; i < n; i++) {
cin >> value;
marksStack.push(value);
}
int highest = -1;
cout << "\nEven values popped from the
stack:\n";
while (!marksStack.empty()) {
int topValue = marksStack.top();
marksStack.pop();
if (topValue > highest) {
highest = topValue;
}
if (topValue % 2 == 0) {
cout << topValue << " ";
}
}
cout << "\n\nHighest marks: " << highest <<
endl;
return 0;
}
