#include "maxanalyzer.h"

MaxAnalyzer::MaxAnalyzer() {}


MaxAnalyzer::MaxAnalyzer(DataGate* dG)
{
    this->dG = dG;
}

string MaxAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

void MaxAnalyzer::fetchData(double a[])
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

int MaxAnalyzer::dataSize()
{
    return 1;
}
