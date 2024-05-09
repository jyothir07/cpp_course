#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<initializer_list>
using namespace std;

/*template<typename K, typename V>
class Dictionary {
    map<K, V> dict;
public:
    Dictionary() {
        cout << "Dictionary object is created." << endl;
    }

    ~Dictionary() {
        cout << "Dictionary object is destroyed." << endl;
    }

    void add(K key, V value) {
        dict[key] = value;
    }

    V operator[](K key) {
        return dict[key];
    }
};
*/

template<typename K, typename V>
class KeyValuePair {
    K key;
    V value;
public:
    KeyValuePair(K keyArg, V valArg) : key{ keyArg }, value{ valArg }{}
    K getKey() const { return key; }
    V getValue() const { return value; }
};

template<typename K, typename V>
class Dictionary {
    vector<KeyValuePair<K, V>> dict;
public:
    void add(K key, V value) {
        dict.push_back(KeyValuePair<K, V>(key, value));
    }

    V operator[](K key) {
        for (const auto& pair : dict) {
            if (pair.getKey() == key) {
                return pair.getValue();
            }
        }
        return V(); // return default value if key not found
    }
};

int main() {
    Dictionary<string, string> stringMap;
    stringMap.add("BLR", "Bengaluru");
    stringMap.add("CHN", "Chennai");
    string value = stringMap["BLR"];
    cout << value << endl;

    Dictionary<string, int> stringToIntMap;
    stringToIntMap.add("One", 1);
    stringToIntMap.add("Two", 2);
    int number = stringToIntMap["One"];
    cout << number << endl;
}}