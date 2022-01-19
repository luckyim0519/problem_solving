#include <iostream>
#include <vector>
#include <list>

//simplifying iterator cod with auto
void remove_negatives(std::vector<int>& integers)
{
	for (auto it = integers.begin(); it != integers.end();)
	{
		it != integers.end();
		if (*it < 0)
		{
			it = integers.erase(it);
		}
		else
		{
			it++;
		}
	}
}

int main()
{
	std::vector<int> numbers = { 1,2,3,4 };

	std::vector<int>::iterator it = numbers.begin();
	 //compile error, 5 is an int, not an iterator 
	it++; //pointing to the next element
	it--; //point to the previous element
	int x = *it; //take the value of it and put it into x 
	it != numbers.end(); //check if points to valid element returns true
	it < numbers.end(); //cheks if comes before the end returns true
	*it = 27; 
	it = numbers.begin() + 2;

	//looping through a vector
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	
	std::cout << std::endl;

	int size = numbers.size();
	std::cout << "size of the iterator before the erase: " << size << std::endl;

	//deleting
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end();)
	{
		if (*it > 26)
		{
			it = numbers.erase(it);
		}
		else
		{
			it++; //it is cremented if nothing is erased
		}
	}
	//deleting the negative one as well
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end();)
	{
		if (*it < 0)
		{
			it = numbers.erase(it);
		}
		else {
			it++;
		}
	}

	std::cout << "after the erase" << std::endl;
	//looping through a vector
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	int size2 = numbers.size();
	std::cout << "size of the iterator after the erase: "<<size2 << std::endl;

	std::cout << std::endl;

}