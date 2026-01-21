#pragma once
#include <vector>

using namespace std;

class DataSeries
{
public:
	explicit DataSeries(const vector<double>& data);
	double mean() const;

private:
	vector<double> data_;
};
