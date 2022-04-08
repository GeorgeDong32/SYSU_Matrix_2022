
#ifndef NOVELSERVER_H
#define NOVELSERVER_H

#include <iostream>

class Novel {
private:
    unsigned int contentSize;
    char *title;
    char *content;
public:
    Novel() : contentSize(0), title(nullptr), content(nullptr) {}

    Novel(const char *title_, const char *content_);

    Novel(const Novel &novel);

    Novel &operator=(const Novel &novel);

    friend std::ostream &operator<<(std::ostream &os, const Novel &novel);

    ~Novel();
};

class NovelServer {
private:
    int novelNum;
    int maxNum;
    Novel *novelList;

public:
    NovelServer() : novelNum(0), maxNum(0), novelList(nullptr) {}

    NovelServer(int maxNum_) : novelNum(0), maxNum(maxNum_), novelList(new Novel[maxNum_]) {}

    NovelServer(const NovelServer &novelServer);

    void addNovelInTheEnd(Novel &novel);     // add Novel when novelNum won't exceed maxNum, no need to check duplicate

    void removeNovelInTheEnd();             // remove the last novel when novelNum won't less than 0

    NovelServer &operator=(const NovelServer &novelServer);

    friend std::ostream &operator<<(std::ostream &os, const NovelServer &novelServer);

    ~NovelServer();
};

#endif //NOVELSERVER_H
