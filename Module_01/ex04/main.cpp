#include<string>
#include<iostream>
#include<fstream>

std::string  ft_replace(std::string line, std::string s1, std::string s2)
{
  size_t index;
  std::string tmpline;

  while ((index = line.find(s1)) != std::string::npos)
  {
    tmpline = line.substr(0, index);
    tmpline.append(s2);
    tmpline.append(line.substr(index + s1.size(), std::string::npos));
    line = tmpline;
  }
  return (line);
}

 
int main(int argc, char **argv)
{
  std::string s1, s2, filename, line, new_file_text;
  std::fstream file;

  if (argc != 4)
  {
    std::cout << "program works with 3 arguments" << std::endl;
    return(1);
  }
  filename = argv[1];
  s1 = argv[2];
  s2 = argv[3];

  file.open(filename, std::ios::in);
  if (!file)
  {
    std::cout << "error: file didn't open" << std:: endl;
    return(1);
  }
  while (1)
  {
    line = "";
    getline(file, line);
    if (line != "")
        line = ft_replace(line, s1, s2);
    new_file_text.append(line);
    if (file.eof())
      break;
    else
      new_file_text.append("\n");
  }
  file.close();
  file.open(filename + ".replace", std::ios::out);
  if (!file)
  {
    std::cout << "error: in opening the new replacing file" << std::endl;
    return(1);
  }
  file << new_file_text;
  file.close();
}
