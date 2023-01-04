#include <iostream>
#include <vector>

int main() {
    std::vector <float> prises{100.23, 24.55, 11.698, 675.5, 34.33};
    std::vector <int> buy{1, 1, 3};
    float sum=0;
    for(int i = 0; i < buy.size(); ++i)
    {
        for(int j=0; j <prises.size(); j++){
            if (j==buy[i])
                sum+=prises[j];
        }
    }
    std::cout<<"Sum = "<<sum;
}
