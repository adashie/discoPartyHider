#ifndef MUSICTRACKHANDLER_H
#define MUSICTRACKHANDLER_H
#include <bass.h>

namespace DiscoPartyHider
{
class MusicTrackHandler
{
public:
    MusicTrackHandler();
    void loadTrack(const char* trackFileName);
    void playTrack();
    void stopTrack();
private:
    HSTREAM bassHandle;
};
}

#endif // MUSICTRACKHANDLER_H
