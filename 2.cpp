#include <iostream>
using namespace std;

main(){
    int sum = 2, a=1, b=2, temp =0;
    int fib (int, int);

    do {
        temp = b;
        b = fib(a, b);
        a = temp;
        cout << "a:" << a << " " << "b: " << b << endl; // fib monitor

        if (b%2 ==0)
            sum += b;
    } while (b < 4000000);
    cout << "\nSUM:" << sum << endl;
}

int fib (int a, int b){
    int fib = a + b;
    return fib;
    }
