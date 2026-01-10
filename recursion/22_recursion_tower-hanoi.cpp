/*Tower of Hanoi 
 
Given a  three towers  and N disks of varying sizes that can slide onto any of 
the towers. Initially, all the N disks are placed in the decreasing order of their sizes on the 
1st tower (source) i.e. the smallest disk at its top and the largest disk at its bottom. Design
 a recursive algorithm for generating the steps required to move the N disks from the source tower
  to the 3rd tower (destination) using the 2nd tower (helper) such that at any point of time  
 
you can move a one disk from top of one tower to the top of another. 
you cannot place a larger disk on top of smaller disk 
 
  
Example  
 
Input : N = 3 */
#include<iostream> //t(n)=0(2^n), space=0(n)
using namespace std; //for n disks total move is (2^n)-1
void f(int n, char src, char dst, char hlp) {
    //base case
    if (n == 0) {
        return;
    }
    //recursive case
    //f(n):move n disks from source to destination using helper
    //step 1: move n-1 disks from source to helper using destination as helper
    f(n - 1, src, hlp, dst);
    //step 2: move the nth disk from source to destination
    cout << "Move disk from " << src << " to " << dst<< endl;
    //step 3: move n-1 disks from helper to destination using source as helper
    f(n - 1, hlp, dst, src);
}
int main() {
    int n = 3; //number of disks
    f(n, 'A', 'C', 'B'); //A is source, C is destination, B is helper
    return 0;
}