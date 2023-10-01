#include <iostream>
using namespace std;

int max_layers(int b, int c, int h) {
  /*
  Calculates the maximum number of layers in Monocarp's morning sandwich.

  Args:
    b: The number of bread slices.
    c: The number of cheese slices.
    h: The number of ham slices.

  Returns:
    The maximum number of layers in the sandwich.
  */

  int min_value = min(b, c + h);
  return min_value;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; i++) {
        int b, c, h;
        cin >> b >> c >> h;
        int result = max_layers(b, c, h);
        cout << result << endl;
    }

    return 0;
}
