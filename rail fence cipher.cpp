/*
 FCAI - Programing 1 - 2022 - Assignment 2
 Program name : rail fence cipher.cpp
 Program Description : to cipher message by rail fence method
 Last Modification : 23\ 3\ 2022
 Author and ID : Hadeer Abdelnasser , ID:20211109
 Teaching Assistant :
 Purpose : cipher messages to cyper security
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string message;
    vector<char> cipher1;
    vector<char> cipher2;
    vector<char> decipher1;
    vector<char> decipher2;
    cout << "Ahlan ya user ya habibi.\n";
    cout << "what do you like to do today ? \n";
    cout << "1- Cipher a message \n";
    cout << "2- Decipher a message \n";
    cout << "3- End \n";
    cout << "please, Enter the message to cipher :\n"; //in key2
    getline(cin, message);
    message.erase(remove(message.begin(), message.end(), ' '), message.end());
    //remove spaces in message
    int i = 0;
    for (; i < message.length(); i++) {
        if (i % 2 == 0) {
            cipher1.push_back(message[i]);
            cout << message[i] << ' ' << '.' << ' ';  //print the first part of cipher message
        }
    }
    cout << endl;
    int j = 0;
    for (; j < message.length(); j++) {
        if (j % 2 != 0) {
            cipher2.push_back(message[j]);
            cout << message[j] << ' ' << '.' << ' ';  //print the second part of cipher message
        }
    }
    cout << endl;
    cout << "cipher message : ";
    int s = 0;
    for (; s < cipher1.size(); ++s) {
        decipher1.push_back(cipher1[s]);
        cout << cipher1[s];
    }


    int n = 0;
    for (; n < cipher2.size(); ++n) {
        decipher2.push_back(cipher2[n]);
        cout << cipher2[n];
    }

    cout << endl;
    cout << "The first part of decipher message: \n";
    int h = 0;
    for (; h < cipher1.size(); h++) {
        cout << decipher1[h] << ' ';
    }
    cout << endl;
    cout << "The second part of decipher message: \n";
    int z = 0;
    for (; z < cipher2.size(); z++) {
        cout << decipher2[z] << ' ';
    }
    cout << endl;
    cout << "Message after decipher : \n ";
    for (int l = 0, k = 0; l <= cipher1.size() and k <= cipher2.size(); ++k, l++) {
        cout << decipher1[l] << decipher2[k];
    }
    cout << endl;

}
