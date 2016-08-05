#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "node.h"

using namespace std;

binary_tree::binary_tree(): root(0){}

void binary_tree::addRoot(string &data) {root = new node(data);}

void binary_tree::addLeft(node *nd, string &data) {
    if (nd == 0) throw "Attempt addLeft on null";
    if (nd->left != 0) throw "Attempt addLeft on nd with existing left child";
    nd->left = new node(data);
}

void binary_tree::addRight(node *nd, string &data) {
    if (nd == 0) throw "Attempt addRight on null";
    if (nd->right != 0) throw "Attempt addRight on nd with existing right child";
    nd->right = new node(data);
}

void binary_tree::buildTree(int depth){
	//create root with random int
	//add left
	//check if i+1 == depth
	//if i+1 != depth, go to left child and start fresh
	//if i+1 == depth, add right child, pop up one, and 
	//continue until tree is full

	//use stringstreams to convert int to string

}


bool binary_tree::isEmpty() {return root == 0;}

binary_tree::node::node(string &data) : data(data), left(0), right(0) {}
