#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <QApplication>
#include <iostream>
#include <string>
#include <ctime>
#include <QTimer>
#include "music.h"
#include "sound.h"

using namespace std;

Sound::Sound()
{
    SDL_Init(SDL_INIT_AUDIO);
    Mix_OpenAudio(44100, AUDIO_S16SYS, 2, 2048);
    Mix_VolumeMusic(100);

    current = 0;

    playlist.push_back(new Music("outofline.mp3"));
    playlist.push_back(new Music("nameless.mp3"));
    playlist.push_back(new Music("aleph.mp3"));
    playlist.push_back(new Music("pursuit.mp3"));
    playlist.push_back(new Music("hateorglory.mp3"));
    playlist.push_back(new Music("wallofmemories.mp3"));

    cout << "[] MP3 MUSIC PLAYER INITIALIZED" << endl;
}

void Sound::setVolume(int vol)
{
    vol = vol * 1.27;
    Mix_VolumeMusic(vol);
}

void Sound::loadmusic(int i)
{
    music = Mix_LoadMUS(playlist[i]->getfilename().c_str());
    musicplaying = playlist[i]->getfilename();
    current = i;
}

void Sound::play()
{
    if (!Mix_PlayingMusic())
    {
        cout << "[] " << playlist[current]->gettitle() << " is now playing..." << endl;
        Mix_PlayMusic(music, 1);

    }
    if (Mix_PausedMusic())
    {
        cout << "[] " << playlist[current]->gettitle() << " is now resuming..." << endl;
        Mix_ResumeMusic();

    }
}

void Sound::stop()
{
    if (!Mix_PausedMusic())
    {
        cout << "[] " << playlist[current]->gettitle() << " is now paused..." << endl;
        Mix_PauseMusic();
    }
}

void Sound::setPosition(int time)
{
    Mix_SetMusicPosition((double) time);
}

Music * Sound::getcurrentmusic()
{
    return playlist[current];
}

void Sound::nextmusic()
{
    if (!Mix_PausedMusic())
    {
        cout << "[] " << playlist[current]->gettitle() << " is now paused..." << endl;
        Mix_PauseMusic();
    }
    current++;
    loadmusic(current);
    playlist[current]->setstarttime(time(0));
    Mix_PlayMusic(music, 1);
}

void Sound::previousmusic()
{
    if (!Mix_PausedMusic())
    {
        cout << "[] " << playlist[current]->gettitle() << " is now paused..." << endl;
        Mix_PausedMusic();
    }
    current--;
    loadmusic(current);
    playlist[current]->setstarttime(time(0));
    Mix_PlayMusic(music, 1);
}

int Sound::getcurrent()
{
    return current;
}

vector<Music*> Sound::getplaylist()
{
    return playlist;
}
