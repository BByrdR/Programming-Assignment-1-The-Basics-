#include <iostream>
using namespace std;


int main ( ) {

	double const METRIC_TON = 35273.92;
	double ounce,boxs;
	double weight;
	double numOfBoxs;


	cout<<"Enter the weight of a cereal in ounces:";
	cin>>ounce;

	weight = ounce/METRIC_TON;
	cout<<"The weight of the cereal: "<<weight<<endl;


	numOfBoxs = METRIC_TON/ounce;
	cout<<"The number of boxes of cereal that weight a ton: "<<numOfBoxs<<endl;

	return 0;
}
