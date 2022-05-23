#include "songList.h"

using namespace std;

int main() {
    int numSongs;
    cin >> numSongs;
    getchar();                  //读取换行符
    string name2 = "MakaBaka";
    string *songs = new string[numSongs];
    for (int i = 0; i < numSongs; ++i) {
        getline(cin, songs[i]);
    }
    string toAddAndRemoved = "Lights Frightened The Captain";

    SongList songList1(name2, numSongs, numSongs, songs);
    songList1.addSong(toAddAndRemoved);
    songList1.addSong(toAddAndRemoved);
    delete []songs;
    SongList songList2(songList1);
    songList2 = songList2;
    songList2.removeSong(toAddAndRemoved);

    SongList songList3 = songList2;
    songList3.clearSong();


    cout << songList1 << endl;
    cout << songList2 << endl;
    cout << songList3 << endl;
    
    return 0;
}

/*
 * 示例输入：
 * 2
 * We Choose To Go To The Moon
 * A Lovely Wedding - Snowand Sky
 *
 * 示例输出：
 * owner:MakaBaka
 * Songs:
 * We Choose To Go To The Moon
 * A Lovely Wedding - Snowand Sky
 * Lights Frightened The Captain
 * 
 * owner:MakaBaka
 * Songs:
 * We Choose To Go To The Moon
 * A Lovely Wedding - Snowand Sky
 * 
 * MakaBaka's SongList is Empty.
 */