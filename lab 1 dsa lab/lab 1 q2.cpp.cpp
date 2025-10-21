#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n, key;
cout << "Enter size of array: ";
cin >> n;
int arr[n];
cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
sort(arr, arr + n);
cout << "Enter number to search: ";
cin >> key;
int low = 0, high = n - 1, mid;
bool found = false;
while (low <= high) {
mid = (low + high) / 2;
if (arr[mid] == key) {
found = true;
break;
} else if (arr[mid] < key) {
low = mid + 1;
} else {
high = mid - 1;
}
}
if (found)
cout << key << " found in array." << endl;
else
cout << key << " not found in array." << endl;
return 0;
}
