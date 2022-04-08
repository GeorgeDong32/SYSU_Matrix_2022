#ifndef SONGLIST_H
#define SONGLIST_H

#include <string>
#include <iostream>

using namespace std;

class SongList {
    std::string owner;          // 歌单拥有者
    unsigned int size;         // 歌单中有效歌曲的数量
    unsigned int capacity;          // 歌单的最大容量
    std::string *songs;         // 歌曲列表，一个string数组

public:
    // 初始化的歌曲列表中会保证没有重复歌曲
    SongList(const std::string _owner, unsigned int _size, unsigned int _capacity, std::string *_songs);

    SongList(const SongList &songList);

    // 添加歌曲，请考虑去重的情况（如果歌曲已经存在则不添加）、歌单已经满了需要扩容的情况，扩容方案自选
    // 扩容方案1：原地扩容，C语言中有个realloc函数可以实现
    // 扩容方案2：重新开辟一个更大容量songs歌曲列表，并将当前的数据迁移过去
    void addSong(const std::string &song);

    // 删除指定歌曲，歌曲不存在则无动作
    void removeSong(const std::string &song);

    // 清空歌曲
    void clearSong();

    SongList &operator=(const SongList &songList);

    friend ostream &operator<<(ostream &os, const SongList &songList);

    ~SongList();
};

#endif //SONGLIST_H
