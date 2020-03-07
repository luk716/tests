#include<iostream>
#include<ctime>
using namespace std;
void Fillarr(int arr[3][8], int const ROW, int const WAL)
{
	int startPriceOld=2000, startPriceNew=8000, savingperMonth=1000,x=0;
	double percentLossByMonth=1.5;
	int r[2] ;
	if (startPriceOld < startPriceNew) {
		r[0] = 0;
		while (startPriceNew > r[1] + startPriceOld) {
			startPriceOld -= startPriceOld * percentLossByMonth * 0.01;
			startPriceNew -= startPriceNew * percentLossByMonth * 0.01;
			percentLossByMonth += 0.5;
			r[1] += savingperMonth;
			r[0] += 1;

		}
		r[1] = r[1] + startPriceOld - startPriceNew;
	}
	else { r[0] = 0; r[1] = startPriceOld - startPriceNew; }
	cout << r[1, 2];
}