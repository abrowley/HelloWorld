#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <string>

typedef std::list<std::string> t_vec_str;
typedef t_vec_str::const_iterator it_vec_str;
using namespace std;

int main() {
    t_vec_str v_messages;
    for(int i=0;i!=100;++i){
        ostringstream oss;
        oss << "Hello, world " << i << std::endl;
        v_messages.push_back(oss.str());
    }

    for(
            it_vec_str it = v_messages.begin();
            it != v_messages.end();
            ++it )
    {
        cout << *it;
    }

    return 0;
}