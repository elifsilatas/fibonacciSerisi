#include <iostream>

using namespace std;

int main()
{
//1 1 2 3 5 8 13 21 34 55 (fibonacci serisi)
//n=5
//1 1 2 3 5 
//n=8
//1 1 2 3 5 8 13 21
	
	cout << "Fibonacci serisinin kac elemanini yazdirmak istiyorsunuz?: " << endl;
	
	int d;
	cin >> d;
	
	cout << endl;
	
	int a = 1;
	int b = 1;
	if(d==1)
		cout << 1 << endl;
	else if(d<=0);//burada sondaki noktalı virgül, hiçbir şey yapma demektir.
	else
	{
	
		cout << a << endl << b << endl;
		
		for(int i = 0; i<d-2; i++)
		{
			int c = a+b;
			a=b;
			b=c;
			cout << c << endl;
		}
	}
	return 0;
}