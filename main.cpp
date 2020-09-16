#include <bits/stdc++.h>

/* function prototype */
size_t reverse_number(const size_t& temp_number);

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the test_case */
    size_t test_case;
    std::cin >> test_case;

    /* navigate through each test_case */
    while(test_case--) {
        /* get the number */
        size_t number;
        std::cin >> number;

        /* find out the reverse_of_number */
        size_t reverse_of_number = reverse_number(number);

        /* print the reverse_of_number */
        std::cout << reverse_of_number << std::endl;
    }
    return 0;
}

/* function to find reverse_of_number */
size_t reverse_number(const size_t& number) {

    /* define reverse_of_number and temp_number */
    size_t temp_number{number}, reverse_of_number{0};

    /* build reverse number */
    while (temp_number != 0) {
        /* extract last_digit from temp_number */
        size_t last_digit {temp_number % 10};

        reverse_of_number = reverse_of_number * 10 + last_digit;

        /* reduce temp_number by eliminating
         * last_digit i.e. processed digit */
        temp_number /= 10;
    }

    /* return reverse_of_number */
    return reverse_of_number;
}