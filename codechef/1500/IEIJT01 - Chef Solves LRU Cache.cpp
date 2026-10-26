class LruCache {
    int cap;
    list<int> dll; // most recent at front
    unordered_map<int, pair<int, list<int>::iterator>> mp; // key -> {value, iterator}

public:
    LruCache(int cacheCapacity) {
        cap = cacheCapacity;
    }

    int getValue(int key) {
        if (!mp.count(key)) return -1;
        dll.erase(mp[key].second);
        dll.push_front(key);
        mp[key].second = dll.begin();
        return mp[key].first;
    }

    void putValue(int key, int value) {
        if (cap == 0) return;

        if (mp.count(key)) {
            dll.erase(mp[key].second);
        } else if ((int)mp.size() == cap) {
            int lru = dll.back();
            dll.pop_back();
            mp.erase(lru);
        }
        dll.push_front(key);
        mp[key] = {value, dll.begin()};
    }
};

