#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

  int repeatedStringMatch(string A, string B) {
    string repeatedA = A;
    int count = 1;
        
    // Repeat A until it's at least as long as B
    while (repeatedA.length() < B.length()) {
            repeatedA += A;
            count++;
        }
        
        // Check if B is now a substring
        if (repeatedA.find(B) != string::npos) {
            return count;
        }
        
        // Check with one extra repetition (to handle wrap-around)
        repeatedA += A;
        count++;
        
        if (repeatedA.find(B) != string::npos) {
            return count;
        }
        
        return -1;
    }

