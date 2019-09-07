#include <iostream>
using namespace std;

int main() {

    cout << "Input: ";

    int num;
    cin >> num;

    int lineNum = (num * 2) - 1;

    for (int i=0; i<lineNum; i++) {

        int min = (i < num) ? i : (lineNum -1) - i;
        int max = (i < num) ? (lineNum -1) - i : i;

        // Derive left outer numbers
        for (int k=0; k<min; k++) {
            cout << num - k << " ";
        }

        // Derive middle numbers
        for (int j=min; j<=max; j++) {
            cout << max - (num - 2) << " ";
        }

        // Derive right outer numbers
        for (int l=max + 1; l<lineNum; l++) {
            cout << l - num + 2 << " ";
        }

        cout << endl;
    }


	return 0;
}
