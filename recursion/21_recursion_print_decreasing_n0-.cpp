#include<iostream> //t(n)=0(n),  space=0(n)=(n+1)
using namespace std;
void f(int n){
    if(n==0){//base case
        // f(0) : print nos. from 0 to 1 in dec. order
        return;
    }
    //recursive case

	// f(n) : print nos. from n to 1 in dec. order
    cout<<n<<" ";
    // 1. ask your friend to print nos. from n-1 to 1 in dec. order

    f(n-1);
    
}
int main(){
    int n=10;
    f(n);
    return 0;   
}