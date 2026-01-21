#include <iostream>
#include <vector>
#include "DataSeries.h"

using namespace std;

int main()
{
	vector<double> data = {0.5, -0.4, 1.2, 4.2, 0.87};
	DataSeries ds(data);

	double max = data[0];
	for (double v : data){
		if (v > max){
			max = v;
		}
	}

	cout << "Maximum: " << max << endl;
	return 0;
}
