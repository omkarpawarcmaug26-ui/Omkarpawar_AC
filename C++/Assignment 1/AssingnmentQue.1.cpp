//============================================================================
// Name        : 1.cpp
// Author      : Omkar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double temperature;
	cin>>temperature;
	double fahrenheit = (temperature * 9 / 5) + 32;
	cout<<"Temperature  :  "<< temperature << " / "<< fahrenheit <<endl;
	int statusCode;

	if(temperature<0){
		statusCode = -1;
	}
	else if(temperature<=29){
		statusCode =  0;
	}
	else if(temperature<=44){
		statusCode = 1;
	}
	else if(temperature<=59){
		statusCode = 2;
	}
	else
		statusCode = 3;

	switch(statusCode){
	case -1:
		cout<<"SENSOR_ERROR"<<endl;
		cout<<"ACTION  :  Sensor fault — check wiring"<<endl;
		break;

	case 0:
			cout<<"NORMAL"<<endl;
			cout<<"ACTION  :  No action required"<<endl;
			break;

	case 1:
			cout<<"WARNING"<<endl;
			cout<<"ACTION  :  Alert sent to supervisor"<<endl;
			break;

	case 2:
			cout<<"STATUS  :  CRITICAL"<<endl;
			cout<<"ACTION  :  Cooling system triggered"<<endl;
			break;

	case 3:
		    cout<<"SHUTDOWN"<<endl;
		    cout<<"ACTION  :  Emergency shutdown initiated"<<endl;
			break;

	}

	string reading= (temperature>=25) ? "Above average" : "below average";
	cout<<"Reading : "<<reading<<endl;


	return 0;
}
