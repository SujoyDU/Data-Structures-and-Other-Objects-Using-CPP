#include "test_friend.h"

namespace test_friend_h {

    Test::Test(){
        x = 0;
    }
    int Test::get_val() const {
        return x;

    }
    void Test::set_val(int v) {
        x = v;
    }
    Test operator +(const Test& t1, const Test& t2){
        Test newT;
        int newX = t1.get_val() + t2.get_val();
        newT.set_val(newX);
        return newT;
    }
}