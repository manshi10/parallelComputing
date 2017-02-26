#include <fstream>
#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	ofstream ip;
	ip.open("ip.txt");
	int n;
	cin>>n;
	int num;
	srand(time(NULL));
	ip<<n<<endl;
	for(int i=0; i<n; i++)
	{
		num = rand()%1000 + 1;
		ip<<num<<endl;
	}
}