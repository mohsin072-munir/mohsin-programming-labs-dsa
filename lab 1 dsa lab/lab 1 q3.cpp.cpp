#include <iostream>
using namespace std;
int main() {
int marks[6];
float sum = 0, average;
for (int i = 0; i < 6; i++) {
cin >> marks[i];
sum += marks[i];
}
average = sum / 6;
if (average > 90)
cout << "Grade: A+" << endl;
else if (average > 80)
cout << "Grade: A" << endl;
else if (average > 70)
cout << "Grade: B" << endl;
else if (average > 60)
cout << "Grade: C" << endl;
else if (average > 50)
cout << "Grade: D" << endl;
else
cout << "Grade: F" << endl;
return 0;
}
