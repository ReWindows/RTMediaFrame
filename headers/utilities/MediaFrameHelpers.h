#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 24 member(s).
class MediaFrameHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMFMediaBuffer@MediaFrameHelpers@@SA?AV?$ComPtr@UIMFMediaBuffer@@@WRL@Microsoft@@AEBU_GUID@@AEBV234@0HHAEBUtagRECT@@@Z
    static WindissectOpaque ConvertMFMediaBuffer(_GUID const &, WindissectOpaque const &, _GUID const &, int, int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMFMediaBuffer@MediaFrameHelpers@@SA?AV?$ComPtr@UIMFMediaBuffer@@@WRL@Microsoft@@AEBV?$ComPtr@UIMFMediaType@@@34@AEBV234@AEBU_GUID@@HHAEBUtagRECT@@@Z
    static WindissectOpaque ConvertMFMediaBuffer(WindissectOpaque const &, WindissectOpaque const &, _GUID const &, int, int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertWicBitmap@MediaFrameHelpers@@SA?AV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBV?$ComPtr@UIWICBitmapSource@@@34@AEBU_GUID@@@Z
    static WindissectOpaque ConvertWicBitmap(WindissectOpaque const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToBitmapFromSurface@MediaFrameHelpers@@SAXW4BitmapPixelFormat@Imaging@Graphics@Windows@@AEBV?$ComPtr@UIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@UISoftwareBitmap@Imaging@Graphics@Windows@@@78@@Z
    static void CopyToBitmapFromSurface(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToSurfaceFromBitmap@MediaFrameHelpers@@SAXW4BitmapPixelFormat@Imaging@Graphics@Windows@@AEBV?$ComPtr@UISoftwareBitmap@Imaging@Graphics@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@UIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@@78@@Z
    static void CopyToSurfaceFromBitmap(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopyWithAlphaFromSurface@MediaFrameHelpers@@SAJAEBV?$ComPtr@UIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@@WRL@Microsoft@@W4BitmapAlphaMode@Imaging@Graphics@Windows@@HPEAPEAUISoftwareBitmap@678@@Z
    static long CreateCopyWithAlphaFromSurface(WindissectOpaque const &, int, int, ::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMFMediaType@MediaFrameHelpers@@SA?AV?$ComPtr@UIMFMediaType@@@WRL@Microsoft@@W4BitmapPixelFormat@Imaging@Graphics@Windows@@IIW4BitmapAlphaMode@678@@Z
    static WindissectOpaque CreateMFMediaType(int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMFMediaType@MediaFrameHelpers@@SA?AV?$ComPtr@UIMFMediaType@@@WRL@Microsoft@@AEBUDirect3DSurfaceDescription@Direct3D11@DirectX@Graphics@Windows@@@Z
    static WindissectOpaque CreateMFMediaType(::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlpha@MediaFrameHelpers@@SA?AW4BitmapAlphaMode@Imaging@Graphics@Windows@@W4DirectXPixelFormat@DirectX@45@@Z
    static int GetAlpha(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@MediaFrameHelpers@@SA?AUtagRECT@@PEBU_MFVideoArea@@II@Z
    static tagRECT GetBounds(_MFVideoArea const *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferFromBitmap@MediaFrameHelpers@@SA?AV?$ComPtr@UIMFMediaBuffer@@@WRL@Microsoft@@AEBV?$ComPtr@UISoftwareBitmap@Imaging@Graphics@Windows@@@34@@Z
    static WindissectOpaque GetBufferFromBitmap(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferFromSurface@MediaFrameHelpers@@SA?AV?$ComPtr@UIMFMediaBuffer@@@WRL@Microsoft@@AEBV?$ComPtr@UIDirect3DSurface@Direct3D11@DirectX@Graphics@Windows@@@34@@Z
    static WindissectOpaque GetBufferFromSurface(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXFormat@MediaFrameHelpers@@SA?AW4DirectXPixelFormat@DirectX@Graphics@Windows@@W4BitmapPixelFormat@Imaging@45@W4BitmapAlphaMode@745@@Z
    static int GetDXFormat(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormat@MediaFrameHelpers@@SA?AW4BitmapPixelFormat@Imaging@Graphics@Windows@@AEBU_GUID@@@Z
    static int GetFormat(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormat@MediaFrameHelpers@@SA?AW4BitmapPixelFormat@Imaging@Graphics@Windows@@W4DirectXPixelFormat@DirectX@45@@Z
    static int GetFormat(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfo@MediaFrameHelpers@@SA?AUBitmapPixelFormatInfo@@W4BitmapPixelFormat@Imaging@Graphics@Windows@@@Z
    static BitmapPixelFormatInfo GetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMFVideoFormat@MediaFrameHelpers@@SA?AU_GUID@@W4BitmapPixelFormat@Imaging@Graphics@Windows@@W4BitmapAlphaMode@456@@Z
    static _GUID GetMFVideoFormat(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneDescription@MediaFrameHelpers@@SA?AUBitmapPlaneDescription@Imaging@Graphics@Windows@@W4BitmapPixelFormat@345@AEBUtagRECT@@HHH@Z
    static ::Windows::Graphics::Imaging::BitmapPlaneDescription GetPlaneDescription(int, tagRECT const &, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICPixelFormat@MediaFrameHelpers@@SA?AU_GUID@@W4BitmapPixelFormat@Imaging@Graphics@Windows@@W4BitmapAlphaMode@456@@Z
    static _GUID GetWICPixelFormat(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormatSupportedByXVP@MediaFrameHelpers@@SA_NW4BitmapPixelFormat@Imaging@Graphics@Windows@@W4BitmapAlphaMode@345@@Z
    static bool IsFormatSupportedByXVP(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormatSupportedByXVP@MediaFrameHelpers@@SA_NW4DirectXPixelFormat@DirectX@Graphics@Windows@@@Z
    static bool IsFormatSupportedByXVP(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MFCopyImageWithFallback@MediaFrameHelpers@@SAJPEAEJPEBEJKK@Z
    static long MFCopyImageWithFallback(unsigned char *, long, unsigned char const *, long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsAlpha@MediaFrameHelpers@@SA_NAEBU_GUID@@@Z
    static bool SupportsAlpha(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XVPConvertMFMediaBuffer@MediaFrameHelpers@@SAXPEAUIMFMediaBuffer@@PEAUIMFMediaType@@AEBUtagRECT@@012PEAUIMFDXGIDeviceManager@@@Z
    static void XVPConvertMFMediaBuffer(IMFMediaBuffer *, IMFMediaType *, tagRECT const &, IMFMediaBuffer *, IMFMediaType *, tagRECT const &, IMFDXGIDeviceManager *);
};
