include <iostream>
#include <string>
#include <fstream>

using namespace std;

void loadSearchWord();
void loadTextString();

string searchArray[6];
string textArray[0];

string words;
string textline;

int main(){
    
    //open file 
    /*ifstream file("text1.txt");
    if(file.is_open())
    {
        string myArray[5];

        for(int i = 0; i < 5; ++i)
        {
            file >> myArray[i];
          
        }
    }
    */

    loadSearchWord();
    loadTextString();
    

    for (int i = 0; i < 6; i++){
        string LookUp = searchArray[i];
        int pos = textline.find(LookUp);

        if(pos >=0){

            cout << "Found.." << LookUp << pos <<endl;

        }
        else{

            cout <<"Not Found.." << LookUp <<endl;

        }

    }
    
    cout <<"--- End of Search ---" <<endl;
}

void loadSearchWord(){
   
    int i = 0;
    int count = 0;
    string words; //this will contain the data read from the file

    cout <<"---- Loading Search Words -----"<<endl;
    
    ifstream mytxtfile ("search1.txt"); //opening the file. [mytxtfile is custom]
    
    if (mytxtfile.is_open()) //if the file is open
    {
        while (! mytxtfile.eof() ) //while the end of file is NOT reached
        {
            getline (mytxtfile,words); //get one line from the file
            searchArray[i] = words;
            cout << searchArray[i] << endl; //and output it
            i++;
        }
        mytxtfile.close(); //closing the file
        
        cout <<"---- Search Words Loaded -----"<<endl;

    }
    else cout << "Unable to open file"; //if the file is not open output 

}//end of loadSearchWord

void loadTextString(){

    int ii = 0; //short for loop for input
    string textline; //this will contain the data read from the file

    cout <<"---- Loading Search Words -----"<<endl;
    ifstream mytxtstrfile ("text1.txt"); //opening the file. [mytxtfile is custom]

    if (mytxtstrfile.is_open()) //if the file is open
    {
        while (! mytxtstrfile.eof() ) //while the end of file is NOT reached
        {
            getline (mytxtstrfile,textline); //get one line from the file
            textArray[ii] = textline;
            cout << textArray[ii] << endl; //and output it
            ii++;
        }
        mytxtstrfile.close(); //closing the file
        
        //not needed but...
        cout << "The length of your string = " << textline.size() << " characters. \n\n";

        cout <<"---- Search Words Loaded -----"<<endl;

    }
    else cout << "Unable to open file"; //if the file is not open output

}
