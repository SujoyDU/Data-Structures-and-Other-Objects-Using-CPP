#include "project1_statistician.h"
#include <cassert>
#include <algorithm>
using namespace std;

namespace project1_statistician_h{

    Statistician::Statistician(){
        sequence_length = 0;
    }

    Statistician::Statistician(double last_num, double min_num, double max_num, double total_sum, int length) {
        sequence_length = length;
        sequence_max = max_num;
        sequence_min = min_num;
        sequence_last = last_num;
        sequence_sum = total_sum;

    }
    void Statistician::next_number(double number) {
        if (sequence_length == 0) { 
            sequence_last = number;
            sequence_max = number;
            sequence_min = number;
            sequence_sum = number;
            sequence_length += 1;
        }
        else {
            sequence_sum = sequence_last + number;
            if(number > sequence_max) {
                sequence_max = number;
            }
            if(number < sequence_min) {
                sequence_min = number;
            }
            sequence_last = number;
            sequence_length += 1;
        }
    }

    double Statistician::get_minimum() const{

        assert(sequence_length > 0);
        return sequence_min;
    }

    double Statistician::get_maximum() const {
        assert(sequence_length > 0);
        return sequence_max;
    }

    double Statistician::get_sum() const {

        return sequence_sum;
    }

    double Statistician::get_last() const {

        assert(sequence_length > 0);
        return sequence_last;

    }
    double Statistician::get_length() const {

       return sequence_length;

    }

    void Statistician::erase() {
        sequence_length = 0;
        sequence_sum = 0;
    }
    
    Statistician operator + (const Statistician& s1, const Statistician& s2){
        if(s1.get_length() < 1) {
            return s2;
        }
        else if(s2.get_length() < 1) {
            return s1;
        }
        
        int length = s1.get_length() + s2.get_length();
        double maximum = max(s1.get_maximum(),s2.get_maximum());
        double minimum = min(s1.get_minimum(),s2.get_minimum());
        double last_number = s2.get_last();
        double sum = s1.get_sum() + s2.get_sum();
        // Statistician s;
        // s.next_number(last_number);
        Statistician s(last_number,minimum,maximum,sum,length);
        return s;
    } 

}