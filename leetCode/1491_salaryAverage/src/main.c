#include <stdio.h>

double average(double* salary, int salarySize){
    double min = salary[0], max = 0;
    double average = 0;

    for(int i = 0; i < salarySize; i++){
        if(salary[i] > max)
            max = salary[i];
        if(salary[i] < min)
            min = salary[i];
    }
    for(int i = 0; i < salarySize; i++){
        if(salary[i] == min || salary[i] == max)
            salary[i] = 0;
        average = average + salary[i];
    }
    return average/(salarySize - 2);
}

int main(){

    int salarySize = 4;
    double salary[4] = {4000, 3000, 1000, 2000};

    double averageSalary = average(&salary, salarySize);
    return 0;
}
