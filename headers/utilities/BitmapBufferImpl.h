#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 39 member(s).
class BitmapBufferImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BitmapBufferImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BitmapBufferImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneCount@BitmapBufferImpl@@UEAAJPEAH@Z
    virtual long GetPlaneCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneDescription@BitmapBufferImpl@@UEAAJHPEAUBitmapPlaneDescription@Imaging@Graphics@Windows@@@Z
    virtual long GetPlaneDescription(int, ::Windows::Graphics::Imaging::BitmapPlaneDescription *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BitmapBufferImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BitmapBufferImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BitmapBufferImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BitmapBufferImpl@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUp@BitmapBufferImpl@@EEAAXXZ
    virtual void CleanUp();
};
