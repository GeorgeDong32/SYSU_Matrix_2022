#include "novelServer.h"
#include <bits/stdc++.h>
using namespace std;

Novel::Novel(const char *title_, const char *content_)
{
    title = new char[1000];
    strcpy(title,title_);
    content = new char[10000];
    strcpy(content,content_);
    contentSize = strlen(content);
}

Novel::Novel(const Novel &novel){
    title = new char[1000];
    strcpy(title,novel.title);
    content = new char[10000];
    strcpy(content,novel.content);
    contentSize = strlen(content);
}

Novel& Novel::operator=(const Novel &novel)
{
    if(this == &novel)
    {
        return *this;
    }
    if(title == nullptr)
    {
        title = new char[1000];
        content = new char[10000];
    }
    strcpy(title,novel.title);
    strcpy(content,novel.content);
    contentSize = novel.contentSize;
    return *this;
}

Novel::~Novel()
{
    if(title != nullptr)
    {
        delete []title;
        delete []content;
    }
}

NovelServer::NovelServer(const NovelServer &novelServer)
{
    novelNum = novelServer.novelNum;
    maxNum = novelServer.maxNum;
    novelList = new Novel[maxNum];
    for(int i = 0 ; i < novelNum ; i++)
    {
        novelList[i] = novelServer.novelList[i];
    }
}

void NovelServer::addNovelInTheEnd(Novel &novel)
{
    if(novelNum == maxNum)
    {
        return;
    }
    novelList[novelNum] = novel;
    novelNum++;
}

void NovelServer::removeNovelInTheEnd()
{
    if (novelNum)
        novelNum--;
}

NovelServer& NovelServer::operator= (const NovelServer &ns)
{
    if (this == &ns)
        return *this;
    novelNum = ns.novelNum;
    maxNum = ns.maxNum;
    if (novelList != nullptr)
        delete[] novelList;
    novelList = new Novel[maxNum];
    for (int i = 0; i < novelNum; i++)
    {
        novelList[i] = ns.novelList[i];
    }
    return *this;
}

NovelServer::~NovelServer()
{
    if (novelList != nullptr)
        delete[]novelList;
}

