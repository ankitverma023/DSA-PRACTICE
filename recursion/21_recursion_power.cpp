// #include<iostream> //t(n)=0(y),  space=0(y)
// using namespace std;
// int f(int x, int y){

//     if(y==0){//base case
//         //f(x,0):find x^0 or pow(x,0)
//         return 1;
//     }
//     //recursive case
//     //f(x,y):find x^y or pow(x,y)
//     //1.ask your friend to find pow(x,y-1)
//     int A = f(x, y-1);
//     //2.use the answer of your friend to find pow(x,y)
//     return x * A;
// }
// int main(){
//     int x = 3;
//     int y = 4;
// cout<<f(x,y)<<endl;
//     return 0;   
// }


// optimization of  above code

#include<iostream> //t(n)=0(log y),  space=0(log y)
using namespace std;
int f(int x, int y){

    if(y==0){//base case
        //f(x,0):find x^0 or pow(x,0)
        return 1;
    }
    //recursive case
    //f(x,y):find x^y or pow(x,y)
    // 1. ask your friend to find pow(x, y/2)
    int A = f(x, y/2);
    //y is even
    if (y%2==0){
        return A * A; 
    }
    //y is odd
    return A * A * x;
}
int main(){
    int x = 3;
    int y = 4;
cout<<f(x,y)<<endl;
    return 0;   
}