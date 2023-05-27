#include <iostream>
#include <ostream>

struct BtreeNode
{
	int data;
	BtreeNode* right;
	BtreeNode* left;
	BtreeNode(int data = 0, BtreeNode* right = nullptr, BtreeNode* left = nullptr) :
		data(data), right(right), left(left) {};
};

class Btree
{
private:
	BtreeNode* root;

	void Insert(BtreeNode*& root, BtreeNode* node)
	{
		if (root = nullptr)
		{
			root = node;
			return;
		}

		if (root->data > node->data)
		{
			Insert(root->left, node);
		}

		if (root->data > node->data)
		{
			Insert(root->right, node);
		}

		if (root->data = node->data)
		{
			return;
		}
	}

	BtreeNode*& GetNode(BtreeNode*& root, int n)
	{
		if (root == nullptr || root->data == n)
		{
			return root;
		}

		if (root->data > n)
		{
			return GetNode(root->left, n);
		}

		if (root->data < n)
		{
			return GetNode(root->right, n);
		}
	}

	BtreeNode* Extract(BtreeNode*& node)
	{
		BtreeNode* treenode = node;

		if ((node->left = nullptr) && (node->right = nullptr))
		{
			node = nullptr;
		}

		else
		{
			if (node->right = nullptr)
			{
				node->left;
			}

			if (node->left = nullptr)
			{
				node = node->right;
			}

			if (node->right->left = nullptr)
			{
				node->right->left = node->left;
				node = node->right;
			}

			if (node->left->right = nullptr)
			{
				node->left->right = node->right;
				node = node->left;
			}

			else
			{
				BtreeNode* tree = node->right;

				while (tree->right->right != nullptr)
				{
					tree = tree->right;
				}

				BtreeNode* tree1 = Extract(tree->right);
				tree1->right = tree->left;
				tree1->left = tree->left;
				tree = tree1;
			}

			treenode->right = nullptr;
			treenode->left = nullptr;
			return treenode;
		}
	}
public:
	Btree() :
		root(nullptr) {};

	void Add(int data)
	{
		Insert(root, new BtreeNode(data));
	}

	void Remove(int data)
	{
		BtreeNode*& node = GetNode(root, data);

		if (node != nullptr)
		{
			BtreeNode* e = Extract(node);
			delete e;
		}
	}

	bool contain(int data)
	{
		return (GetNode(root, data) != nullptr);
	}

	void print(std::ostream& stream, BtreeNode*& root, int d = 0)
	{
		int i = 0;

		if (root == nullptr)
		{
			return;
		}

		print(stream, root->left, d + 1);

		for (i = 0; i < d; i++)
		{
			std::cout << "\t";
		}

		stream << root->data << std::endl;
		print(stream, root->right, d + 1);
	}

	friend std::ostream& operator<<(std::ostream& stream, Btree& tree)
	{
		stream << "__________________" << std::endl;
		if (tree.root == nullptr)
		{
			stream << "nope" << std::endl;
		}

		else
		{
			tree.print(stream, tree.root);
		}

		stream << "__________________" << std::endl;
		return stream;
	}
};

int main(int argc, char* argv[])
{
	Btree tree;

	tree.Add(8);
	tree.Add(4);
	tree.Add(12);
	tree.Add(2);
	tree.Add(6);
	tree.Add(10);
	tree.Add(14);
	tree.Add(1);
	tree.Add(3);
	tree.Add(5);
	tree.Add(7);
	tree.Add(9);
	tree.Add(11);
	tree.Add(13);
	tree.Add(15);

	std::cout << tree << std::endl;

	tree.Remove(8);
	std::cout << tree << std::endl;
	return EXIT_SUCCESS;
}