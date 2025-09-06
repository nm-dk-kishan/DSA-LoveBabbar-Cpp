class Solution {
public:
    bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) return false;

    for (char &c : str1) c = toupper(c);
    for (char &c : str2) c = toupper(c);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
    }
};