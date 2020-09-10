#ifndef TEST_FRIEND_H
#define TEST_FRIEND_H

namespace test_friend_h {
    class Test{
        public:
            Test();
            void set_val(int val);
            int get_val() const;
        private:
            int x;

    };
    Test operator +(const Test& t1, const Test& t2);
    
}


#endif