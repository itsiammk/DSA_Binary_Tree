class BinaryTreeNode{
    public:
    int data;
        BinaryTreeNode* left;
        BinaryTreeNode* right;
        BinaryTreeNode(int data){
            this->data = data;
            right = NULL;
            left = NULL;
        }
        ~BinaryTreeNode(){
            delete left;
            delete right;
        }
};