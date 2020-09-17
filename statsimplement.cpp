#include "stats.h"
#include <cassert>

namespace main_savitch_2C {

    statistician::statistician() {
        count = 0;
        total = 0;
    }
    void statistician::next(double r) {

        if (count == 0) {
           tinyest = r;
           largest = r;
           total = r;
           count +=1;
        }
        else {
            if (r < tinyest) { tinyest = r;}
            else if (r > largest) { largest = r;}
            total = total + r;
            count +=1;
        }

    }
    
    void statistician::reset(){
        count = 0;
        total = 0;
    }
    int statistician::length( ) const {
        return count;
    }
    double statistician::sum( ) const {
        return total;
    }
    double statistician::mean( ) const{
        assert(count > 0);
        return total/count;
    }
    
    double statistician::minimum( ) const{
        assert(count > 0);
        return tinyest;
    }

    double statistician::maximum( ) const{
        assert(count > 0);
        return largest;
    }


    statistician operator +(const statistician& s1, const statistician& s2){
        if (s1.count == 0) return s2;
        else if  (s2.count == 0) return s1;
        else {
            statistician s3;
            s3.count = s1.count + s2.count;
            s3.tinyest = s1.tinyest < s2.tinyest ? s1.tinyest : s2.tinyest;
            s3.largest = s1.largest > s2.largest ? s1.largest : s2.largest;
            s3.total = s1.total + s2.total;
            return s3;
        }

    }

    statistician operator *(double scale, const statistician& s){
        statistician s3;
        s3.tinyest = s.tinyest * scale;
        s3.largest = s.largest * scale;
        s3.total = s.total * scale;
        s3.count = s.count;
        return s3;

    }
    bool operator ==(const statistician& s1, const statistician& s2){
        if (s1.length() == 0 && s2.length() == 0) return true;
        else {
            
            if (s1.length() != s2.length()) {return false;}
            else if (s1.minimum() != s2.minimum()) {return false;}
            else if (s1.maximum() != s2.maximum()) {return false;}
            else if (s1.sum() != s2.sum()) {return false;}
            return true;
        }
    }

}
