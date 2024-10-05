#include <iostream>
using namespace std;

int sola_surushdur(int eded) {
    int temp = eded, uzunluq = 1, mertebe = 1;

    while (temp >= 10) {
        temp /= 10;
        uzunluq++;
        mertebe *= 10;
    }

    int sol_reqem = eded / mertebe;
    int qalan_hisse = eded % mertebe;

    return qalan_hisse * 10 + sol_reqem;
}

int main() {
    cout << sola_surushdur(12345) << endl;
    return 0;
}
