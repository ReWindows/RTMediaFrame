#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 15 member(s).
class SoftwareBitmapFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@SoftwareBitmapFactory@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@W4BitmapPixelFormat@345@PEAPEAU2345@@Z
    virtual long Convert(::Windows::Graphics::Imaging::ISoftwareBitmap *, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertWithAlpha@SoftwareBitmapFactory@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@W4BitmapPixelFormat@345@W4BitmapAlphaMode@345@PEAPEAU2345@@Z
    virtual long ConvertWithAlpha(::Windows::Graphics::Imaging::ISoftwareBitmap *, int, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SoftwareBitmapFactory@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAPEAU2345@@Z
    virtual long Copy(::Windows::Graphics::Imaging::ISoftwareBitmap *, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SoftwareBitmapFactory@@UEAAJW4BitmapPixelFormat@Imaging@Graphics@Windows@@HHPEAPEAUISoftwareBitmap@345@@Z
    virtual long Create(int, int, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopyFromBuffer@SoftwareBitmapFactory@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@W4BitmapPixelFormat@Imaging@Graphics@5@HHPEAPEAUISoftwareBitmap@785@@Z
    virtual long CreateCopyFromBuffer(::Windows::Storage::Streams::IBuffer *, int, int, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopyFromSurfaceAsync@SoftwareBitmapFactory@@UEAAJPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@PEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@6@@Z
    virtual long CreateCopyFromSurfaceAsync(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopyWithAlphaFromBuffer@SoftwareBitmapFactory@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@W4BitmapPixelFormat@Imaging@Graphics@5@HHW4BitmapAlphaMode@785@PEAPEAUISoftwareBitmap@785@@Z
    virtual long CreateCopyWithAlphaFromBuffer(::Windows::Storage::Streams::IBuffer *, int, int, int, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopyWithAlphaFromSurfaceAsync@SoftwareBitmapFactory@@UEAAJPEAUIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@W4BitmapAlphaMode@Imaging@56@PEAPEAU?$IAsyncOperation@PEAVSoftwareBitmap@Imaging@Graphics@Windows@@@Foundation@6@@Z
    virtual long CreateCopyWithAlphaFromSurfaceAsync(::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromMF2DBuffer2@SoftwareBitmapFactory@@UEAAJPEAUIMF2DBuffer2@@AEBU_GUID@@IIHPEBU_MFVideoArea@@1PEAPEAX@Z
    virtual long CreateFromMF2DBuffer2(IMF2DBuffer2*, _GUID const &, unsigned int, unsigned int, int, _MFVideoArea const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromWICBitmap@SoftwareBitmapFactory@@UEAAJPEAUIWICBitmap@@HAEBU_GUID@@PEAPEAX@Z
    virtual long CreateFromWICBitmap(IWICBitmap *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithAlpha@SoftwareBitmapFactory@@UEAAJW4BitmapPixelFormat@Imaging@Graphics@Windows@@HHW4BitmapAlphaMode@345@PEAPEAUISoftwareBitmap@345@@Z
    virtual long CreateWithAlpha(int, int, int, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapFactory@@QEAA@XZ
    SoftwareBitmapFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SanitizeInputFormatForConvertAlpha@SoftwareBitmapFactory@@AEAAXAEAV?$ComPtr@UIMFMediaBuffer@@@WRL@Microsoft@@IIAEAU_GUID@@@Z
    void _SanitizeInputFormatForConvertAlpha(WindissectOpaque &, unsigned int, unsigned int, _GUID &);
};
