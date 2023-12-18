#include <string>
#ifndef KELVIN_HPP
#define KELVIN_HPP

class KelvinCal {
    private:
    double F;
    double C;
    double K;
    double K2;
    char cof;
    std::string yn;
    
    public:
    void CtoK();
    void FtoK();
    KelvinCal();
    ~KelvinCal();
};


#endif