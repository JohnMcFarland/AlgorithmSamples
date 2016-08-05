#ifndef NODE_H
#define NODE_H

#include <fstream>
#include <string>
using namespace std;

class binary_tree {
public:
	class node;
	binary_tree();
	void addRoot (string &data);
	void addLeft(node *nd, string &data);
	void addRight(node *nd, string &data);
	void buildTree(int depth);

	node *getRoot();

	string get(node *node);
	bool isEmpty();

private:
	node *root;
};

struct binary_tree::node {
	node(string &data);
	string data;
	node *left, *right;
};

std::string name_to_filename(std::string name);

#endif
