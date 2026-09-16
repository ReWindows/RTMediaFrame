#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 81 member(s).
class VideoFrameImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VideoFrameImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@VideoFrameImpl@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromAsync@VideoFrameImpl@@UEAAJPEAUIVideoFrame@Media@Windows@@PEAU?$IReference@UBitmapBounds@Imaging@Graphics@Windows@@@Foundation@4@1PEAPEAUIAsyncAction@64@@Z
    virtual long CopyFromAsync(::Windows::Media::IVideoFrame *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToAsync@VideoFrameImpl@@UEAAJPEAUIVideoFrame@Media@Windows@@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long CopyToAsync(::Windows::Media::IVideoFrame *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToWithBoundsAsync@VideoFrameImpl@@UEAAJPEAUIVideoFrame@Media@Windows@@PEAU?$IReference@UBitmapBounds@Imaging@Graphics@Windows@@@Foundation@4@1PEAPEAUIAsyncAction@64@@Z
    virtual long CopyToWithBoundsAsync(::Windows::Media::IVideoFrame *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@VideoFrameImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetData(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@VideoFrameImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VideoFrameImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VideoFrameImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VideoFrameImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@VideoFrameImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@VideoFrameImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VideoFrameImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VideoFrameImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameImpl@@QEAA@PEAUIMFSample@@AEBU_GUID@@II_NAEBUtagRECT@@PEAUIMFDXGIDeviceManager@@@Z
    VideoFrameImpl(IMFSample *, _GUID const &, unsigned int, unsigned int, bool, tagRECT const &, IMFDXGIDeviceManager *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameImpl@@QEAA@W4BitmapPixelFormat@Imaging@Graphics@Windows@@HHW4BitmapAlphaMode@234@@Z
    VideoFrameImpl(int, int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameImpl@@QEAA@PEAUISoftwareBitmap@Imaging@Graphics@Windows@@_N@Z
    VideoFrameImpl(::Windows::Graphics::Imaging::ISoftwareBitmap *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameImpl@@QEAA@PEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@@Z
    VideoFrameImpl(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameImpl@@QEAA@W4DirectXPixelFormat@DirectX@Graphics@Windows@@HHPEAUIDirect3DDevice@Direct3D11@234@@Z
    VideoFrameImpl(int, int, int, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direct3DSurface@VideoFrameImpl@@UEAAJPEAPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@@Z
    virtual long get_Direct3DSurface(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SoftwareBitmap@VideoFrameImpl@@UEAAJPEAPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long get_SoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDXFormatSupport@VideoFrameImpl@@AEAAXW4DirectXPixelFormat@DirectX@Graphics@Windows@@@Z
    void CheckDXFormatSupport(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDXToDX@VideoFrameImpl@@AEAAXPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@0AEBUtagRECT@@1PEAUIMFDXGIDeviceManager@@@Z
    void ConvertDXToDX(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, tagRECT const &, tagRECT const &, IMFDXGIDeviceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDXToDXOnSameDevice@VideoFrameImpl@@AEAAXPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@0AEBUtagRECT@@1PEAUIMFDXGIDeviceManager@@@Z
    void ConvertDXToDXOnSameDevice(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, tagRECT const &, tagRECT const &, IMFDXGIDeviceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDXToDX@VideoFrameImpl@@AEAAXPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@0@Z
    void CopyDXToDX(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDXToDXOnSameDevice@VideoFrameImpl@@AEAAXPEAUID3D11Texture2D@@0@Z
    void CopyDXToDXOnSameDevice(ID3D11Texture2D *, ID3D11Texture2D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPropertiesFrom@VideoFrameImpl@@AEAAXPEAUIMediaFrame@Media@Windows@@@Z
    void CopyPropertiesFrom(::Windows::Media::IMediaFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@VideoFrameImpl@@AEAAXPEAUISoftwareBitmap@Imaging@Graphics@Windows@@0AEBUtagRECT@@1@Z
    void CopyTo(::Windows::Graphics::Imaging::ISoftwareBitmap *, ::Windows::Graphics::Imaging::ISoftwareBitmap *, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@VideoFrameImpl@@AEAAXPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@0AEBUtagRECT@@1PEAUIMFDXGIDeviceManager@@@Z
    void CopyTo(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, tagRECT const &, tagRECT const &, IMFDXGIDeviceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@VideoFrameImpl@@AEAAXPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@PEAUISoftwareBitmap@Imaging@56@AEBUtagRECT@@2@Z
    void CopyTo(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, ::Windows::Graphics::Imaging::ISoftwareBitmap *, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@VideoFrameImpl@@AEAAXPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAUIDirect3DSurface@Direct3D11@DirectX@45@AEBUtagRECT@@2@Z
    void CopyTo(::Windows::Graphics::Imaging::ISoftwareBitmap *, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDirect3DSurface@VideoFrameImpl@@AEAAXW4DirectXPixelFormat@DirectX@Graphics@Windows@@HHPEAUIDirect3DDevice@Direct3D11@345@@Z
    void CreateDirect3DSurface(int, int, int, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture@VideoFrameImpl@@CAXW4DXGI_FORMAT@@HHPEAUID3D11Device@@PEAPEAUID3D11Texture2D@@@Z
    static void CreateTexture(int, int, int, ID3D11Device *, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXVP@VideoFrameImpl@@AEAAJPEAPEAUIMFTransform@@@Z
    long CreateXVP(IMFTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIDeviceManager@VideoFrameImpl@@AEAAXPEAPEAUIMFDXGIDeviceManager@@@Z
    void GetDXGIDeviceManager(IMFDXGIDeviceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredRect@VideoFrameImpl@@CAXPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@PEAU?$IReference@UBitmapBounds@Imaging@Graphics@Windows@@@Foundation@6@PEAUtagRECT@@@Z
    static void GetDesiredRect(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, WindissectOpaque *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredRect@VideoFrameImpl@@CAXPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAU?$IReference@UBitmapBounds@Imaging@Graphics@Windows@@@Foundation@5@PEAUtagRECT@@@Z
    static void GetDesiredRect(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareableTexture@VideoFrameImpl@@CAJPEAUID3D11Texture2D@@PEAUID3D11Device@@PEAPEAU2@@Z
    static long GetShareableTexture(ID3D11Texture2D *, ID3D11Device *, ID3D11Texture2D * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameAdapter@VideoFrameImpl@@CA_NPEAUID3D11Device@@0@Z
    static bool IsSameAdapter(ID3D11Device *, ID3D11Device *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitGpuSync@VideoFrameImpl@@CAXPEAUID3D11Device@@K@Z
    static void WaitGpuSync(ID3D11Device *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XVPConfigure@VideoFrameImpl@@AEAAJPEAUIMFTransform@@PEAUIMFMediaType@@1PEAUIMFDXGIDeviceManager@@@Z
    long XVPConfigure(IMFTransform *, IMFMediaType *, IMFMediaType *, IMFDXGIDeviceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XVPConvertMFMediaBuffer@VideoFrameImpl@@CAJPEAUIMFTransform@@PEAUIMFMediaBuffer@@AEBUtagRECT@@12@Z
    static long XVPConvertMFMediaBuffer(IMFTransform *, IMFMediaBuffer *, tagRECT const &, IMFMediaBuffer *, tagRECT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VideoFrameImpl@@EEAA@XZ
    virtual ~VideoFrameImpl();
};
