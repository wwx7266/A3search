#include <iostream>
#include <fstream>
#include <dirent.h>   //std::DIR
#include <vector>     //std::vector<std::string>
#include <algorithm> //std::sort
#include <string>    //std:string

#include "porter2_stemmer.h"

int main(int argc, char *argv[]){
	std::string path = new std::string(argv[1]);
	DIR *input_dir;
	dirent *input_dirent;

	std::cout << path << std::endl;

	input_dir = opendir()

	return 0;
}