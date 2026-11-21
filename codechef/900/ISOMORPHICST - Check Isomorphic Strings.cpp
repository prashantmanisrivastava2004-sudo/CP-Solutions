bool isIsomorphic(const string &s, const string &t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, char> mapST, mapTS;

    for (size_t i = 0; i < s.length(); i++) {
        char c1 = s[i];
        char c2 = t[i];

        // Check mapping s -> t
        if (mapST.count(c1)) {
            if (mapST[c1] != c2) return false;
        } else {
            mapST[c1] = c2;
        }

        // Check mapping t -> s
        if (mapTS.count(c2)) {
            if (mapTS[c2] != c1) return false;
        } else {
            mapTS[c2] = c1;
        }
    }
    return true;
}


