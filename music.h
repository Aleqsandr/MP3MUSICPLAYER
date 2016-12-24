#ifndef MUSIC_H
#define MUSIC_H

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <string>
#include <ctime>
#include <taglib/tag.h>
#include <taglib/fileref.h>
#include <taglib/audioproperties.h>
#include <taglib/attachedpictureframe.h>


class Music
{
    private:

    std::string filename;
    TagLib::String title;
    TagLib::String artist;
    TagLib::String album;
    int minutes, seconds, length;
    Mix_Music * music;
    int starttime;

    public:

    Music(std::string _title);
    void print();
    std::string getfilename();
    TagLib::String gettitle();
    TagLib::String getartist();
    TagLib::String getalbum();
    int getminutes();
    int getseconds();
    int getlength();
    Music getcurrentmusic();
    int getstarttime();
    void setstarttime(int val);

};

#endif // MUSIC_H
