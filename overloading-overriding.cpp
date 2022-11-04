#include <bits/stdc++.h>

using namespace std;
class Sum{
public:
    int store;
    Sum(int first){
        store= first;
    }
    Sum operator +(Sum obj3){
        cout << store << " " <<  obj3.store << endl;
    }
};
int main(){
    //overloading helping me to do a operation between multiple objects
    Sum obj1(10), obj2(20);
    obj1+obj2;
}