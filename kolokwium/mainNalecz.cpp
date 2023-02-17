// Tomasz Nalecz 305 045
#include "Nalecz.h"

int main()
{
	uczestnik kreta1("Tomasz", "Nalecz", 20);
	wycieczka Kreta(10715, 140715, "Grecja", "Ateny", 3000, 2000);
	
	wycieczka Kretaprim = Kreta+kreta1;
	
	
	
	cout<<Kreta;
	return 0;
}
