// Your First C++ Program

#include <iostream>

using namespace std;

class Timeseries
{
private:
    /* data */
    int TsValue;
    string TsDate;

public:
    Timeseries(int, string);
    ~Timeseries();
    void display();
};

Timeseries::Timeseries(int tsV, string tsD)
{
    TsValue = tsV;
    TsDate = tsD;
}

void Timeseries::display()
{
    cout << " TsValue is " << TsValue << endl;
    cout << " TsDate is " << TsDate << endl;
    // Don't use PrintF it is not typesafe and will have issues for custom types
    // printf("%s is TsDate \n and %d is TsValue", TsDate.c_str(), TsValue);
}

Timeseries::~Timeseries()
{
}

int main()
{
    Timeseries ts(15, "vikram");

    ts.display();

    return 0;
}