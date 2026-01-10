#include<iostream>//t(n)=0(n),  space=0(n)=(n+1)
using namespace std;
void f(int n){
    if(n==0){//base case
        // f(0) : print nos. from 1 to 0 in inc. order
        return;
    }
    // recursive case

	// f(n) : print nos. from 1 to n in inc. order

	// 1. ask your friend to print nos. from 1 to n-1 in inc. order

    f(n-1);//recursive call
    cout<<n<<" ";
}
int main(){
    int n=10;
    f(n);
    return 0;   
}