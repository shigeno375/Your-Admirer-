#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

using namespace std;

void print_lirik(){
    vector<pair<string,double>> 
	baris= {
        {"Hi I Admire you for so long", 0.1},
        {"But since it's Valentine's", 0.06},
        {"I'll' risk it all to confess to you ", 0.06},
         {"Here's a song for you", 0.07},
        {"And it titled Eight Letters by Yenah Valle", 0.07},
        {"Too scared to say I LIKE YOU", 0.06},
        {"Too scared to CONFESS TO YOU", 0.07},
        {"'Cause I don't know", 0.06},
        {"What you'll say to me", 0.07},
        {"A little wind the presence of you is", 0.08},
        {"Better than explaining a whole story", 0.07},
        {"And that's why I LIKE YOU!", 0.1},
        {"<3 ", 0.06}
    };

    vector<double> jeda = {0.2, 0.1, 0.4, 0.1, 0.1, 0.4, 0.1, 0.4, 0.1, 0.4, 0.7};

    for (size_t i=0; i<baris.size(); ++i){
        for (char c : baris[i].first){
            cout<<c;
            cout.flush();
            this_thread::sleep_for(chrono::duration<double>(baris[i].second)); //buat jeda pake detik
        }
        cout<<endl;
        if (i<jeda.size()){
            this_thread::sleep_for(chrono::duration<double>(jeda[i]));
        }
    }
}

int main(){
    print_lirik();
    return 0;
}