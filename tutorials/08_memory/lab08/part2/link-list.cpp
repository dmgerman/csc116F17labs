#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <iomanip>


class link_node_string {
    std::string data;
    link_node_string *next;
public:
    link_node_string(std::string _st): data(_st),next(nullptr) {};
    link_node_string() {};
    link_node_string* get_next() {
        return next;
    };
    void set_next(link_node_string *n) {
        next = n;
    }
    void set(std::string _st) {
        data = _st;
    }
    std::string& get() {
        return data;
    }
};

class link_list_string {
    link_node_string *head;
    link_node_string *tail;
public:
    link_list_string() {
        head = nullptr;
        tail = nullptr;
    };
    ~link_list_string() {
        // release its memory
        while (head != nullptr) {
            auto temp = head->get_next();
            delete head;
            head = temp;
        }
    };
    bool empty() {
        return head == nullptr;
    };
    void push_back(std::string st) {

        // allocate new node, and initialize it
        link_node_string *node = new link_node_string(st);

        if (empty()) {
            tail = node;
            head = node;
        } else {
            tail->set_next(node);
            tail = node;
        }
    };

    void push_front(std::string st) {
        // allocate new node and initialize it
        link_node_string *node = new link_node_string(st);

        if (empty()) {
            tail = node;
            head = node;
        } else {
            node->set_next(head);
            head = node;
        }
    };
    
    void print() {
        // you must write this function
        // print the strings in the list, in their order
        // separate them with " -> " 

        std::cout << std::endl;
    };

    bool exists(std::string st) {
        // return true if the std::string st exists in the list
        // false otherwise

        return false;
    }

    std::string &front() {
        // retrieve the string at the front of the list
        return head->get();
    };

    std::string &back() {
        // retrieve the string at the back of the list
        return tail->get();
    };

};


int main()
{

    link_list_string list;

    std::string line;
    // read one string at a time and insert at the end of the list
    while (getline(std::cin, line)) {
        list.push_back(line);
    }

    std::cout << "Capitals:" << std::endl;

    list.print();

    std::cout << std::endl;

    std::cout << std::boolalpha << "is Ottawa in the list? "    << list.exists("Ottawa") << std::endl;
    std::cout << std::boolalpha << "is Brazilia in the list? "  << list.exists("Brazilia") << std::endl;

    // Let us test an empty list

    link_list_string emptyList;
    
    std::cout << "Print empty list:" << std::endl;

    emptyList.print();

    std::cout << std::boolalpha << "is anything in the list? "    << list.exists("") << std::endl;


}

