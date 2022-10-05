#include <iostream>
#include "stack.hpp"
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char** argv){
    int error=0;
    Stack stack;
    Stack stack_aux;
    string name ="ejemplo.html";
    ifstream file(name);
    string line;
    int len;
    while (getline(file,line)){

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
        
        if (line.find("</body>") !=string::npos){
            bool body=false;
            Node* node = new Node(stack.top()->getData());
            if (node->getData()=="<body>"){
                cout<<"tag <body> OK"<<endl;
                stack.pop();
            }
            else {
                while (stack.isEmpty()==0){
                    Node* node_aux = new Node(stack.top()->getData());
                    string val=node_aux->getData();
                    if (node_aux->getData()=="<body>"){
                        cout<<"tag <body> NOT OK: tag mal cerrado"<<endl;
                        stack.pop();
                        body=true;
                        error++;
                        break;
                    }
                    else {
                        stack_aux.push(val);
                        stack.pop();
                    }
                    if (stack.isEmpty()==1){
                        if (body==false){
                            cout<<"tag <body> NOT OK: se intenta cerrar tag que no existe"<<endl;
                            error++;
                        }
                    }
                    delete node_aux;
                }
                while (stack_aux.isEmpty()==0){
                    Node* node_aux = new Node(stack_aux.top()->getData());
                    string val = node_aux->getData();
                    stack.push(val);
                    stack_aux.pop();
                    delete node_aux;
                }
            }
            delete node;
        }

        if (line.find("</h1>") !=string::npos){
            bool h1=false;
            Node* node = new Node(stack.top()->getData());
            if (node->getData()=="<h1>"){
                cout<<"tag <h1> OK"<<endl;
                stack.pop();
            }
            else {
                while (stack.isEmpty()==0){
                    Node* node_aux = new Node(stack.top()->getData());
                    string val=node_aux->getData();
                    if (node_aux->getData()=="<h1>"){
                        cout<<"tag <h1> NOT OK: tag mal cerrado"<<endl;
                        stack.pop();
                        h1=true;
                        error++;
                        break;
                    }
                    else {
                        stack_aux.push(val);
                        stack.pop();
                    }
                    if (stack.isEmpty()==1){
                        if (h1==false){
                            cout<<"tag <h1> NOT OK: se intenta cerrar tag que no existe"<<endl;
                            error++;
                        }
                    }
                    delete node_aux;
                }

                while (stack_aux.isEmpty()==0){
                    Node* node_aux = new Node(stack_aux.top()->getData());
                    string val = node_aux->getData();
                    stack.push(val);
                    stack_aux.pop();
                    delete node_aux;
                }
            }
            delete node;
        }

        if (line.find("</p>") !=string::npos){
            bool p = false;
            Node* node = new Node(stack.top()->getData());
            if (node->getData()=="<p>"){
                cout<<"tag <p> OK"<<endl;
                stack.pop();
            }
            else {
                while (stack.isEmpty()==0){
                    Node* node_aux = new Node(stack.top()->getData());
                    string val=node_aux->getData();
                    if (node_aux->getData()=="<p>"){
                        cout<<"tag <p> NOT OK: tag mal cerrado"<<endl;
                        stack.pop();
                        p=true;
                        error++;
                        break;
                    }
                    else {
                        stack_aux.push(val);
                        stack.pop();
                    }
                    if (stack.isEmpty()==1){
                        if (p==false){
                            cout<<"tag <p> NOT OK: se intenta cerrar tag que no existe"<<endl;
                            error++;
                        }
                    }
                    delete node_aux;
                }
                while (stack_aux.isEmpty()==0){
                    Node* node_aux = new Node(stack_aux.top()->getData());
                    string val = node_aux->getData();
                    stack.push(val);
                    stack_aux.pop();
                    delete node_aux;
                }
            }
            delete node;
        }

        if (line.find("</ol>") !=string::npos){
            bool ol = false;
            Node* node = new Node(stack.top()->getData());
            if (node->getData()=="<ol>"){
                cout<<"tag <ol> OK"<<endl;
                stack.pop();
            }
            else {
                while (stack.isEmpty()==0){
                    Node* node_aux = new Node(stack.top()->getData());
                    string val=node_aux->getData();
                    if (node_aux->getData()=="<ol>"){
                        cout<<"tag <ol> NOT OK: tag mal cerrado"<<endl;
                        stack.pop();
                        error++;
                        ol = true;
                        break;
                    }
                    else {
                        stack_aux.push(val);
                        stack.pop();
                    }
                    if (stack.isEmpty()==1){
                        if (ol==false){
                            cout<<"tag <ol> NOT OK: se intenta cerrar tag que no existe"<<endl;
                            error++;
                        }
                    }
                    delete node_aux;
                }
                while (stack_aux.isEmpty()==0){
                    Node* node_aux = new Node(stack_aux.top()->getData());
                    string val = node_aux->getData();
                    stack.push(val);
                    stack_aux.pop();
                    delete node_aux;
                }
            }
            delete node;
        }

        if (line.find("</li>") !=string::npos){
            bool li = false;
            Node* node = new Node(stack.top()->getData());
            if (node->getData()=="<li>"){
                cout<<"tag <li> OK"<<endl;
                stack.pop();
            }
            else {
                while (stack.isEmpty()==0){
                    Node* node_aux = new Node(stack.top()->getData());
                    string val=node_aux->getData();
                    if (node_aux->getData()=="<li>"){
                        cout<<"tag <li> NOT OK: tag mal cerrado"<<endl;
                        stack.pop();
                        li = true;
                        error++;
                        break;
                    }
                    else {
                        stack_aux.push(val);
                        stack.pop();
                    }
                    if (stack.isEmpty()==1){
                        if (li==false){
                            cout<<"tag <li> NOT OK: se intenta cerrar tag que no existe"<<endl;
                            error++;
                        }
                    }
                    delete node_aux;
                }
                while (stack_aux.isEmpty()==0){
                    Node* node_aux = new Node(stack_aux.top()->getData());
                    string val = node_aux->getData();
                    stack.push(val);
                    stack_aux.pop();
                    delete node_aux;
                }
            }
            delete node;
        }

        if (line.find("</center>") !=string::npos){
            bool center = false;
            Node* node = new Node(stack.top()->getData());
            if (node->getData()=="<center>"){
                cout<<"tag <center> OK"<<endl;
                stack.pop();
            }
            else {
                while (stack.isEmpty()==0){
                    Node* node_aux = new Node(stack.top()->getData());
                    string val=node_aux->getData();

                    if (node_aux->getData()=="<center>"){
                        cout<<"tag <center> NOT OK: tag mal cerrado"<<endl;
                        stack.pop();
                        center = true;
                        error++;
                        break;
                    }
                    else {
                        stack_aux.push(val);
                        stack.pop();
                    }
                    if (stack.isEmpty()==1){
                        if (center==false){
                            cout<<"tag <center> NOT OK: se intenta cerrar tag que no existe"<<endl;
                            error++;
                        }
                    }
                    delete node_aux;
                }
                while (stack_aux.isEmpty()==0){
                    Node* node_aux = new Node(stack_aux.top()->getData());
                    string val = node_aux->getData();
                    stack.push(val);
                    stack_aux.pop();
                    delete node_aux;
                }
            }
            delete node;
        }

        }
    while (stack.isEmpty()!=1){
        Node* nodef = new Node(stack.top()->getData());
        cout<<"tag "<<nodef->getData()<<" NOT OK: tag no esta cerrado"<<endl;
        stack.pop();
        error++;
        delete nodef;
    }
    cout<<error<<" Errores."<<endl;
    return 0;
}

