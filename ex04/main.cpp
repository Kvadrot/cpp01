/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:57:52 by ufo               #+#    #+#             */
/*   Updated: 2025/01/24 12:41:39 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void customReplace(std::string s1, std::string s2, std::string &content) {
    size_t pos = 0;
    
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        std::string before = content.substr(0, pos);
        std::string after = content.substr(pos + s1.length());
        content = before + s2 + after;
        pos += s2.length();
    }
}

std::string* readFile(std::ifstream& file) {
    std::string* content = new std::string;
    std::string line;

    while (std::getline(file, line)) {
        *content += line + '\n';
    }

    if (file.fail() && !file.eof()) {
        std::cerr << "An error occurred during reading." << std::endl;
        delete content;
        return nullptr;
    }

    return content;
}

bool validateInput(int argc) {
    if (argc != 4) {
        return false;
    } else {
        return true;
    }
}

int main(int argc, char *argv[]) {
    std::string inputFileName;
    std::string *content;
    
    if (!validateInput(argc)) {
        std::cout << "Input parameters amount error\n exmp: inputFileName s1 s2\n";
        return 1;
    }

    inputFileName = argv[1];
    std::ifstream file(inputFileName);
    std::ofstream outFile(inputFileName + ".replace");

    if (!file.is_open()) {
        std::cerr << "Error occurred during reading the file: " << inputFileName << std::endl;
        return 2;  
    }
    if (!outFile.is_open()) {
        std::cerr << "Error occurred during opening the output file." << std::endl;
        return 3;  
    }

    content = readFile(file);
    if (content == nullptr) {
        return 4;
    }

    customReplace(argv[2], argv[3], *content);
    outFile << *content;

    // Files will be automatically closed when they go out of scope
    delete content;

    return 0;
}
