#include "songList.h"


SongList::SongList(std::string _owner, unsigned int _size, unsigned int _capacity, std::string *_songs) : owner(_owner),
                                                                                                       size(_size),
                                                                                                       capacity(_capacity){
    songs = new std::string[capacity];
    for (unsigned int i = 0; i < _size; ++i) {
        songs[i] = _songs[i];
    }
                                                                                                       }


SongList::SongList(const SongList &songList) {
    size = songList.size;
    capacity = songList.capacity;
    owner = songList.owner;
    songs = new std::string[capacity];
    for (unsigned int i = 0; i < size; ++i) {
        songs[i] = songList.songs[i];
    }
}

void SongList::addSong(const std::string &song) {
    for (unsigned int i = 0; i < size; ++i) {
        if (songs[i] == song) {
            return;
        }
    }

    if (size >= capacity) {
        std::string *oldSongs = songs;
        capacity *= 2;
        songs = new std::string[capacity];
        for (unsigned int i = 0; i < size; ++i) {
            songs[i] = oldSongs[i];
        }
        delete[] oldSongs;
    }
    songs[size++] = song;
}

void SongList::removeSong(const std::string &song) {
    for (unsigned int i = 0; i < size; ++i) {
        if (song == songs[i]) {
            for (unsigned int j = i; j + 1 < size; ++j) {
                songs[j] = songs[j + 1];
            }
            --size;
        }
    }
}

void SongList::clearSong() {
    size = 0;
}

ostream &operator<<(ostream &os, const SongList &songList) {
    if (songList.size <= 0) {
        os << songList.owner << "'s SongList is Empty." << endl;
        return os;
    }
    cout << "owner:" << songList.owner << endl;
    cout << "Songs:" << endl;
    for (unsigned int i = 0; i < songList.size; ++i) {
        os << songList.songs[i] << std::endl;
    }
    return os;
}

SongList &SongList::operator=(const SongList &songList) {
    if (&songList != this) {
        delete[] songs;
        size = songList.size;
        capacity = songList.capacity;
        owner = songList.owner;
        songs = new std::string[capacity];
        for (unsigned int i = 0; i < size; ++i) {
            songs[i] = songList.songs[i];
        }
    }

    return *this;
}



SongList::~SongList(){
    delete [] songs;
}