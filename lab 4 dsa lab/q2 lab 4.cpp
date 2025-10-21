#include <iostream>
using namespace std;
int main() {
int id[10];
cout << "Enter 10 sorted student IDs: ";
for (int i = 0; i < 10; i++)
cin >> id[i];
int search;
cout << "Enter student ID to search: ";
cin >> search;
int low = 0, high = 9, mid;
bool found = false;
while (low <= high) {
mid = (low + high) / 2;
if (id[mid] == search) {
found = true;
break;
} else if (id[mid] < search)
low = mid + 1;
else
high = mid - 1;
}
if (found)
cout << "Student found at position " << mid + 1;
else
cout << "Student not found.";
}
