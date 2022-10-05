#include <iostream>
#include "stack.hpp"
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char** argv){
    Stack stack;
    Stack stack_aux;
    string name ="ejemplo.html";
    ifstream file(name);
    string line;
    int len;
    while (getline(file,line)){
        Node* node;
        if (line.find("<body>") != string::npos){
            stack.push("<body>");
            }
        if (line.find("<p>") !=string::npos){
            stack.push("<p>");
            }
        if (line.find("<h1>") !=string::npos){
            stack.push("<h1>");
            }
        if (line.find("<ol>") !=string::npos){
            stack.push("<ol>");
            }
        if (line.find("<li>") !=string::npos){
            stack.push("<li>");
            }
        if (line.find("<center>") !=string::npos){
            stack.push("<center>");
            }
        

        /*if (line.find("</body>") != string::npos){
                node=stack.top();
                cout<<node->getData()<<endl;
                if (node->getData()=="<body>"){
                    stack.pop();
                    cout<<"tag <body> ok"<<endl;
                }
            }
        if (line.find("</p>") !=string::npos){
                node=stack.top();
                if (node->getData()=="<p>"){
                    stack.pop();
                    cout<<"tag <p> ok"<<endl;
                }
            }
        if (line.find("</h1>") !=string::npos){
                node=stack.top();
                if (node->getData()=="<h1>"){
                    stack.pop();
                    cout<<"tag <h1> ok"<<endl;
                }
                else {
                    stack.pop();
                    cout<<"tag <h1> not ok"<<endl;
                }
            }
        if (line.find("</ol>") !=string::npos){
            node=stack.top();
                if (node->getData()=="<ol>"){
                    stack.pop();
                    cout<<"tag <ol> ok"<<endl;
                }
            }
        if (line.find("</li>") !=string::npos){
            node=stack.top();
                if (node->getData()=="<li>"){
                    stack.pop();
                    cout<<"tag <li> ok"<<endl;
                }
            }
        if (line.find("</center>") !=string::npos){
            node=stack.top();
                if (node->getData()=="<center>"){
                    stack.pop();
                    cout<<"tag <center> ok"<<endl;
                }
            }
        */
        }
    int i =0;
    cout<<"hola"<<endl;
    while (stack.isEmpty()==0){
        stack_aux.push_2(stack.top());
        cout<<i<<endl;
        i++;
        if (i==3){
            break;
        }
        stack.pop();
    }
    cout<<"Empty???"<<endl;
    cout<<stack.isEmpty()<<endl;
    return 0;
}

