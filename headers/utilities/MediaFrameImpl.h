#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 20 member(s).
class MediaFrameImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaFrameImpl@@QEAA@XZ
    MediaFrameImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@MediaFrameImpl@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_Duration(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@MediaFrameImpl@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_ExtendedProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDiscontinuous@MediaFrameImpl@@UEAAJPEAE@Z
    virtual long get_IsDiscontinuous(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@MediaFrameImpl@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RelativeTime@MediaFrameImpl@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_RelativeTime(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemRelativeTime@MediaFrameImpl@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_SystemRelativeTime(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@MediaFrameImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Duration@MediaFrameImpl@@UEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_Duration(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDiscontinuous@MediaFrameImpl@@UEAAJE@Z
    virtual long put_IsDiscontinuous(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RelativeTime@MediaFrameImpl@@UEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_RelativeTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemRelativeTime@MediaFrameImpl@@UEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_SystemRelativeTime(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@MediaFrameImpl@@IEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MediaFrameImpl@@IEAAXAEBV?$ComPtr@UIMFSample@@@WRL@Microsoft@@_N@Z
    void Initialize(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfClosed@MediaFrameImpl@@IEBAXXZ
    void ThrowIfClosed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfReadOnly@MediaFrameImpl@@IEBAXXZ
    void ThrowIfReadOnly() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaFrameImpl@@MEAA@XZ
    virtual ~MediaFrameImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMfSample@MediaFrameImpl@@AEAAXXZ
    void ReadMfSample();
};
