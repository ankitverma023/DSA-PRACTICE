#include<iostream>//t(n)=0(2^n)=(2^n-1),  space=0(n)=(n+1)
using namespace std;
int f(int n){
    // if(n==0){
    //     return 0;
    // }
    // if(n==1){n
    //     return 1;
    // }
    if (n == 0 || n == 1) {
		return n;
	}

	// recursive case

	// f(n) : find the nth fib. no.

	// 1. ask your friend to find the n-1th fib. no.

	int A = f(n - 1);

	// 2. ask your friend to find the n-2th fib. no.

	int B = f(n - 2);

	// 3. use results from your friend to solve the given problem

	return A + B;

}

int main() {

	int n = 4;

	cout << f(n) << endl;

	return 0;
}