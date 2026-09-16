#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 51 member(s).
class MediaFramePropertySetImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MediaFramePropertySetImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@MediaFramePropertySetImpl@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@MediaFramePropertySetImpl@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@MediaFramePropertySetImpl@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MediaFramePropertySetImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MediaFramePropertySetImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MediaFramePropertySetImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@MediaFramePropertySetImpl@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@MediaFramePropertySetImpl@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@MediaFramePropertySetImpl@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z
    virtual long Insert(HSTRING__*, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@MediaFramePropertySetImpl@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaFramePropertySetImpl@@QEAA@AEBV?$ComPtr@UIMFSample@@@WRL@Microsoft@@_N@Z
    MediaFramePropertySetImpl(WindissectOpaque const &, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MediaFramePropertySetImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MediaFramePropertySetImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@MediaFramePropertySetImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MapChanged@MediaFramePropertySetImpl@@UEAAJPEAU?$MapChangedEventHandler@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MapChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@MediaFramePropertySetImpl@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MapChanged@MediaFramePropertySetImpl@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MapChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInMfSample@MediaFramePropertySetImpl@@AEAAXPEAUHSTRING__@@PEAUIInspectable@@@Z
    void InsertInMfSample(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMfSample@MediaFramePropertySetImpl@@AEAAXXZ
    void ReadMfSample();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromMfSample@MediaFramePropertySetImpl@@AEAAXPEAUHSTRING__@@@Z
    void RemoveFromMfSample(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfClosed@MediaFramePropertySetImpl@@AEBAXXZ
    void ThrowIfClosed() const;
};
