#include<iostream>
#include<ctime>
using namespace std;
int main ()
{
// Get the timestamp for the current date and time
time_t ct;
time(&ct);

// Display the date and time represented by the timestamp
cout << ctime(&ct);
	return 0;
}
