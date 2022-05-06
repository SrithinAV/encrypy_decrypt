#include<iostream>
#include<fstream>
#include<cstring>
#include <bits/stdc++.h>
#include <ctime>
#include <set>
#include <random>
using namespace std;

char encrypt(char alpha)
{
 switch(alpha)
    {
        case 'A':return '`';
        break;
        case 'a':return '~';
        break;
        case 'B':return '1';
        break;
        case 'b':return '!';
        break;
        case 'C':return '2';
        break;
        case 'c':return '@';
        break;
        case 'D':return '3';
        break;
        case 'd':return '#';
        break;
        case 'E':return '4';
        break;
        case 'e':return '$';
        break;
        case 'F':return '5';
        break;
        case 'f':return '%';
        break;
        case 'G':return '6';
        break;
        case 'g':return '^';
        break;
        case 'H':return '7';
        break;
        case 'h':return '&';
        break;
        case 'I':return '8';
        break;
        case 'i':return '*';
        break;
        case 'J':return '9';
        break;
        case 'j':return '(';
        break;
        case 'K':return '0';
        break;
        case 'k':return ')';
        break;
        case 'L':return '-';
        break;
        case 'l':return '_';
        break;
        case 'M':return '=';
        break;
        case 'm':return '+';
        break;
        case 'N':return '|';
        break;
        case 'n':return ']';
        break;
        case 'O':return '}';
        break;
        case 'o':return '[';
        break;
        case 'P':return '{';
        break;
        case 'p':return ';';
        break;
        case 'Q':return ':';
        break;
        case 'q':return '"';
        break;
        case 'R':return '?';
        break;
        case 'r':return '/';
        break;
        case 'S':return '.';
        break;
        case 's':return '>';
        break;
        case 'T':return '<';
        break;
        case 't':return ',';
        break;
        case 'U':return 'a';
        break;
        case 'u':return 'b';
        break;
        case 'V':return 'c';
        break;
        case 'v':return 'd';
        break;
        case 'W':return 'e';
        break;
        case 'w':return 'f';
        break;
        case 'X':return 'g';
        break;
        case 'x':return 'h';
        break;
        case 'Y':return 'i';
        break;
        case 'y':return 'j';
        break;
        case 'Z':return 'k';
        break;
        case 'z':return 'l';
        break;
        case '1':return 'm';
        break;
        case '2':return 'n';
        break;
        case '3':return 'o';
        break;
        case '4':return 'p';
        break;
        case '5':return 'q';
        break;
        case '6':return 'r';
        break;
        case '7':return 's';
        break;
        case '8':return 't';
        break;
        case '9':return 'u';
        break;
        case '0':return 'x';
        break;
        case ' ': return 'Q';
        break;
        case '.': return 'R';
        break;
        case '\'':return 'S';
        break;
        case '"': return 'T';
        break;
        case ',': return 'U';
        break;
        case '?': return 'V';
        break;
        case ':': return 'W';
        break;
        case '_': return 'X';
        break;
        case '/': return 'Y';
        break;
        case '\\': return 'Z';
        break;
        case ';' : return 'A';
        break;
        case '!': return 'D';
        default:cout<<"Invalid Character '"<<alpha<<"'"<<endl;
    }
    return NULL; 
                 
}
char decrypt(char readdata)
{
   switch(readdata)
    {
        case '`':return 'A';
        break;
        case '~':return 'a';
        break;
        case '1':return 'B';
        break;
        case '!':return 'b';
        break;
        case '2':return 'C';
        break;
        case '@':return 'c';
        break;
        case '3':return 'D';
        break;
        case '#':return 'd';
        break;
        case '4':return 'E';
        break;
        case '$':return 'e';
        break;
        case '5':return 'F';
        break;
        case '%':return 'f';
        break;
        case '6':return 'G';
        break;
        case '^':return 'g';
        break;
        case '7':return 'H';
        break;
        case '&':return 'h';
        break;
        case '8':return 'I';
        break;
        case '*':return 'i';
        break;
        case '9':return 'J';
        break;
        case '(':return 'j';
        break;
        case '0':return 'K';
        break;
        case ')':return 'k';
        break;
        case '-':return 'L';
        break;
        case '_':return 'l';
        break;
        case '=':return 'M';
        break;
        case '+':return 'm';
        break;
        case '|':return 'N';
        break;
        case ']':return 'n';
        break;
        case '}':return 'O';
        break;
        case '[':return 'o';
        break;
        case '{':return 'P';
        break;
        case ';':return 'p';
        break;
        case ':':return 'Q';
        break;
        case '"':return 'q';
        break;
        case '?':return 'R';
        break;
        case '/':return 'r';
        break;
        case '.':return 'S';
        break;
        case '>':return 's';
        break;
        case '<':return 'T';
        break;
        case ',':return 't';
        break;
        case 'a':return 'U';
        break;
        case 'b':return 'u';
        break;
        case 'c':return 'V';
        break;
        case 'd':return 'v'; 
        break;
        case 'e':return 'W';
        break;
        case 'f':return 'w';
        break;
        case 'g':return 'X';
        break;
        case 'h':return 'x';
        break;
        case 'i':return 'Y';
        break;
        case 'j':return 'y';
        break;
        case 'k':return 'Z';
        break;
        case 'l':return 'z';
        break;
        case 'm':return '1';
        break;
        case 'n':return '2';
        break;
        case 'o':return '3';
        break;
        case 'p':return '4';
        break;
        case 'q':return '5';
        break;
        case 'r':return '6';
        break;
        case 's':return '7';
        break;
        case 't':return '8';
        break;
        case 'u':return '9';
        break;
        case 'x':return '0';
        break;
        case 'Q': return ' ';
        break;
        case 'R': return '.';
        break;
        case 'S':return '\'';
        break;
        case 'T': return '"';
        break;
        case 'U': return ',';
        break;
        case 'V': return '?';
        break;
        case 'W': return ':';
        break;
        case 'X': return '_';
        break;
        case 'Y': return '/';
        break;
        case 'Z': return '\\';
        break;
        case 'A': return ';';
        break;
        case 'D': return '!';
        break;
    }
    return NULL; 
}
void write(char encrypt_datas[], int total_line)
{
  int j=0;
  fstream write_;
  write_.open("encryptfile.txt", ios::out | ios::in | ios::app);
  if(write_.is_open())
  {    
      while(j<=total_line){
       write_<<encrypt_datas[j];
       j++;
      }
      write_<<endl;
  }
}
void data_entry(){
    cin.ignore();
    string Write;
    int lines;
     cout<<"Enter the data"<<endl;
       getline(cin, Write);
 int n = Write.length(); 
 char write_data[n + 1];
 char encrypted_data[n + 1];
 strcpy(write_data, Write.c_str()); //convert string to char by copying.
 for(int i=0; i<n; i++)
 encrypted_data[i] = encrypt(write_data[i]); // call the function iterativily, Function return corresponding character and store to corresponding index.
 write(encrypted_data, n); // function to write into file.
 char choice;
   cout<<"DO you need multiple lines (y/n)"<<endl;
   cin>>choice;
     if(choice == 'y' || choice == 'Y')
      { 
              
       cout<<"Enter number of lines ";
       cin>>lines;
       cin.ignore();
          for(int i = 0;i<lines;i++) // used the loop for multiple lines of writing.
         {
            cout<<"Enter the data"<<endl;
            getline(cin, Write);
            int q = Write.length(); 
            char write_data[q + 1];
            char encrypted_data[q + 1];
            strcpy(write_data, Write.c_str()); //convert string to char by copying.
            for(int i=0; i<q; i++)
            encrypted_data[i] = encrypt(write_data[i]); // call the function iterativily, Function return corresponding character and store to corresponding index.
            write(encrypted_data, q); // function to write into file.
       } 
   }
 }

