#include <iostream>
#include <vector>
#include "DataSeries.h"

using namespace std;

int main()
{
	vector<double> x = {0.4, -0.3, 1.2};
	DataSeries s(x);
	
	cout << "mean: " << s.mean() << endl;
	return 0;
}
