//Chance Daily
//4-13-17

#include <iostream>
#include <string>

int main(){

	int nightsStayed;
	double minutes = 0.0, total = 0.0;
	std::string response, phone, roomService, help;
	bool service = false;


	std::cout << "Thanks for staying at Lake View Hotel! " << std::endl;

	std::cout << "How many nights did you stay? ";
	std::cin >> nightsStayed;
	
	do{
		std::cout << "Would you like to stay another night? ";
		std::cin >> response;
		if (response == "yes" || response == "Yes" || response == "Y" || response == "y")
			nightsStayed += 1;
		std::cout << "Did you use the phone? ";
		std::cin >> phone;
		if (phone == "yes" || phone == "Yes" || phone == "Y" || phone == "y"){
			std::cout << "How many minutes were you on the phone? ";
			std::cin >> minutes;
		}
		std::cout << "Did you use room service? ";
		std::cin >> roomService;
		if (roomService == "yes" || roomService == "Yes" || roomService == "Y" || roomService == "y")
			service = true;
		std::cout << "Is there anything else I can help you with? ";
		std::cin >> help;
	} while (help == "yes" || help == "Yes" || help == "Y" || help == "y");



	total = (nightsStayed * 200) + (minutes * 0.25);
	if (service == true)
		total += 35;

	std::cout << "Your total for your stay is $" << total << std::endl;
	std::cout << "Thank you for staying with us at Lake View!" << std::endl;

}