#include <iostream>
#include <queue>
#include <cstdlib>
#include <vector>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    string name;
    int score;
    Node(string d, int s){
        left=right=nullptr;
        name=d;
        score=s;
    }
};

class TBracket{
    private:
    Node* root;
    Node* match;
    public:
    TBracket(){
        root=match=nullptr;
    }
    queue<Node*>  q;

    void insert(){
        vector<string> players={"P8","P7","P6","P5","P4","P3","P2","P1"};
         for(int i=0;i<8;i++){
            int randomNum = rand() % 10;
            Node* leaf= new Node(players.back(),randomNum);
            players.pop_back();
            q.push(leaf);

         }

        }
    void update(){
        while(q.size()>1){
            Node* A=q.front();
            q.pop();
            Node* B=q.front();
            q.pop();
            match = new Node("match",0);
            match->left=A;
            match->right=B;
            if(match->left->score<match->right->score){
                match->name= B->name;
                match->score=B->score;
            }else{
                match->name= A->name;
                match->score=A->score;
            }
            q.push(match);

        }
        root=q.front();  // root equal= match of the last queue so able to access left right pointer

    }

    void printBracket(Node* root){
        if(root==nullptr){
            return ;
        }
        queue<Node*> q1;
        q1.push(root);
        int round=0;
        while(!q1.empty()){
             int size=q1.size();
             cout<<"Round "<<round<<endl;

             for(int i=0;i<size;i++){
                Node* curr=q1.front();
                q1.pop();
                cout<<curr->name<<"( "<<curr->score<<")"<<endl;
                if(curr->left){
                    q1.push(curr->left);
                }
                if(curr->right){
                    q1.push(curr->right);
                }
             }
             round++;
        }
    }

    Node* getRoot(){
        return root;
    }
       


};








int main(){

    TBracket t1;
    t1.insert();
    t1.update();
    t1.printBracket(t1.getRoot());





    return 0;
}
