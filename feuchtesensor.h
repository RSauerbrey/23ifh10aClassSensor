// Realisierung/Implementierung der Schnittstelle

#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H
#include "datagate.h"


class FeuchteSensor : public DataGate
{
protected:
    double data[10];
public:
    FeuchteSensor(); //Konstruktor
    ~FeuchteSensor();//Destruktor
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H