void data_read(string read_)
{

    int r = read_.length();
    char read_datas[r + 1];
    char encrypted_read[r + 1];
    strcpy(read_datas, read_.c_str()); // convert string to char and give it to convert function.
    for(int i =0; i<r; i++)
    encrypted_read[i] = decrypt(read_datas[i]);
    for(int i =0;i<r-1;i++)                     
    cout<<encrypted_read[i];
    cout<<endl;

}
void read()
{
  fstream read_;
  read_.open("encryptfile.txt", ios::out | ios::in | ios::app);
  if(read_.is_open()){
      string read_data;
      while(getline(read_, read_data))
      {
         data_read(read_data);
      }
  }
}
void convert_data(string converting_data, string Filename)
{  
  int flag =0;
   string convertedfilename;
   int r = converting_data.length();
    char read_datas[r + 1];
    char encrypted_read[r + 1];
    strcpy(read_datas, converting_data.c_str()); // convert string to char and give it to convert function.
    for(int i =0; i<r; i++)
    encrypted_read[i] = encrypt(read_datas[i]);
   convertedfilename = Filename+"encrypted.txt";

   fstream writefile;
   writefile.open(convertedfilename, ios::out | ios::app);
   if(writefile.is_open())
   {
     for(int i =0; i<r; i++)
     writefile << encrypted_read[i];
     writefile<<endl;
     flag =1;
   }
   if(flag == 1)
   cout<<"Encrypted succesfully."<<endl;
   else
   cout<<"Encryption Unsuccesfull."<<endl;

   
}
void convert()
{ 
  cin.ignore();
  int count = 0;
  string filename;
  string filenametxt;
  cout<<"Enter the file name"<<endl;
  getline(cin, filename);
  filenametxt = filename +".txt";
  fstream file;
  file.open(filenametxt, ios::in);
  if(file.is_open())
  {
    string data;
    while(getline(file, data))
    {
      convert_data(data, filename);
    }
  }
  else
  cout<<"File not found"<<endl;

}
void convert_back_data(string data, string filename)
{  
   string convertedfilename;
   int r = data.length();
    char read_datas[r + 1];
    char decrypted_read[r + 1];
    strcpy(read_datas, data.c_str()); // convert string to char and give it to convert function.
    for(int i =0; i<r; i++)
    decrypted_read[i] = decrypt(read_datas[i]);
   convertedfilename = filename+"decrypted.txt";

   fstream writefile;
   writefile.open(convertedfilename, ios::out | ios::app);
   if(writefile.is_open())
   {
     for(int i =0; i<r; i++)
     writefile << decrypted_read[i];
     writefile<<endl;
   }
  
   
}
void convert_back()
{
   cin.ignore();
   int flag =0;
  string filename;
  string filenametxt;
  cout<<"Enter the file name"<<endl;
  getline(cin, filename);
  filenametxt = filename +".txt";
  fstream file;
  file.open(filenametxt, ios::in);
  if(file.is_open())
  {
    string data;
    while(getline(file, data))
    {
      convert_back_data(data, filename);
    }
     cout<<"Decrypted succesfully."<<endl;
     flag =1;
  }
  else
  {
  if(flag == 0)
  cout<<"Decryption Unsuccesfull."<<endl;
  cout<<"File not found"<<endl;
  }
}
class key_encrypt_decrypt{
  public:
  string store_key,store_encrypt_key,default_key;
  string filename;
    string filenamtxt;
  int flags = 0;
    int line_no =0;
char encrypt_key(char keys)
{
   string key = store_key;
  int n = key.length();
  char key_char[n +1];
  strcpy(key_char, key.c_str());
  switch(keys)
  {
      case 'A':return key_char[0];
        break;
        case 'a':return key_char[1];
        break;
        case 'B':return key_char[2];
        break;
        case 'b':return key_char[3];
        break;
        case 'C':return key_char[4];
        break;
        case 'c':return key_char[5];
        break;
        case 'D':return key_char[6];
        break;
        case 'd':return key_char[7];
        break;
        case 'E':return key_char[8];
        break;
        case 'e':return key_char[9];
        break;
        case 'F':return key_char[10];
        break;
        case 'f':return key_char[11];
        break;
        case 'G':return key_char[12];
        break;
        case 'g':return key_char[13];
        break;
        case 'H':return key_char[14];
        break;
        case 'h':return key_char[15];
        break;
        case 'I':return key_char[16];
        break;
        case 'i':return key_char[17];
        break;
        case 'J':return key_char[18];
        break;
        case 'j':return key_char[19];
        break;
        case 'K':return key_char[20];
        break;
        case 'k':return key_char[21];
        break;
        case 'L':return key_char[22];
        break;
        case 'l':return key_char[23];
        break;
        case 'M':return key_char[24];
        break;
        case 'm':return key_char[25];
        break;
        case 'N':return key_char[26];
        break;
        case 'n':return key_char[27];
        break;
        case 'O':return key_char[28];
        break;
        case 'o':return key_char[29];
        break;
        case 'P':return key_char[30];
        break;
        case 'p':return key_char[31];
        break;
        case 'Q':return key_char[32];
        break;
        case 'q':return key_char[33];
        break;
        case 'R':return key_char[34];
        break;
        case 'r':return key_char[35];
        break;
        case 'S':return key_char[36];
        break;
        case 's':return key_char[37];
        break;
        case 'T':return key_char[38];
        break;
        case 't':return key_char[39];
        break;
        case 'U':return key_char[40];
        break;
        case 'u':return key_char[41];
        break;
        case 'V':return key_char[42];
        break;
        case 'v':return key_char[43];
        break;
        case 'W':return key_char[44];
        break;
        case 'w':return key_char[45];
        break;
        case 'X':return key_char[46];
        break;
        case 'x':return key_char[47];
        break;
        case 'Y':return key_char[48];
        break;
        case 'y':return key_char[49];
        break;
        case 'Z':return key_char[50];
        break;
        case 'z':return key_char[51];
        break;
        case '1':return key_char[52];
        break;
        case '2':return key_char[53];
        break;
        case '3':return key_char[54];
        break;
        case '4':return key_char[55];
        break;
        case '5':return key_char[56];
        break;
        case '6':return key_char[57];
        break;
        case '7':return key_char[58];
        break;
        case '8':return key_char[59];
        break;
        case '9':return key_char[60];
        break;
        case '0':return key_char[61];
        break;
        case ' ':return key_char[62];
        break;
        case '.':return key_char[63];
        break;
        case '\'':return key_char[64];
        break;
        case '"': return key_char[65];
        break;
        case ',':return key_char[66];
        break;
        case '?':return key_char[67];
        break;
        case ':':return key_char[68];
        break;
        case '_':return key_char[69];
        break;
        case '/':return key_char[70];
        break;
        case '\\':return key_char[71];
        break;
        case ';' :return key_char[72];
        break;
        case '!':return key_char[73];
        break;
        case '{':return key_char[74];
        break;
        case '}':return key_char[75];
        break;
        case '[':return key_char[76];
        break;
        case ']':return key_char[77];
        break;
        case '|':return key_char[78];
        break;
        case '-':return key_char[79];
        break;
        case '+':return key_char[80];
        break;
        case '=':return key_char[81];
        break;
        case ')':return key_char[82];
        break;
        case '(' :return key_char[83];
        break;
        case '*':return key_char[84];
        break;
        case '&':return key_char[85];
        break;
        case '^':return key_char[86];
        break;
        case '%':return key_char[87];
        break;
        case '$':return key_char[88];
        break;
        case '#':return key_char[89];
        break;
        case '@':return key_char[90];
        break;
        case '~':return key_char[91];
        break;
        case '`':return key_char[92];
        break;
        case '<':return key_char[93];
        break;
        case '>':return key_char[94];
        break;
        default:cout<<"Invalid Character '"<<keys<<"'"<<endl;
  }
  return NULL;
}

void input_key()
{
  
  string filename;
  string filenametxt;
  cout<<"Enter the key name"<<endl;
  getline(cin, filename);
  filenametxt = filename+".txt";
  fstream file;
  file.open(filenametxt, ios::in);
  if(file.is_open())
  {
     while(getline(file, store_key));
  }
  else
  cout<<"Key not found"<<endl;

}
void input_decrypt_key()
{
  fstream file;
  file.open("defaultdecrypter.txt", ios::in);
  if(file.is_open())
  {
     while(getline(file, default_key));
  }
  else
  cout<<"Key not found"<<endl;
}
 
