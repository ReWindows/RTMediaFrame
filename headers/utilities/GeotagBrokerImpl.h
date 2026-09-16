#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 22 member(s).
class GeotagBrokerImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GeotagBrokerImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GeotagBrokerImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GeotagBrokerImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GeotagBrokerImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@GeotagBrokerImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@GeotagBrokerImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GeotagBrokerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GeotagBrokerImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveGeotagToFileWithRetryAsync@GeotagBrokerImpl@@QEAAJPEAUIGeotagBroker@Internal@Windows@@PEAUIStorageFile@Storage@4@UBasicGeoposition@Geolocation@Devices@4@AEAV?$AsyncDeferral@VCNoResult@Internal@Windows@@@34@H@Z
    long SaveGeotagToFileWithRetryAsync(::Windows::Internal::IGeotagBroker *, ::Windows::Storage::IStorageFile *, ::Windows::Devices::Geolocation::BasicGeoposition, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveGeotagWhenFileReadyAsync@GeotagBrokerImpl@@QEAAJPEAUIGeotagBroker@Internal@Windows@@PEAUIStorageFile@Storage@4@UBasicGeoposition@Geolocation@Devices@4@AEAV?$AsyncDeferral@VCNoResult@Internal@Windows@@@34@HI@Z
    long SaveGeotagWhenFileReadyAsync(::Windows::Internal::IGeotagBroker *, ::Windows::Storage::IStorageFile *, ::Windows::Devices::Geolocation::BasicGeoposition, WindissectOpaque &, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeotagInBrokerAsync@GeotagBrokerImpl@@UEAAJPEAUIInspectable@@PEAUIStorageFile@Storage@Windows@@IPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SetGeotagInBrokerAsync(IInspectable *, ::Windows::Storage::IStorageFile *, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeotagInBrokerWithPathAsync@GeotagBrokerImpl@@UEAAJPEAUIInspectable@@PEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SetGeotagInBrokerWithPathAsync(IInspectable *, HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GeotagBrokerImpl@@UEAA@XZ
    virtual ~GeotagBrokerImpl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeotagInBrokerInternalAsync@GeotagBrokerImpl@@AEAAJPEAUIGeotagBroker@Internal@Windows@@PEAUIStorageFile@Storage@4@IPEAPEAUIAsyncAction@Foundation@4@@Z
    long SetGeotagInBrokerInternalAsync(::Windows::Internal::IGeotagBroker *, ::Windows::Storage::IStorageFile *, unsigned int, WindissectOpaque * *);
};
