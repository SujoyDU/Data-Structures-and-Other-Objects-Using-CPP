#include <iostream>
#include "test_friend.h"
using namespace test_friend_h;
using namespace std;

int main() {
    Test t1,t2,t3;
    t1.set_val(4);
    t2.set_val(3);
    t3 = t1 + t2;
    cout<<t3.get_val()<<endl;
}