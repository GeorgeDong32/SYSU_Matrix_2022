#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class fraction {
    private:
        int _numerator, _denominator;
        int gcd(const int &, const int &) const;
            // If you don't need this method, just ignore it.
        void simp();
            // To get the lowest terms.
    public:
        fraction(const int & = 0, const int & = 1);
            // The numerator and the denominator
            // fraction(5) = 5/1 = 5 :)
        fraction(const fraction &);
            // copy constructor

        void operator=(const fraction &);

        // You must know the meaning of +-*/, don't you ?
        fraction operator+(const fraction &) const;
        fraction operator-(const fraction &) const;
        fraction operator*(const fraction &) const;
        fraction operator/(const fraction &) const;

        void operator+=(const fraction &);
        void operator-=(const fraction &);
        void operator*=(const fraction &);
        void operator/=(const fraction &);

        // Comparison operators
        bool operator==(const fraction &) const;
        bool operator!=(const fraction &) const;
        bool operator<(const fraction &) const;
        bool operator>(const fraction &) const;
        bool operator<=(const fraction &) const;
        bool operator>=(const fraction &) const;

        friend std::istream & operator>>(std::istream &, fraction &);
            // Input Format: two integers with a space in it
            // "a b" is correct. Not "a/b"
        friend std::ostream & operator<<(std::ostream &, const fraction &);
            // Normally you should output "a/b" without any space and LF
            // Sometims you may output a single integer (Why? Guess XD)
            // If it is not a number (den = 0), output "NaN"
};

#endif


