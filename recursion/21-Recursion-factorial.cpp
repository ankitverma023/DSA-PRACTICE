#include<iostream>//t(n)=0(n),  space=0(n)=(n+1)
using namespace std;
int f(int n){
    if (n==0) //base case
    {
        return 1;
    }
    int A=f(n-1);//recursive call
    return n*A;

}
int main(){
    int n = 4;// factorial of 4
    cout<<f(n) <<endl;
    return 0;
}