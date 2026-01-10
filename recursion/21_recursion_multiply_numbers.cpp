#include<iostream> //t(n)=0(y),  space=0(y)
using namespace std;
int f(int x, int y){

    if(y==0){//base case
        return 0;
    }
    int A = f(x, y-1);//recursive call
    return x + A;
}
int main(){
    int x = 3;
    int y = 4;
cout<<f(x,y)<<endl;
    return 0;   
}