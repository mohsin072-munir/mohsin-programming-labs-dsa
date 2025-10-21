#include <iostream>
using namespace std;
int main() {
int score[15];
cout << "Enter scores of 15 students: ";
for (int i = 0; i < 15; i++)
cin >> score[i];
for (int i = 0; i < 14; i++) {
for (int j = 0; j < 14 - i; j++) {
if (score[j] > score[j + 1]) {
int temp = score[j];
score[j] = score[j + 1];
score[j + 1] = temp;
}
}
}
cout << "Scores in ascending order: ";
for (int i = 0; i < 15; i++)
cout << score[i] << " ";
}
