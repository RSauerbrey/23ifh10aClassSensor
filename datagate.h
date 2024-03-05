#ifndef DATAGATE_H
#define DATAGATE_H
#include <string>
using namespace std;

// <<interface>>
class DataGate
{
public:
    virtual string getSensorType() = 0;
    virtual void fetchData(double a[]) = 0;
    virtual int dataSize() = 0;
};


#endif // DATAGATE_H
