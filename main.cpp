#include <iostream>
#include <boost/lambda/lambda.hpp>

int main(int argc, const char * argv[]) {

    printf("Please input any number:");
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
            in(std::cin), in(), std::cout << (_1 * 3) << " " );

    return 0;
}
