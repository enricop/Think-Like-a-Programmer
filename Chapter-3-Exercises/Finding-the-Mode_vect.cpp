/*
*   Problem: Finding the Mode
*
*   In statistics, the mode of a set of values is the value that appears most
*   often. Write code that processes an array of survey data, where the survey
*   takers have responded to a question with a number in the range 1-10, to
*   determine the mode of the data set. For our purpose, if multiple modes
*   exist, any may be chosen.
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> surveyData;
    surveyData.reserve(30);
    int surveyResponse;

    std::cout << "Enter next survey response or -1 to end: ";

    std::cin >> surveyResponse;

    while (surveyResponse != -1) {
        surveyData.push_back(surveyResponse);
        std::cout << "Enter next survey response or -1 to end: ";
        std::cin >> surveyResponse;
    }

    int vectorSize = surveyData.size();
    const int MAX_RESPONSE = 10;
    int histogram[MAX_RESPONSE];
    for (int i = 0; i < MAX_RESPONSE; i++) {
        histogram[i] = 0;
    }
    for (int i = 0; i < vectorSize; i++) {
        histogram[surveyData[i] - 1]++;
    }
    int mostFrequent = 0;
    for (int i = 1; i < MAX_RESPONSE; i++) {
        if (histogram[i] > histogram[mostFrequent]) mostFrequent = i;
    }
    mostFrequent++;

    std::cout << "The mode is: " << mostFrequent << '\n';
}
