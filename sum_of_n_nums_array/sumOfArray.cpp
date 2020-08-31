#include <iostream>
using namespace std;

int n = 5;

int add(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++){
        s = s + a[i];
    }
        return s;
}

int main() {
    int a[n] = {8, 2, 4, 77, 10};
    int n = sizeof(a) / sizeof(a[0]);
    cout << add(a, n);
    return 0;
}