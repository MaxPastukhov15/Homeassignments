#include <iostream>
#include <string>
int main(){
    //get string 
    std::string inp;//input
    std::cout << "Write expression: ";
    std::getline(std::cin,inp);
    //making stack
    const int maxs=50;//max elements in stack
    double* stack=new double[maxs];
    int stpointer=-1;// pointer to the top of stack
    auto p=0;//position
    //put values in stack
    while(p<inp.size()){
         // miss space
         if (inp[p]==' '){
            p++;
            continue;
         }
         //if we find operator 
         else if(inp[p]=='+' || inp[p]=='-' || inp[p]=='*' || inp[p]=='/'){
             //if wrote only one operator and oprerand  or just operand 
             if(stpointer<1){
              std::cerr << "Not enough operations or operators" << std::endl;
              delete[] stack;
              return 1;
             }
             //got numbers
             double n2= stack[stpointer--];
             double n1= stack[stpointer--];
             // created res
             double res;
             // choosing operator form list for calculus
             switch(inp[p]){
      		case '*':
       			res=n1*n2;
       			break;
      		case '/':
      		        if (n2==0){
      		           std::cerr << "division on 0 is barred" << std::endl;
      		           delete[] stack;
      		           return 1;
      		        }
        		res=n1/n2;
        		break;
      		case '+':
        		res=n1+n2;
        		break;
      		case '-':
        		res=n1-n2;
        		break;
            }
            // putting res to stack
            stack[++stpointer]=res;
            p++;
       }
       //that's  number
       else{ 
       double num=0;
       //getting all digits
       while(p< inp.size() && isdigit(inp[p])){
       num=num*10+(inp[p]-'0');
       p++;
       }
       // put num in stack
       stack[++stpointer]=num;
       }
   }
   // getting res
   if (stpointer==0){
      std::cout<< "result: " << stack[0]<<std::endl;
   }
   else{
     std::cerr<< "wrong expression" << std::endl;
   }
   //free storage
   delete[] stack;
   return 0;   
}
