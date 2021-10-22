#include <iostream>

using namespace std;


struct floorciel{

int floor;
int ciel;

}
int main(){

    if (root == NULL) 
        return -1; 


// for calulcating ciel;


    int res = -1;
    
    while(root!=nullptr){
        
        if(root->data == x){
            
            return root->data;
        }else if(root->data > x){
            
            res = root->data;
            root = root->left;
            
        }else{
            
            root = root->right;
        }
        
        
    }
    
   floorciel.ciel = res;

    //for calulating floor

 	Node* res = nullptr;
	
    //

    Node* root1 = root;
	
	while(root1!=nullptr){
	    
	    if(root1->data == key){
	        
	       return root1->data;
	
	    }
	    
	    if(root1->data > key){
	        
	        root1 = root1->left;
	        
	        
	    }else if(root1->data < key){
	        
	        Diff = root1->data;
	        root1 = root1->right;
	    }
	    
	    
	}
	
	floorciel.floor = Diff; 


return 0;

}