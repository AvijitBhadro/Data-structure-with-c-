#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *left;
    node *right;
    node *parent;
};
class BinaryTree
{
public:
    node *root;
    node *allnode[6];
    BinaryTree()
    {
        root = NULL;
    }
    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {

        for (int i = 0; i < 6; i++)
            allnode[i] = CreateNewNode(i);

        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->parent = allnode[0];
        allnode[1]->left = allnode[5];

        allnode[2]->parent = allnode[0];
        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];
    }
    // void DFS(node *a)
    // {
    //     if(a==NULL) return;
    //     cout<<a->id<<" ";
    //     DFS(a->left);
    //     DFS(a->right);

    // }

     // void Inorder(node* a)
    // {
    // if(a==NULL) return;

    // Inorder(a->Left);
    // cout<<a->id<<" ";
    // Inorder(a->Right);

    // }
    // void Preorder(node* a)
    // {
    // if(a==NULL) return;

    // cout<<a->id<<" ";
    // Preorder(a->Left);

    // Preorder(a->Right);

    // }

    void Postorder(node *a)
    {
        if (a == NULL)
            return;

        Postorder(a->left);

        Postorder(a->right);
        cout << a->id << " ";
    }
};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    bt.Postorder(bt.root);
}
