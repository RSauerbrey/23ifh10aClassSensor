#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H
#include "datagate.h"

class TemperaturSensor : public DataGate
{
protected:
    double data[5];
public:
    TemperaturSensor(); //Konstruktor
    ~TemperaturSensor();//Destruktor
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
};

class TempSensorTyp1 : public TemperaturSensor
{
public:
    string getSensorType();
};

#endif // TEMPERATURSENSOR_H
