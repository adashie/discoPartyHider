#include <iostream>
#include "musictrackhandler.h"
#include "unistd.h"


int main(int, char ** argv)
{
    DiscoPartyHider::MusicTrackHandler mth;
    mth.loadTrack(argv[1]);
    mth.playTrack();

    while(true)
    {//temprorary to not let process end
        sleep(1);
    }
    return 0;
}

