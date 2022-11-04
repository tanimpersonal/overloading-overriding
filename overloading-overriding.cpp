#include <bits/stdc++.h>

using namespace std;
class Sum{
public:
    int store;
    Sum(int first){
        store= first;
    }
    Sum operator +(Sum obj3){
        Sum ans(0);
       ans.store= store+obj3.store;
        return  ans;
    }
};
int main(){
    //overloading helping me to do a operation between multiple objects
    Sum obj1(10), obj2(20), obj3(30);
    Sum ans = obj1 + obj2;
    Sum total= ans + obj3;
    cout << ans.store << endl;
    cout << total.store << endl;

}