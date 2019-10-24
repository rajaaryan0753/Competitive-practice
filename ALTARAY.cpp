#include <iostream>

using namespace std;
int main() {
  int T;
  cin >> T;
  long N = 0;
  for (int i = 0; i < T; i++) {
    cin >> N;
    long *myArr = new long[N];
    long *outArr = new long[N];
    for (int j = 0; j < N; j++) {
      cin >> myArr[j];
      outArr[j] = 0;
    }
    outArr[N - 1] = 1;
    for (int j = N - 2; j >= 0; j--) {
      outArr[j] = ((myArr[j + 1] * myArr[j]) < 0) ? outArr[j + 1] + 1 : 1;
    }

    for (int j = 0; j < N; j++) {
      if (j != N - 1)
        cout << outArr[j] << " ";
      else
        cout << outArr[j];
    }
    cout << endl;
    delete[] outArr;
    delete[] myArr;
  }
}
