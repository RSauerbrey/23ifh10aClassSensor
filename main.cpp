#include <iostream>
#include "feuchtesensor.h"
#include "temperatursensor.h"
#include "avganalyzer.h"

using namespace std;

int main()
{
    DataGate* sensoren[5];

    //Feuchtesensor anlegen
    FeuchteSensor *f1 = new FeuchteSensor;
    TemperaturSensor* t1 = new TemperaturSensor;
    TemperaturSensor* t2 = new TemperaturSensor;

    AvgAnalyzer *a = new AvgAnalyzer(f1);

    sensoren[0] = f1;
    sensoren[1] = t1;
    sensoren[2] = t2;
    sensoren[3] = a;

    cout << sensoren[0]->getSensorType() << endl;
    cout << sensoren[1]->getSensorType() << endl;
    cout << sensoren[2]->getSensorType() << endl;
    cout << sensoren[3]->getSensorType() << endl;
   /* double result[1] = {0};
    cout << a->getSensorType() << endl;
    a->fetchData(result);

    cout << result[0] << endl;
*/
    return 0;
}
