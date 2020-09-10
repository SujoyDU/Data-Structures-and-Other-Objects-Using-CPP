#ifndef PROJECT1_STATISTICIAN_H
#define PROJECT1_STATISTICIAN_H

namespace project1_statistician_h{
    class Statistician {
        public:
            Statistician();
            Statistician(double last_num, double min_num, double max_num, double total_sum, int length);
    
            void erase();
            void next_number(double number);
            double get_minimum() const;
            double get_maximum() const;
            double get_sum() const;
            double get_length() const;
            double get_last() const;

            // Statistician operator+(const Statistician& s2);

            // friend function
            // friend Statistician operator+ (const Statistician& s1, const Statistician& s2);

        private:
            double sequence_min;
            double sequence_max;
            double sequence_sum;
            double sequence_last;
            int sequence_length;

    };
    
    Statistician operator + (const Statistician& s1, const Statistician& s2);
    
}


#endif