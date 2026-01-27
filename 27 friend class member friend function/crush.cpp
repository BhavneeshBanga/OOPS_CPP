#include <iostream>
using namespace std;

class boy {
    private:
        string crush = "xxxxx";
        int salary = 15000000;

    public:
        friend class Girl;  // Declaring Girl as a friend class
};

class Girl {
public:
    void displaySecrets(boy b) {
        cout << "Boy's crush: " << b.crush << endl;
        cout << "Boy's salary: " << b.salary << endl;
    }
};

int main() {
    boy bhavi;
    Girl g1;
    g1.displaySecrets(bhavi);
    return 0;
}
