#include <iostream>
#include "feuchtesensor.h"
#include "temperatursensor.h"

using namespace std;



int main()
{
    //Feuchtesensor anlegen
    TempSensorTyp1 *t1 = new TempSensorTyp1;
    TempSensorTyp2 *t2 = new TempSensorTyp2;

    DataGate *sensoren[4];

    sensoren[0] = t1;
    sensoren[1] = t2;


    cout << sensoren[0]->getSensorType() << endl;
    cout << sensoren[1]->getSensorType() << endl;

    return 0;
}
