#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 11 member(s).
class VideoFrameFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VideoFrameFactory@@UEAAJW4BitmapPixelFormat@Imaging@Graphics@Windows@@HHPEAPEAUIVideoFrame@Media@5@@Z
    virtual long Create(int, int, int, ::Windows::Media::IVideoFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsDirect3D11SurfaceBacked@VideoFrameFactory@@UEAAJW4DirectXPixelFormat@DirectX@Graphics@Windows@@HHPEAPEAUIVideoFrame@Media@5@@Z
    virtual long CreateAsDirect3D11SurfaceBacked(int, int, int, ::Windows::Media::IVideoFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsDirect3D11SurfaceBackedWithDevice@VideoFrameFactory@@UEAAJW4DirectXPixelFormat@DirectX@Graphics@Windows@@HHPEAUIDirect3DDevice@Direct3D11@345@PEAPEAUIVideoFrame@Media@5@@Z
    virtual long CreateAsDirect3D11SurfaceBackedWithDevice(int, int, int, ::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice *, ::Windows::Media::IVideoFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromMFSample@VideoFrameFactory@@UEAAJPEAUIMFSample@@AEBU_GUID@@IIHPEBU_MFVideoArea@@PEAUIMFDXGIDeviceManager@@1PEAPEAX@Z
    virtual long CreateFromMFSample(IMFSample *, _GUID const &, unsigned int, unsigned int, int, _MFVideoArea const *, IMFDXGIDeviceManager *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSoftwareBitmap@VideoFrameFactory@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@EPEAPEAUIVideoFrame@Media@5@@Z
    virtual long CreateFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *, unsigned char, ::Windows::Media::IVideoFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithAlpha@VideoFrameFactory@@UEAAJW4BitmapPixelFormat@Imaging@Graphics@Windows@@HHW4BitmapAlphaMode@345@PEAPEAUIVideoFrame@Media@5@@Z
    virtual long CreateWithAlpha(int, int, int, int, ::Windows::Media::IVideoFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithDirect3D11Surface@VideoFrameFactory@@UEAAJPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@PEAPEAUIVideoFrame@Media@6@@Z
    virtual long CreateWithDirect3D11Surface(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, ::Windows::Media::IVideoFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithSoftwareBitmap@VideoFrameFactory@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAPEAUIVideoFrame@Media@5@@Z
    virtual long CreateWithSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *, ::Windows::Media::IVideoFrame * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameFactory@@QEAA@XZ
    VideoFrameFactory();
};
