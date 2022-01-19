#include <iostream>
#include <map>
#include <string>

int main()
{
	//ccreate the map, specifying the key and value
	std::map<std::string, int> dns_lookup;

	//otpion 1, create pari frist then insert
	std::pair<std::string, int> google("wwww.google.com", 11111);
	dns_lookup.insert(google);

	//option 2, create first(helper function), then insert
	auto apple = std::make_pair("www.apple.com", 3871222);
	dns_lookup.insert(apple);

	//option 3 pass pair directly to insert
	dns_lookup.insert(std::make_pair("www.utoronto.ca", 2222));

	for (auto it = dns_lookup.begin(); it != dns_lookup.end(); ++it)
	{
		std::cout << it->first << ": " << it->second << std::endl;
	}

	auto it = dns_lookup.find("wwww.apple.com"); // key is found
	if (it != dns_lookup.end())
	{
		std::cout << it->first << ": " << it->second << std::endl;
	}

	it = dns_lookup.find("www.microsoft.com"); // key is not found
	if (it == dns_lookup.end())
	{
		std::cout << "could not find www.microsoft.com" << std::endl;
	}
	//duplicate key using multimap
	std::multimap<std::string, float> salaray_database;
	salaray_database.insert(std::make_pair("John Smith", 45000));
	salaray_database.insert(std::make_pair("Lucky Im", 95000));
	salaray_database.insert(std::make_pair("Selina Kim", 85000));
	salaray_database.insert(std::make_pair("John Smith", 10000));

	auto range = salaray_database.equal_range("John Smith");
	for (auto it = range.first; it != range.second; ++it)
	{
		std::cout << it->first << " earns CAD" << it->second << std::endl;
	}


}