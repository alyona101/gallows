#include <iostream>
#include <fstream>//reading a file and from a file
#include <vector>

using namespace std;

/// <summary>
/// create text files, in the first one we store words and in the second one we store questions.
/// </summary>
void Creating_a_buffer()
{
	ofstream buffer("words.txt");// create a text file to store the words
	
	buffer.close();//close the file

	ofstream buffe("questions.txt");//create a text file for the questions
	
	buffe.close();//close the file
}

/// <summary>
/// write the words to a text file
/// </summary>
void Spell_out_the_words()
{
	ofstream record("words.txt", ios::app);//write to the end of the text file

		// write words in a text file and commentary with questions for those words.
		record << "Apple" << endl;
		//wood
		record << "Milk" << endl;
		//cow
		record << "Rabbit" << endl;
		//long-eared
		record << "Cheese" << endl;
		//holey
		record << "Elephant" << endl;
		//mouse
		record << "Giraffe" << endl;
		//long
		record << "Crocodile" << endl;
		//toothy
		record << "Monkey" << endl;
		//banana
		record << "Chocolate" << endl;
		//sweet
		record << "Water" << endl;
		//wet
		record << "Volcano" << endl;
		//explosive
		record << "Capital" << endl;
		//money
		record << "Result" << endl;
		//end
		record << "Slot" << endl;
		//connector
		record << "Exclusive" << endl;
		//new
		record << "Zombies" << endl;
		//dead
		record << "Apocalypse" << endl;
		//war
		record << "Wolf" << endl;
		//dog
		record << "Magic";
		//Harry Potter

	record.close();//закрываем файл
}

/// <summary>
/// 
/// </summary>
void Questions()
{
	ofstream record("questions.txt", ios::app);//write questions to the end of the text file

	//write the questions to a text file 
	record << "wood" << endl;
	record << "cow" << endl;
	record << "eared" << endl;
	record << "holey" << endl;
	record << "mouse" << endl;
	record << "long" << endl;
	record << "toothy" << endl;
	record << "banana" << endl;
	record << "sweet" << endl;
	record << "wet" << endl;
	record << "explosive" << endl;
	record << "money" << endl;
	record << "end" << endl;
	record << "connector" << endl;
	record << "new" << endl;
	record << "dead" << endl;
	record << "war" << endl;
	record << "dog" << endl;
	record << "Potter";
}


int main()
{
	Creating_a_buffer();

	Spell_out_the_words();

	Questions();

	return 0;
}