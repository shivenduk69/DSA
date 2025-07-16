//in this program we will implement the erase function in hashmap

#include<iostream>
using namespace std;
class node{
public:
    int K;//key
    int V; //value
    node* next;

    node(int K, int V){
        this->K = K;
        this->V = V;
        this->next = nullptr;
    }
};

class HashMap{
    int N; // to store the capacity of the hasp map
    int M; // to store the size of the hash map
    double L; // to store the load factor threshold     

    node** T; //to store the pointer to the dyanamic array that represents the hash table

    int hashFn(int K){
        // transform k into a hash index
        return K%N;

    }

    void transfer(node* head){
        //1. transfer (K, V) pairs present in the LL represented by "head" to the updated hashMap
        node* temp = head;
        while(temp != NULL){
            insert(temp->K, temp->V);
            temp = temp->next;
        }
        //2. release memory allcoated for the LL represented by "head" pointer
        while(head != NULL){
            node* temp = head->next;
            delete head;
            head = temp;
        }
    }

    void rehash(){
        //1. save pointer to the current hashmap and its capacity
        node** oldT = T;
        int oldN = N;

        //2. create  a hashMap with double the capacity
        T = new node*[2*N];
        for(int i = 0; i<2*N; i++){
            T[i] = nullptr;
        }
        N = 2*N;
        M = 0;
        //3. transfer (K, V) pairs from old hashMap to the updated hashMap
        for(int i = 0; i<oldN; i++){
            transfer(oldT[i]);
        }
        //4. release the memory allocated to the old hashMap
        delete [] oldT;
    }


public:
    HashMap(int N = 5, double L = 0.7){
        this->N = N;
        this->M = 0;
        this->L = L;

        T = new node*[N];//creating an array of type node in heap
        //since this is an array with garbage values so we have assigned it null
        for(int i = 0; i<N; i++){
            T[i] = nullptr;
        }
    }

    void insert(int K, int V){
        //1. transform the key into a hash index using a hash function
        int hashIdx = hashFn(K);
        //2. create a node with the given (K, V) pair and insert it at the head of the LL stored
        // at the head index 
        node* n = new node(K, V);
        //3. update the pointer to the head of the LL stored at the hash index 
        // at the head index such that it holds the address of the newly created node
        n->next = T[hashIdx];
        T[hashIdx] = n;
        M++;
        //4. rehash if load factor exceeds the load factor threshold
        double LF = M * 1.0 / N;
        if(LF > L){
            cout << "rehashing due to LF = " << LF << endl;
            rehash();
        }
    }

    //T.C for find function = O(M/N)~O(1)
    node* find(int K){
        // 1. Transform the key into the hash index using the hash function
        int hashIdx = hashFn(K);
        // 2. search for the node with the given key in the LL stored at the hash index
        node* temp = T[hashIdx];
        while(temp != NULL){
            if(temp->K==K){
                break;
            }
            temp = temp->next;
        }
        return temp;
    }

    void erase(int K){
        //1. Transform the key into the hash index
        int hashIdx = hashFn(K);

        node* temp = T[hashIdx];

        if(temp == NULL) return;
        
        if(temp->K == K){
            T[hashIdx] = temp->next;
            delete temp;
            M--;
        }
        else{
            node* prev = NULL;
            while(temp != NULL){
                if(temp->K == K){
                    prev->next = temp->next;
                    delete temp;
                    M--;
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
        }
    }
    
    void printLinkedList(node* head){
        while(head){
            cout << "(" << head->K << ", " << head->V << ") ";
            head = head->next;
        }
        cout << endl;
    }
    void printHashMap(){
        //iterate over the bucket in the hashmap
        for(int i = 0; i<N; i++){
            //print LL store in the ith bucket of the LL
            cout << i << " : ";
            printLinkedList(T[i]);       
        }
        cout << endl;
    }

};

int main(){
    HashMap hm;
    
    hm.insert(0, 0);
    hm.insert(2, 4);
    hm.insert(7, 49);
    hm.insert(12, 144);
    
    hm.printHashMap();

    int key = 7;
    node* temp = hm.find(key);
    if(temp != NULL){
        //Means you have found the key
        cout << temp->V << endl;
    }else{
        cout << "Key not found" << endl;
    }

    hm.erase(7);

    temp = hm.find(7);
    if(temp != NULL){
        //Means you have found the key
        cout << temp->V << endl;
    }else{
        cout << key << " not found" << endl;
    }
    return 0;
}

