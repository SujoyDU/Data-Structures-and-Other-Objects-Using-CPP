#include <iostream>
#include <cstdlib>
#include <iomanip> 
#include "project1_statistician.h"

using namespace std;
using namespace project1_statistician_h;

int main() {
    Statistician s1,s2,s3;
    s1.next_number(1.1);
    s1.next_number(-2.4);
    s1.next_number(0.8);

    cout<<setw(10)<<s1.get_sum();

    cout<<setw(10)<< s1.get_length();
    
    cout<<setw(10)<<s1.get_maximum();
    cout<<endl;

    s2.next_number(0.2);
    s2.next_number(1.2);
    s2.next_number(-1.1);

    cout<<setw(10)<<s2.get_sum();

    cout<<setw(10)<< s2.get_length();
    
    cout<<setw(10)<<s2.get_maximum();
    cout<<endl;

    s3 = s1 + s2;

    cout<<setw(10)<<s3.get_sum();

    cout<<setw(10)<< s3.get_length();
    
    cout<<setw(10)<<s3.get_maximum();
    cout<<endl;

}

