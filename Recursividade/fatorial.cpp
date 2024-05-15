#include <iostream>
using namespace std;

int fatorial(int y) {
    if (y==1)
        return 1;
    else
        return y * fatorial(y-1);
}

int main() {
    cout << fatorial(5) << endl;

    return(0);
}