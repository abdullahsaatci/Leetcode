class MyHashSet {
public:
    int* set = nullptr;
    int size = 0;
    MyHashSet() {
    }
    
    void add(int key) {
        if (contains(key)) {return;}
        int* set_new = new int[size+1];
        for (int i = 0; i < size; i++){
            set_new[i] = set[i];
        }
        set_new[size++] = key;
        set = set_new;
    }
    
    void remove(int key) {
        if (size == 0) {return;}
        int* set_new = new int[size-1];
        for (int i = 0; i < size; i++){
            if (set[i] == key){
                for (int j = 0; j < i; j++){
                    set_new[j] = set[j];
                }
                for (int j = size-1; j > i; j--){
                    set_new[j-1] = set[j];
                }
                set = set_new;
                size--;
                return;
            }
        }
    }
    
    bool contains(int key) {
        for (int i = 0; i < size; i++){
            if (set[i] == key){
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