#include <iostream> 
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	ofstream textout("111.txt");
	vector<string>str = { "小组","小时","小区" };
	vector<double> num = { 1.2,2.3,3.4 };
	
	//textout.precision(20);
	
	textout << setiosflags(ios_base::right | ios_base::fixed | ios_base::scientific);
	textout << setprecision(1);
	textout.fill('*');

	for (int i = 0; i < num.size(); i++)
	{
		
		textout << str[i];
		textout << setw(50);
		textout<< num[i] << endl;
	}
	textout.close();
	return 0;
}