 void call_encrypt()
 {  cin.ignore();
    input_key();
    string Write_key;
    int lines;
     cout<<"Enter the data"<<endl;
       getline(cin, Write_key);
 int n = Write_key.length(); 
 char write_data_key[n + 1];
 char encrypted_data_key[n + 1];
 strcpy(write_data_key, Write_key.c_str()); //convert string to char by copying.
 for(int i=0; i<n; i++)
 encrypted_data_key[i] = encrypt_key(write_data_key[i]); // call the function iterativily, Function return corresponding character and store to corresponding index.
 write(encrypted_data_key, n); // function to write into file.
 char choice;
   cout<<"DO you need multiple lines (y/n)"<<endl;
   cin>>choice;
     if(choice == 'y' || choice == 'Y')
      { 
              
       cout<<"Enter number of lines ";
       cin>>lines;
       cin.ignore();
          for(int i = 0;i<lines;i++) // used the loop for multiple lines of writing.
         {
            cout<<"Enter the data"<<endl;
            getline(cin, Write_key);
            int q = Write_key.length(); 
            char write_data[q + 1];
            char encrypted_data[q + 1];
            strcpy(write_data, Write_key.c_str()); //convert string to char by copying.
            for(int i=0; i<q; i++)
            encrypted_data[i] = encrypt_key(write_data[i]); // call the function iterativily, Function return corresponding character and store to corresponding index.
            write(encrypted_data, q); // function to write into file.
       } 
   }
 }
  char decrypt__key(char keys)
{ 
  
  string key = default_key;
   int n = key.length();
   //int num = keys.length();
  char key_char[n +1], encryptkey[n + 1];
  strcpy(key_char, key.c_str());
  strcpy(encryptkey,store_encrypt_key.c_str());
  //strcpy(files, keys.c_str());
  
  for(int i =0; i<=n;i++)
  {
    if(keys==encryptkey[i])
    return key_char[i];
  }
  return NULL;
 
}

