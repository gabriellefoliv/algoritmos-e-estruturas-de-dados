#include <iostream>
using namespace std;

void fibonacci(int n1 = 0, int n2 = 1);

int main() {
    cout << "Fibonacci" << "\n\n";
    fibonacci(4, 2);
    system("pause");
    return 0;
}

void fibonacci(int n1, int n2) {
    if (n2 < 100) {
        cout << n1 << "," << n2 << ",";
        n1 = n1 + n2;
        n2 = n2 + n1;
        fibonacci(n1, n2);
    } else cout << "..." << "\n\n";
}

