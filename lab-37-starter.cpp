#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*int sum_ascii(string a){ //a function sum_ascii() that takes in a string
    int tot = 0;
    for (int i=0; i<a.length(); i++){
        tot += (int)a[i]; //this adds up the after converting letters into numbers
    }
    return tot;
}*/

int gen_hash_dex(const string &code){
    int tot = 0;
    for (char c : code) {
        tot += (int)c;
    }
    return tot % 97;//i chose 97 as said in the module
}

int main() {
    map<int, list<string>> hash_table; //created a map named hash_table
    ifstream file("lab-37-data.txt"); //opening the file 
    string line;
    long long total = 0;
    if(!file.is_open()){
        cout << "Cannot open file" << endl;
    }
    while (getline(file, line)) {
        total += sum_ascii(line);
    }
    while (file >> code) {
        int index = gen_hash_index(code); 
        hash_table[index].push_back(code);
    }
    char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;
    int b = 66;
    cout << b << endl;
    cout << (char) b << endl;
    /*while (getline(file, line)) {
        total += sum_ascii(line);
    }*/
    cout << sum_ascii("536B9DFC93AF") << endl; //this is testing
    file.close();
    cout << total << endl; //cout-ting the sum of all the ASCII
    int count = 0;
    for (auto &entry : hash_table)  //this prints out the index and also all the values in it
        cout << "Index: " << entry.first << " -> ";
        for (const string &item : entry.second) {
            cout << " ";
        }
        count++;
        if (count == 100) break;//this is to check the 100 enteries
    }
    return 0;
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