 void call_decrypt(string read_datas_key)
 {  
    fstream writefile;
     int r = read_datas_key.length();
     char ch;
     int flag = 0;
    char read_datas[r + 1];
    char encrypted_read[r + 1];
    strcpy(read_datas, read_datas_key.c_str()); // convert string to char and give it to convert function.
    for(int i =0; i<r; i++)
    encrypted_read[i] = decrypt__key(read_datas[i]);
    for(int i =0;i<r;i++)                      
    cout<<encrypted_read[i];
    cout<<endl;
    
 }
 void read_key()
{ 
  cin.ignore();
  string filenames;
  string filenamestxt;
  cout<<"Enter the key used to encrypt this file"<<endl;
  getline(cin, filenames);
  filenamestxt = filenames+".txt";
  fstream file;
  file.open(filenamestxt, ios::in);
  if(file.is_open())
  {
     while(getline(file, store_encrypt_key));
  }
  else
  cout<<"Key not found"<<endl;
  input_decrypt_key();
  string filename;
  string filenametxt;
  cout<<"Enter the file name"<<endl;
  getline(cin, filename);
  filenametxt = filename+".txt";
  fstream read_;
  read_.open(filenametxt, ios::out | ios::in | ios::app);
  if(read_.is_open()){
      string read_data;
      while(getline(read_, read_data))
      {
         call_decrypt(read_data);
         flags =1;
      }
  }
}
void encrypt_into_file(string converting_data, string Filename)
{
   int flag =0;
   string convertedfilename;
   int r = converting_data.length();
    char read_datas[r + 1];
    char encrypted_read[r + 1];
    strcpy(read_datas, converting_data.c_str()); // convert string to char and give it to convert function.
    for(int i =0; i<r; i++)
    encrypted_read[i] = encrypt_key(read_datas[i]);
   convertedfilename = Filename+"encrypted.txt";

   fstream writefile;
   writefile.open(convertedfilename, ios::out | ios::app);
   if(writefile.is_open())
   {
     for(int i =0; i<r; i++)
     writefile << encrypted_read[i];
     writefile<<endl;
     flag =1;
     line_no++;
   }
   if(flag == 1)
   cout<<"line no:"<<line_no<<" Encrypted succesfully"<<endl;
   else
   cout<<"Encryption Unsuccesfull."<<endl;
}
void into_file(){
  cin.ignore();
  input_key();
  int count = 0;
  string filename;
  string filenametxt;
  cout<<"Enter the file name"<<endl;
  getline(cin, filename);
  filenametxt = filename +".txt";
  fstream file;
  file.open(filenametxt, ios::in);
  if(file.is_open())
  {
    string data;
    while(getline(file, data))
    {
      encrypt_into_file(data, filename);
    }
  }
  else
  cout<<"File not found"<<endl;
}

void decrypt_from_file(string data, string filename)
{
  string convertedfilename;
   int r = data.length();
    char read_datas[r + 1];
    char decrypted_read[r + 1];
    strcpy(read_datas, data.c_str()); // convert string to char and give it to convert function.
    for(int i =0; i<r; i++)
    decrypted_read[i] = decrypt__key(read_datas[i]);
   convertedfilename = filename+"decrypted.txt";

   fstream writefile;
   writefile.open(convertedfilename, ios::out | ios::app);
   if(writefile.is_open())
   {
     for(int i =0; i<r; i++)
     writefile << decrypted_read[i];
     writefile<<endl;
   }
}
 void from_file()
 { 
   cin.ignore();
  string filenames;
  string filenamestxt;
  cout<<"Enter the key used to encrypt this file"<<endl;
  getline(cin, filenames);
  filenamestxt = filenames+".txt";
  fstream files;
  files.open(filenamestxt, ios::in);
  if(files.is_open())
  {
     while(getline(files, store_encrypt_key));
  }
  else
  cout<<"Key not found"<<endl;
   input_decrypt_key();
   int flag =0;
  string filename;
  string filenametxt;
  cout<<"Enter the file name"<<endl;
  getline(cin, filename);
  filenametxt = filename +".txt";
  fstream file;
  file.open(filenametxt, ios::in);
  if(file.is_open())
  {
    string data;
    while(getline(file, data))
    {
      decrypt_from_file(data, filename);
    }
     cout<<"Decrypted succesfully and stored into a txt file\n\nplease check your directory.\n"<<endl;
     flag =1;
  }
  else
  {
  if(flag == 0)
  cout<<"Decryption Unsuccesfull."<<endl;
  cout<<"File not found"<<endl;
  }
 }
};
int random()
{
  srand(time(0));
  int i;
  i = (rand() % 94) + 1;
  return i;
}
void generator()
{
  int flag =0;
  string keys;
  fstream gen;
  gen.open("generator.txt", ios::in);
  if(gen.is_open())
  {
    while(getline(gen, keys))
    flag = 1;    
  }
  else{
  cout<<"The default key is missing from the current directory \nplease paste a key named 'generator.txt' with all the characters written in one single line"<<endl;
  return;
  }
  char keys_[94],temp;
  strcpy(keys_,keys.c_str());
  for(int i=0;i<89;i++)
  {  
    for(int j=0;j<92;j++)
    {
     temp = keys_[j];
     keys_[j] = keys_[j+2];
     keys_[j+2] = temp;
    }
    temp = keys_[i];
    keys_[i] = keys_[i+5];
    keys_[i+5] = temp;

  }
  string keys1;
  keys1 += keys_;
  cout<<keys1;
  fstream file,newfile;
  
  ofstream files_("generator.txt"); //Clear the old key.
  file.open("generator.txt", ios::out); //write the newly generated key.
  if(file.is_open())
  {
    file<<keys1;
  }
  file.close();
  string keyname;
  string keynametxt;
  cin.ignore();
  cout<<"\n\nEnter the name for your key  [ make sure the key name doesn't exist already ]  "<<endl;
  getline(cin, keyname);
  keynametxt = keyname +".txt";
  newfile.open(keynametxt,ios::in | ios::out | ios::app);
   if(newfile.is_open())
  {
    newfile<<keys1;
  }
  newfile.close();
  if(flag !=0){
  cout<<"\nKey generated succecfully\n\n You can use this key to encrypt your data."<<endl;
  cout<<"Please keep in mind that only '"<<keyname<<"' can decrypt your encrypted data. Please don't loose it! :)"<<endl;
  }
  else
  cout<<"\nError generating key"<<endl;
}
 
