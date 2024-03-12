#include "avganalyzer.h"

AvgAnalyzer::AvgAnalyzer(DataGate* dG)
{
    this->dG = dG;
}

string AvgAnalyzer::getSensorType()
{
   return dG->getSensorType();
}

void AvgAnalyzer::fetchData(double a[])
{
    double temp[10];
    double summe = 0;

    dG->fetchData(temp);
    int len = dG->dataSize();
    for(int i = 0 ; i<len ; i++) {
        summe = summe + temp[i];
    }
    a[0] = summe/len;
}

int AvgAnalyzer::dataSize()
{
    return 1;
}
