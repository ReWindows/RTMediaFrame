#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 4 member(s).
class AudioFrameFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AudioFrameFactory@@UEAAJIPEAPEAUIAudioFrame@Media@Windows@@@Z
    virtual long Create(unsigned int, ::Windows::Media::IAudioFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromMFSample@AudioFrameFactory@@UEAAJPEAUIMFSample@@HAEBU_GUID@@PEAPEAX@Z
    virtual long CreateFromMFSample(IMFSample *, int, _GUID const &, void * *);
};
