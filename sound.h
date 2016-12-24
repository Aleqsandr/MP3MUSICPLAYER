#ifndef SOUND_H
#define SOUND_H

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <QTime>
#include <iostream>
#include <string>
#include <taglib/tag.h>
#include <taglib/fileref.h>
#include <taglib/audioproperties.h>
#include "music.h"

using namespace std;

class Sound
{
    private:
    vector<Music*> playlist;
    int current;
    string musicplaying;
    Mix_Music * music;

    public:
    Sound();
    void setVolume(int vol);
    void loadmusic(int i);
    void play();
    void stop();
    void setPosition(int time);
    Music * getcurrentmusic();
    void nextmusic();
    void previousmusic();
    int getcurrent();
    vector<Music*> getplaylist();
};

#endif // SOUND_H
