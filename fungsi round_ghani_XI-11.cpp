#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	float pecahan, vround, vceil, vfloor, vtrunc;
	
	//meminta masukan bilangan pecahan
	cout<< "Masukan bilangan pecahan : ";
	cin >> pecahan;
	
	//melakukan pembulatan
	vround = round (pecahan) ;
	vceil = cril (pecahan) ;
	vfloor = floor (pecahan) ;
	vtrunc = trunc (pecahan) ;
	
//menampilkan hasil pembulatan
cout << "Hasil Pembulatan Round: " << vround <<endl;
cout << "Hasil Pembulatan Ceil: " << vceil <<endl;
cout << "Hasil Pembulatan Floor: " << vfloor <<endl;
cout << "Hasil Pembulatan Trunc: " << vtrunc <<endl;

	system ("PAUSE");
	return 0;
}
