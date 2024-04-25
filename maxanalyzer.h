#ifndef MAXANALYZER_H
#define MAXANALYZER_H
#include "analyzer.h"

class MaxAnalyzer:public Analyzer
{
public:
    MaxAnalyzer();
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
};


#endif // MAXANALYZER_H