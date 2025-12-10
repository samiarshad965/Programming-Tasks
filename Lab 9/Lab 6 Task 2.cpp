#include <iostream>
using namespace std;

int main()
 {
    int temperature;
    cout << "Enter the temperature ";
    cin >> temperature;

    if (temperature >= 40) {
        cout << "It's extremely hot! Stay indoors.";
    } 
	else if (temperature >= 30 && temperature <= 39)
	 {
        cout << " It's hot weather. Drink plenty of water to stay hydrated in the hot weather. ";
    } 
	else if (temperature >= 20 && temperature <= 29)
	 {
        cout << " The weather is pleasant and it is suitable day for outdoor activities!" ;
    } 
	else
	 {
        cout << " It's cool. Wear warm clothes to stay comfortable. ";
    }
    return 0;
}
