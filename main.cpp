#include <iostream>
#include "feuchtesensor.h"
#include "temperatursensor.h"

using namespace std;



int main()
{
    //Feuchtesensor anlegen
    TempSensorTyp1 *f = new TempSensorTyp1;
    double A[10] = {0};

    f->fetchData(A);

    for(int i = 0 ; i < f->dataSize(); i++)
    {
        cout << A[i] << endl;
    }

    cout << f->getSensorType() << endl;

    delete f;

    return 0;
}
