#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <print>
#include <map>
#include <string>

int main()
{
    std::string word;
    std::vector<std::string> words;

    std::cout << "Please enter a word, word-by-word. Exit with Ctrl+D: " << "\n";

    while (std::cin >> word)
        words.push_back(word);

    std::sort(words.begin(), words.end(), [](std::string a, std::string b)
              { return a.length() < b.length(); });

    std::string shortest_word = words.front();
    std::string longest_word = words.back();

    std::println("Shortest word is: '{}', length: {}, and longest word is: '{}', length: {}",
                 shortest_word, shortest_word.length(), longest_word, longest_word.length());
}