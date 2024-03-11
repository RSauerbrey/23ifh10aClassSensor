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

}

int AvgAnalyzer::dataSize()
{
    //ToDo
    return 0;
}
