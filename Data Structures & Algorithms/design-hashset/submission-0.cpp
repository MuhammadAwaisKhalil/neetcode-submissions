class MyHashSet {
public:
    vector<int> s;
    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int i=0;i<s.size();i++){
            if(s[i]==key){
                return;
            }
        }
        s.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0;i<s.size();i++){
            if(s[i]==key){
                s.erase(s.begin()+i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0;i<s.size();i++){
            if(s[i]==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */