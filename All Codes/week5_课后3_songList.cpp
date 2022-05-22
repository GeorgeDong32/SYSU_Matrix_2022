//Copyright (c) GeorgeDong32(Github). All rights reserved.
#include "songList.h"
using namespace std;

SongList::SongList(const std::string _owner, unsigned int _size, unsigned int _capacity, std::string* _songs)
{
	owner = _owner;
	size = _size;
	capacity = _capacity;
	songs = new string [_capacity];
	for (int i = 0; i < capacity; i++)
	{
		songs[i] = _songs[i];
	}
}

SongList::SongList(const SongList& sl)
{
	owner = sl.owner;
	size = sl.size;
	capacity = sl.capacity;
	songs = new string[capacity];
	for (int i = 0; i < capacity; i++)
	{
		songs[i] = sl.songs[i];
	}
}

void SongList::addSong(const std::string& song)
{
	for (int i = 0; i < size; i++) {
		if (songs[i] == song) return;
	}
	if (size == capacity) {
		string* newsong = new string[size + 1];
		for (int i = 0; i < size; i++) {
			newsong[i] = songs[i];
		}
		capacity++;
		newsong[size++] = song;
		delete[] songs;
		songs = newsong;
	}
	else {
		songs[size++] = song;
	}
}
		

void SongList::removeSong(const std::string& song)
{
	for (int i = 0; i < size; i++) {
		if (songs[i] == song) {
			for (int j = i; j + 1 < size; j++) {
				songs[j] = songs[j + 1];
			}
			size--;
		}
	}
}

void SongList::clearSong()
{
	size = 0;
}

SongList& SongList::operator=(const SongList& songList)
{
	if (songs == songList.songs) return *this;
	owner = songList.owner;
	size = songList.size;
	capacity = songList.capacity;
	if (songs != NULL) delete[] songs;
	songs = new string[songList.capacity];
	for (int i = 0; i < songList.size; i++) {
		songs[i] = songList.songs[i];
	}
}

SongList::~SongList()
{
	delete[] songs;
}

ostream& operator<<(ostream& os, const SongList& sl)
{
	if (sl.size == 0)
	{
		os << sl.owner << "'s SongList is Empty." << endl;
	}
	else
	{
		os << "owner:" << sl.owner << endl << "Songs:" << endl;
		for (int i = 0; i < sl.size; i++)
		{
			os << sl.songs[i] << endl;
		}
	}
	return os;
}