int main()
{   
  key_encrypt_decrypt keys;
    int choice;
    cout<<"Some OS depended function may not work, like pause function clear function, file read, file write etc.\nSo, please use windows OS for better experience!\nThankyou."<<endl;
    system("pause");
    system("cls");
    cout<<"Created by:Srithin A V"<<endl;
    cout<<"Instagram:srith__in\nlinkedin:Srithin A V\nGithub:SrithinAV"<<endl;
    system("pause");
    system("cls");
    cout<<"1. write [ encrypt ]"<<endl;
    cout<<"2. read  [ decrypt ]"<<endl;
    cout<<"3. encrypt a txt file"<<endl;
    cout<<"4. Decrypt a txt fle"<<endl;
    cout<<"5. encrypt by external key"<<endl;
    cout<<"6. Decrypt by external key"<<endl;
    cout<<"7. Encrypt by external key, Read from file"<<endl;
    cout<<"8. Decrypt by external key,Save to txt file"<<endl;
    cout<<"9. Key generator"<<endl;
    cout<<"\n\n S e l e c t    o p t i o n   n o:"<<endl;
    cin>>choice;
    switch(choice)
    {
      case 1:data_entry();
             break;
      case 2:read();
             break;
      case 3:convert();
             break;
      case 4:convert_back();
             break;
      case 5:cout<<"Paste your key in the current directory"<<endl;
             system("pause");
             keys.call_encrypt();
             break;
      case 6:cout<<"Paste your key in the current directory"<<endl<<"Use the same key that is used for encrypting"<<endl;
             system("pause");
             keys.read_key();
             break;
      case 7:cout<<"Paste your key in the current directory"<<endl;
             system("pause");
             keys.into_file();
             break;
      case 8:cout<<"Paste your key in the current directory"<<endl<<"Use the same key that is used for encrypting"<<endl;
             system("pause");
             keys.from_file();
             break;
      case 9:generator();
             break;
      default:cout<<"Invalid input"<<endl;
    }
    return 0;
}