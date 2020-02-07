#ifndef TEMPERATURA_H_
#define TEMPERATURA_H_

class Temperatura
{
    private:
        double gKelvin;
    public:
        void setTempKelvin(double);
        void setTempFarenheit(double);
        void setTempCelsius(double);
        double getTempKelvin(double);
        double getTempFarenheit(double);
        double getTempCelsius(double);        
};

#endif