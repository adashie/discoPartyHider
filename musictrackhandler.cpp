#include "musictrackhandler.h"
#include "discopartylogger.h"

namespace DiscoPartyHider
{
MusicTrackHandler::MusicTrackHandler() : bassHandle(0)
{
    if (!BASS_Init(-1, 44100, 0, nullptr, nullptr))
    {
        DiscoPartyLogger::logError("Can't initialize device. Bass error %d", BASS_ErrorGetCode());
    }
}

void MusicTrackHandler::loadTrack(const char* trackFileName)
{
    bassHandle = BASS_StreamCreateFile(FALSE, trackFileName, 0, 0, 0);
    if(bassHandle == 0)
    {
        DiscoPartyLogger::logError("Can't open stream. Bass error %d", BASS_ErrorGetCode());
    }
}

void MusicTrackHandler::playTrack()
{
    if(bassHandle)
    {
        if (!BASS_ChannelPlay(bassHandle, FALSE)) // play it
                DiscoPartyLogger::logError("Can't play channel. Bass error %d", BASS_ErrorGetCode());
    }
}

}
