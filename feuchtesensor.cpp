// Realisierung/Implementierung der Schnittstelle

#include "feuchtesensor.h"
#include <iostream>
using namespace std;



FeuchteSensor::FeuchteSensor()
{
    //Datenarray mit Zufallswerten füllen
    srand(time(NULL));
    for(int i = 0 ; i < 10; i++)
    {
        data[i] = (double) (rand() % 1001)/10.0;
    }
}

FeuchteSensor::~FeuchteSensor()
{
    cout << "Objekt gekillt" << endl;
}

string FeuchteSensor::getSensorType()
{
    return "Feuchtesensor";
}

void FeuchteSensor::fetchData(double a[])
{
   for(int i = 0 ; i < 10; i++)
   {
       a[i] = data[i];
   }
}

int FeuchteSensor::dataSize()
{
    return 10;
}
