/*********************************************************************
* Author: Daniel Bauman
* Date: 7/6/2017
* Description: This program reads each line of a user-specified 
* file and counts the occurence of each letter of the alphabet.
* It then outputs this count to a new file for each line.
*********************************************************************/
#include <iostream>
#include <string>
#include <fstream>

// This function counts the occurrence of each letter
// in a line of text, and stores the count in an array.
void count_letters(std::ifstream&, int*);

// This function outputs the letter count to a file,
// prompting the user for a file name.
void output_letters(std::ofstream&, int*);

int main()
{
	char testChar;
	std::string fileString;
	std::ifstream srcFile;
	std::ofstream outFile;
	std::string fileName;
	
	// Array of 26 values, holding the counts of each letter; all initialized to 0
	int countList[26] = { 0 };
	
	std::cout << "Please enter the name of the file to read: ";
	std::cin >> fileName;

	// Open the file; return error message if file isn't found
	srcFile.open(fileName);
	if (!srcFile)
	{
		std::cout << "File open error! Press (Enter) to quit." << std::endl;
		std::cin.ignore();
		std::cin.get();
		return 0;
	}

	// Use count_letters() to read a line of the source file 
	while (!srcFile.eof())
	{
		count_letters(srcFile, countList);

		// output the state of the countList array w/ output_letters()
		output_letters(outFile, countList);

		// Re-initialize the letter counting array to zero in preparation for the next line to be read
				
		for (int i = 0; i < 26; i++)
		{
			countList[i] = 0;
		}
	}
	
	// Close the file
	srcFile.close();
	return 0;
}

void count_letters(std::ifstream& inputFile, int* counts)
{
	std::string input;
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	// Look at ifstream file, get one line, count its letters

	getline(inputFile, input);

	for (int i = 0; i < input.size(); i++)
	{
		for (int j = 0; j < alphabet.size(); j++)
		{
			if (tolower(input[i]) == alphabet[j])
			{
				counts[j]++;
			}
		}
	}
}

void output_letters(std::ofstream& outFile, int* counts)
{
	std::string output;
	std::cout << "Please enter a name for the output file: ";
	std::cin >> output;
	outFile.open(output);
	outFile << "a: " << counts[0] << std::endl
		<< "b: " << counts[1] << std::endl
		<< "c: " << counts[2] << std::endl
		<< "d: " << counts[3] << std::endl
		<< "e: " << counts[4] << std::endl
		<< "f: " << counts[5] << std::endl
		<< "g: " << counts[6] << std::endl
		<< "h: " << counts[7] << std::endl
		<< "i: " << counts[8] << std::endl
		<< "j: " << counts[9] << std::endl
		<< "k: " << counts[10] << std::endl
		<< "l: " << counts[11] << std::endl
		<< "m: " << counts[12] << std::endl
		<< "n: " << counts[13] << std::endl
		<< "o: " << counts[14] << std::endl
		<< "p: " << counts[15] << std::endl
		<< "q: " << counts[16] << std::endl
		<< "r: " << counts[17] << std::endl
		<< "s: " << counts[18] << std::endl
		<< "t: " << counts[19] << std::endl
		<< "u: " << counts[20] << std::endl
		<< "v: " << counts[21] << std::endl
		<< "w: " << counts[22] << std::endl
		<< "x: " << counts[23] << std::endl
		<< "y: " << counts[24] << std::endl
		<< "z: " << counts[25] << std::endl;

	outFile.close();
}