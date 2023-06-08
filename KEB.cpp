//ARAM ISIKBAY
#include <iostream>
#include <vector>
#include <algorithm>

//Binary search
int bananas(std::vector<int> piles, int h) {
    int left = 1;
    //Get max pile for right and result initialization
    int right = *std::max_element(std::begin(piles),std::end(piles));
    int result = right;
    //Result is found when loop terminates
    while (left <= right){
        int hours = 0;
        int k = (left + right) / 2;
        //Calculate hours to finish piles with k
        for (int p : piles){
            hours += std::ceil((double)p / k);
        }
        //If k is too fast
        if (hours <= h){
            result = std::min(result, k);
            right = k-1;
        //If k is too slow
        }else{
            left = k+1;
        }
    }
    return result;
}

int main(){
    //Inputs
    std::vector<int> piles = { 3,6,7,11 };
    int h = 8;
    //Print pile for output
    std::cout << "Minimum eating speed of pile set";
    for (int p : piles) {std::cout << p << " ";}
    //Compute and print
    std::cout << "is " << bananas(piles, h) << std::endl;
    return 0;
}