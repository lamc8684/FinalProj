#include <iostream>

using namespace std;

int main()
{
  cout<<"test"<<endl;
}


void readFileIn(){
    std::string line;
    std::string words[350];
    int wordCount=0;
    std::ifstream myfile;
    myfile.open("words.txt");   //opens the file
    if (myfile.is_open())   //goes through this code since file is open
    {
        while(getline(myfile, line)) {    //get each line in the file and puts them in the string line.
            words[wordCount] = line.substr();
            wordCount++;
        }
    }
}
