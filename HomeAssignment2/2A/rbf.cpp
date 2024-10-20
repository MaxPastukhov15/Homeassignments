#include <iostream>
#include <fstream>
#include <filesystem>
int main(){
     //open file
     std::ifstream infile("bf.bin",std::ios::binary);
     if(infile.bad()){
       std::cerr<<"no file"<<std::endl;
       return 1;
     }
     //size file
     auto fsize=std::filesystem::file_size("bf.bin");
     //give storage
     char* buffer=new char[fsize];
     //read file to vector
     infile.read(buffer,fsize);
     infile.close();
     //reverse
     for(auto i=0;i<fsize/2;i++){
     std::swap(buffer[i],buffer[fsize-1-i]);
     }
     //write in new file
     std::ofstream outfile("tempbin.bin",std::ios::binary);
     outfile.write(buffer,fsize);
     outfile.close();
     //free storage 
     delete[] buffer;
     //work is done
     std::cout<< "work is done" << std::endl;
}

