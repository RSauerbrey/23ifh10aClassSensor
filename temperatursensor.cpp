// Realisierung/Implementierung der Schnittstelle

#include "temperatursensor.h"
#include <iostream>
using namespace std;
TemperaturSensor::TemperaturSensor()
{
    //Datenarray mit Zufallswerten füllen
    srand(time(NULL));
    for(int i = 0 ; i < 5; i++)
    {
        data[i] = (double) (rand() % 501)/10.0;
    }
}

TemperaturSensor::~TemperaturSensor()
{
    cout << "Objekt gekillt" << endl;
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double a[])
{
    //ToDo
    for(int i = 0 ; i < 10; i++)
    {
        a[i] = data[i];
    }
}

int TemperaturSensor::dataSize()
{
    return 5;
}


string TempSensorTyp1::getSensorType()
{
    return "Typ1";
}

string TempSensorTyp2::getSensorType()
{
    return "Typ2";
}
