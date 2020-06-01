#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>
#include <queue>
using namespace std;

int main(int argc, char** argv) {
queue < string > kolejkaLiczb;

string input;
	ofstream plik1;
   ifstream plik;  
   
   plik.open("abc.txt");  
   
   if(plik.good())  
  
            while(!plik.eof())  
       
        {
        	getline(plik,input);
            kolejkaLiczb.push(input);
  
	cout	 << "\n";
     cout << "[ \n ";
       cout   << "title"<<":"<<input;
       cout   << "]";
                               
               
     
			}
			  
                   plik.close(); 
				  
cout<<endl;   
 return 0;
}
