#include "Fraction.hpp"

 namespace ariel{


Fraction::Fraction(int numerator , int denominator)
{
        this-> numerator = numerator;
        this-> numerator = denominator;

}
Fraction::Fraction()
{
        this-> numerator = 0;
        this-> numerator = 1;
}

void Fraction:: reduce() {
  // implementation of the reduce function goes here
  // ...
}

int Fraction::getNumerator() const {
     return 0; 
     }

int Fraction::getDenominator() const {
     return 0;
      }

Fraction Fraction::operator+(const Fraction& other) const {
     return Fraction(); 
     }

Fraction Fraction::operator-(const Fraction& other) const { 
    return Fraction(); 
    }

Fraction Fraction::operator*(const Fraction& other) const { 
    return Fraction(); 
    }

Fraction Fraction::operator/(const Fraction& other) const { 
    return Fraction();
     }

bool Fraction::operator==(const Fraction& other) const { 
    return false; 
    }

bool Fraction::operator>(const Fraction& other) const { 
    return false; 
    }

bool Fraction::operator<(const Fraction& other) const { 
    return false; 
    }

bool Fraction::operator>=(const Fraction& other) const {
     return false; 
     }

bool Fraction::operator<=(const Fraction& other) const { 
    return false; 
    }

Fraction Fraction::operator++() { 
    return Fraction(); 
    }

Fraction Fraction::operator++(int) { 
    return Fraction(); 
    }

Fraction Fraction::operator--() { 
    return Fraction(); 
    }

Fraction Fraction::operator--(int) {
     return Fraction(); 
     }



    std::ostream& operator<<(std::ostream& outs, const Fraction& fraction) {
    // implementation here
    return outs;
}

std::istream& operator>>(std::istream& ins, Fraction& fraction) {
    // implementation here
    return ins;
}



Fraction operator+(const Fraction& fraction, float value) {
    // implementation here
    return Fraction();
}

Fraction operator+(float value, const Fraction& fraction) {
    // implementation here
    return Fraction();
}

Fraction operator-(const Fraction& fraction, float value) {
    // implementation here
    return Fraction();
}

Fraction operator-(float value, const Fraction& fraction) {
    // implementation here
    return Fraction();
}

Fraction operator*(const Fraction& fraction, float value) {
    // implementation here
    return Fraction();
}

Fraction operator*(float value, const Fraction& fraction) {
    // implementation here
    return Fraction();
}

Fraction operator/(const Fraction& fraction, float value) {
    // implementation here
    return Fraction();
}

Fraction operator/(float value, const Fraction& fraction) {
    // implementation here
    return Fraction();
}

bool operator==(float value, const Fraction& fraction) {
    // implementation here
    return false;
}

bool operator!=(float value, const Fraction& fraction) {
    // implementation here
    return false;
}

bool operator>(float value, const Fraction& fraction) {
    // implementation here
    return false;
}
bool operator>(const Fraction& fraction,float value) {
    // implementation here
    return false;
}

bool operator<(float value, const Fraction& fraction) {
    // implementation here
    return false;
}
bool operator<( const Fraction& fraction,float value) {
    // implementation here
    return false;
}

bool operator>=(float value, const Fraction& fraction) {
    // implementation here
    return false;
}
bool operator>=( const Fraction& fraction,float value) {
    // implementation here
    return false;
}

bool operator<=(float value, const Fraction& fraction) {
    // implementation here
    return false;
}
bool operator<=( const Fraction& fraction,float value) {
    // implementation here
    return false;
}



 }