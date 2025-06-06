#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <print>
#include <map>

int main()
{
    std::string word;
    std::map<std::string, int> wordCounts;

    std::cout << "Please enter a word, word-by-word. Exit with Ctrl+D: " << "\n";

    while (std::cin >> word)
        wordCounts[word]++;
    

    /*std::sort(words.begin(), words.end(), [](std::string a, std::string b)
              { return a.length() < b.length(); });*/

     for (const auto& pair : wordCounts) {
        std::println("Word: '{}', Count: {}", pair.first, pair.second);
    }
}