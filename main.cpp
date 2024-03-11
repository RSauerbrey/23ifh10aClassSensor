#include <iostream>
#include "feuchtesensor.h"
#include "temperatursensor.h"
#include "avganalyzer.h"

using namespace std;

int main()
{
    //Feuchtesensor anlegen
    FeuchteSensor *f = new FeuchteSensor;
    AvgAnalyzer *a = new AvgAnalyzer(f);

    cout << a->getSensorType() << endl;

    return 0;
}
