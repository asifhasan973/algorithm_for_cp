#include <iostream>
#include <vector>
using namespace std;


void computeSPF(vector<int> &spf, int maxN) {
    for (int i = 1; i <= maxN; i++) {
        spf[i] = i; 
    }

    for (int i = 2; i * i <= maxN; i++) {
        if (spf[i] == i) { 
            for (int j = i * i; j <= maxN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}


vector<int> getPrimeFactors(int x, const vector<int> &spf) {
    vector<int> primeFactors;
    while (x != 1) {
        primeFactors.push_back(spf[x]);
        x /= spf[x];
    }
    return primeFactors;
}

int main() {
    int maxN = 100000; 
    vector<int> spf(maxN + 1);

   
    computeSPF(spf, maxN);


    int num;
   
    cin >> num;

   
        vector<int> primeFactors = getPrimeFactors(num, spf);
       
        for (int factor : primeFactors) {
            cout << factor << " ";
        }
        cout << endl;
    

    return 0;
}
