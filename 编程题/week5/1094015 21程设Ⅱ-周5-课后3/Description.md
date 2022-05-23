# 21程设Ⅱ-周5-课后3

# Description
Recently, Xiao Ming is developing a music player, which requires model the **SongList**. He want to implement a simple **SongList** object. But in the versions he implemented before, the `double free` or `memory leak` mistake always show up. As you are excellent C++ developer, he try to ask help from you. He has already written down the declaration of the functions in `songList.h`. You only need to accomplish the `songList.cpp`.
小明最近在开发一个音乐播放器，需要对**歌单**进行建模。他希望实现一个简单的**歌单**类，但是在之前他自己实现的版本中，总是出现`double free`或者`memory leak`的错误，他听闻你C++学得不错，向你求助来了。他在`songList.h`头文件中已经写好了函数的声明，希望你能在`songList.cpp`中将定义完善。

# Sample Input
The first line is an `int` variable `numSongs`, which indicates the number of songList1. And the next `numSongs` line are the songs' name.
第一行是一个整型变量`numSongs`，记录第一个歌单的个数，接下来的`numSongs`行分别是歌曲名字。

```
2
We Choose To Go To The Moon
A Lovely Wedding - Snowand Sky
```

# Sample Output
The output will show `songList1`、`songList2`、`songList3`,  the `songList1`will be initiated by the songs in the input and add `toAddAndRemoved` twice, but the songList should do the elimination so it should be store once. `songList2` is copied from `songList1` and will remove `toAddAndRemoved`, `songList3` is initiated from `songList2` but clear it songs after that, so it shoule be empty.
输出会显示三个歌单，`songList1`通过输出的歌曲初始化，并添加两次歌曲`toAddAndRemoved`（Lights Frightened The Captain），但因为去重的原因实际只添加一次。`songList2`通过`songList1`拷贝得到，并删除`toAddAndRemoved`。`songList3`通过`songList2`初始化，并清空歌单。

```
owner:MakaBaka
Songs:
We Choose To Go To The Moon
A Lovely Wedding - Snowand Sky
Lights Frightened The Captain

owner:MakaBaka
Songs:
We Choose To Go To The Moon
A Lovely Wedding - Snowand Sky

MakaBaka's SongList is Empty.
```

## Note
输出运算符重载：

* 如果歌单为空，则输出`<owner>'s SongList is Empty.`，其中`owner`是歌单类的成员变量。
* 如果歌单不为空，则输出
```
owner:<owner>
Songs:
<song1>
<song2>
...
```


## Hint
1. 清空歌曲是否需要真的把歌曲删除？
2. 拷贝函数需要考虑什么？
3. 赋值拷贝函数需要考虑哪三件事？