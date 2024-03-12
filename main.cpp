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

    double result[1] = {0};
    cout << a->getSensorType() << endl;
    a->fetchData(result);

    cout << result[0] << endl;

    return 0;
}
