#include <iostream>
#include <string>
using namespace std;

string caesarEncrypt(const string& text, int shift) {
    string encrypted = "";
    for (char c : text) {
        encrypted += static_cast<char>((static_cast<unsigned char>(c) + shift) % 256);}
   return encrypted;
}
string caesarDecrypt(const string& text, int shift) {
    string decrypted = "";
    for (char c : text) {
        decrypted += static_cast<char>((static_cast<unsigned char>(c) - shift + 256) % 256);}
    return decrypted;
}
int main() {
    const int shiftKey = 3;
    string password;
    cout << "Enter password: ";
    getline(cin, password);
    string encryptedPassword = caesarEncrypt(password, shiftKey);
    cout << "Encrypted password: " << encryptedPassword << endl;
    string decryptedPassword = caesarDecrypt(encryptedPassword, shiftKey);
    cout << "Decrypted password: " << decryptedPassword << endl;
    return 0;
}
