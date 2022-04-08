
#include "novelServer.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

std::ostream &operator<<(ostream &os, const Novel &novel) {
    os << "********" << novel.title << "********" << endl << novel.content << endl;
    return os;
}

std::ostream &operator<<(ostream &os, const NovelServer &novelServer) {
    for (int i = 0; i < novelServer.novelNum; ++i) {
        os << novelServer.novelList[i] << endl;
    }
    return os;
}

int main() {

    char title1[20] = {"Ender's Game"};
    char content1[100] = {"Ender's Game :: wait to update..."};
    string temp_title, temp_content;
    getline(cin, temp_title);
    getline(cin, temp_content);
    char title2[20] = {};
    char content2[100] = {};
    strcpy(title2,  temp_title.c_str());
    strcpy(content2, temp_content.c_str());


    Novel novel1(title1, content1);
    Novel novel2(novel1);
    Novel novel3 = novel2;
    cout << "novel2" << endl << novel2 << endl;
    cout << "novel3" << endl << novel3 << endl;
    novel3 = Novel(title2, content2);
    cout << "novel3" << endl << novel3 << endl;
    cout << "-----------Novel test Done.-----------" << endl << endl;

    NovelServer novelServer(10);
    novelServer.addNovelInTheEnd(novel1);
    novelServer.addNovelInTheEnd(novel2);
    novelServer.addNovelInTheEnd(novel3);

    NovelServer novelServer1;
    novelServer1 = novelServer;
    NovelServer novelServer2(novelServer);
    novelServer2.removeNovelInTheEnd();
    novelServer = novelServer;

    cout << "novelServer" << endl << novelServer << endl;
    cout << "novelServer1" << endl << novelServer1 << endl;
    cout << "novelServer2" << endl << novelServer2 << endl;
    cout << "-----------NovelServer test Done.-----------" << endl;

    return 0;
}



