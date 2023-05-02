#include <iostream>
#include <vector>

using namespace std;

vector<int> invert(vector<int> values)
{
    int i;
    for (i = 0; i < values.size(); i++) {
        values[i] *= -1;
    }
    return values;
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> inverted = invert(v);

    /*  cout << "Original vector: ";
      for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
      }
      cout << endl;
    */
    cout << "Inverted vector: ";
    for (int i = 0; i < inverted.size(); i++) {
        cout << inverted[i] << " ";
    }
    cout << endl;

    return 0;
}
