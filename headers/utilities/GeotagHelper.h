#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 24 member(s).
namespace Windows::Storage::FileProperties {
class GeotagHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GeotagHelper@FileProperties@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GeotagHelper@FileProperties@Storage@Windows@@QEAA@XZ
    GeotagHelper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeotagAsync@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAUIStorageFile@34@PEAPEAU?$IAsyncOperation@PEAVGeopoint@Geolocation@Devices@Windows@@@Foundation@4@@Z
    virtual long GetGeotagAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@GeotagHelper@FileProperties@Storage@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@GeotagHelper@FileProperties@Storage@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GeotagHelper@FileProperties@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GeotagHelper@FileProperties@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeotagAsync@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAUIStorageFile@34@PEAUIGeopoint@Geolocation@Devices@4@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SetGeotagAsync(::Windows::Storage::IStorageFile *, ::Windows::Devices::Geolocation::IGeopoint *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeotagFromGeolocatorAsync@GeotagHelper@FileProperties@Storage@Windows@@UEAAJPEAUIStorageFile@34@PEAUIGeolocator@Geolocation@Devices@4@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SetGeotagFromGeolocatorAsync(::Windows::Storage::IStorageFile *, ::Windows::Devices::Geolocation::IGeolocator *, WindissectOpaque * *);
};
} // namespace Windows::Storage::FileProperties
