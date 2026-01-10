#include<iostream> //t(n)=0(n),  space=0(n)=(n)
using namespace std;
int f(int x[], int n,int i) {
    //base case

    // if (i == n-1) {
    //     //f(n-1): find the sum of sufix that starts from index n-1
    //     //f(n-1):find the sum (x[n-1]....[n-1])
    //     return x[n - 1];
        
    // }
    
    if(i == n){
        return 0;
    }



    //recursive case
    //f(x,n):sum of first n elements of array x
    //1.ask your friend to find sum of first n-1 elements
    int A = f(x,n,i + 1);
    //2.use the answer of your friend to find sum of first n elements
    return x[i] + A;
}
int main() {
    int x[]= {10,20,30,40,50};
    int n = sizeof(x)/sizeof(int);
    cout << f(x,n,0)<<endl;
    return 0;
}