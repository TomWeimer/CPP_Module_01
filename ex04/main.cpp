
#include <string>
#include <iostream>
#include <fstream>

std::string changeName(std::string original_name)
{
	std::string file_name;
	std::string file_extension = ".replace";

	std::string::iterator it;
	it = original_name.end();
	while (it != original_name.begin() && *it != '.')
	{
		it--;
	}
	file_name.insert(file_name.end(), original_name.begin() , it);
	return (file_name + file_extension);
}

std::string replace_content(std::string file_content, std::string s1, std::string s2)
{
	size_t i = 0;
	size_t size_s1 = s1.size();

	while (file_content.find(s1) != std::string::npos)
	{
		i = file_content.find(s1);
		file_content.erase(i, size_s1);
		file_content.insert(i, s2);
	}
	return (file_content);
}

void copy_file(std::string original_file, std::string new_file, char *argv[])
{
	std::ifstream 	src_file;
	std::ofstream 	dest_file;
	std::string 	line_content;
	std::string		file_content;

	src_file.open(original_file.c_str());
	if (src_file)
	{
		dest_file.open(new_file.c_str());
		dest_file.clear();
		while(getline(src_file, line_content))
		{
			line_content.append("\n");
			file_content.append(line_content);
		}
		dest_file << replace_content(file_content, argv[2], argv[3]);
		src_file.close();
		dest_file.close();
	}
	else
	{
		std::cout << "File not found" << std::endl;
	}
}



int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::string new_file = changeName(argv[1]);
		copy_file(argv[1], new_file, argv);
	}
	else
		std::cout << "Error number of arguments is incorrect" << std::endl;
}