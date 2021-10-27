#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity = degree + 1;
    this->coefficients = new double [capacity];
    for (int i = 0; i < this->capacity; ++i) {
        this->coefficients[i] = coefficients[i];
    }
}

//Polynomial::Polynomial(const Polynomial &that) {
//
//
//}

//Polynomial::Polynomial(Polynomial &&that) {
//
//}

//Polynomial::~Polynomial() {
//
//}

int Polynomial::degree() const {
    return this->capacity - 1;
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for (int i = 0; i < what.capacity ; ++i) {
        out<< what.coefficients[i] << "";
    }
    return out;
}

double Polynomial::evaluate(double x0) const {
    double P = this->coefficients[0];
    for (int i = 0; i < this->capacity; ++i){
        P = P*x0 + this->coefficients[i];
    }
    return P;
}

//Polynomial Polynomial::derivative() const {
//    return Polynomial(0, nullptr);
//}

//double Polynomial::operator[](int index) const {
//    return 0;
//}


