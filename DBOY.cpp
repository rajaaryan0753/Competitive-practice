#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int min(int a, int b) { return a > b ? b : a; }

int main() {
  int T = 0;
  cin >> T;
  int N = 0;
  for (int i = 0; i < T; i++) {
    cin >> N;
    int *fuelArr = new int[N];
    int *stopsArr = new int[N];
    int max1 = 0, max2 = 0;
    for (int j = 0; j < N; j++) {
      cin >> stopsArr[j];
      if (max1 < stopsArr[j]) {
        max1 = stopsArr[j];
      }
    }
    for (int j = 0; j < N; j++) {
      cin >> fuelArr[j];
      if (max2 < fuelArr[j]) {
        max2 = fuelArr[j];
      }
    }
    max2 *= 2;
    max1 *= 2;
    long numTrips = 0;
    int searchSpace[max1 + 1][N + 1];
    for (int i = 0; i < max1 + 1; i++) {
      for (int j = 0; j < N + 1; j++) {
        if (i == 0 || j == 0) {
          if (i == 0) {
            searchSpace[i][j] = 0;
          } else {
            searchSpace[i][j] = max1;
          }
        } else if (i >= fuelArr[j - 1]) {
          searchSpace[i][j] = min((searchSpace[i - fuelArr[j - 1]][j] + 1),
                                  searchSpace[i][j - 1]);
        } else {
          searchSpace[i][j] = searchSpace[i][j - 1];
        }
      }
    }
    // for (int i = 0; i < max1; i++) {
    //   for (int j = 0; j < N + 1; j++) {
    //     cout << searchSpace[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // cout << endl;
    for (int j = 0; j < N; j++) {
      numTrips += searchSpace[2 * stopsArr[j]][N];
      // cout << searchSpace[2 * stopsArr[j]][N] << " ";
    }
    // cout << endl << "Total ";
    cout << numTrips << endl;
  }
}
