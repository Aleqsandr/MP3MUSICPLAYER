#include "music.h"

using namespace std;

Music::Music(string _title)
{
    filename = _title;
    TagLib::FileRef data(filename.c_str(), true, TagLib::AudioProperties::Accurate);
    title = data.tag()->title();
    artist = data.tag()->artist();
    album = data.tag()->album();
    length = (int) data.audioProperties()->length();
    minutes = length / 60;
    seconds = length % 60;
}

void Music::print()
{
    cout << "Title : " << title << endl;
    cout << "Artist : " << artist << endl;
    cout << "Album : " << album << endl;
    cout << "Length : " << minutes << ":" << seconds << endl;
}

string Music::getfilename(){return filename;}

TagLib::String Music::gettitle(){return title;}

TagLib::String Music::getartist(){return artist;}

TagLib::String Music::getalbum(){return album;}

int Music::getminutes()
{
    return minutes;
}

int Music::getseconds()
{
    return seconds;
}

int Music::getlength()
{
    return length;
}

int Music::getstarttime()
{
    return starttime;
}

void Music::setstarttime(int val)
{
    starttime = val;
}
