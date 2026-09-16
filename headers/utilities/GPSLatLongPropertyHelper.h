#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 7 member(s).
class GPSLatLongPropertyHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertiesToSave@GPSLatLongPropertyHelper@@QEBAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@N@Z
    long AddPropertiesToSave(WindissectOpaque *, double) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecimalFromProperties@GPSLatLongPropertyHelper@@QEBAJPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAN@Z
    long GetDecimalFromProperties(WindissectOpaque *, double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesToRetrieve@GPSLatLongPropertyHelper@@QEBAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    long GetPropertiesToRetrieve(WindissectOpaque *) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecimalFromLatLongRational@GPSLatLongPropertyHelper@@CAJPEAULatLongRational@1@PEAN@Z
    static long GetDecimalFromLatLongRational(WindissectOpaque *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatLongRationalFromDecimal@GPSLatLongPropertyHelper@@CAXNPEAULatLongRational@1@@Z
    static void GetLatLongRationalFromDecimal(double, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatLongUInt32ArrayFromMap@GPSLatLongPropertyHelper@@CAJPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUHSTRING__@@PEAII@Z
    static long GetLatLongUInt32ArrayFromMap(WindissectOpaque *, HSTRING__*, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefStringToDecimal@GPSLatLongPropertyHelper@@CAJAEBVHString@Wrappers@WRL@Microsoft@@_NPEAN@Z
    static long RefStringToDecimal(::Microsoft::WRL::Wrappers::HString const &, bool, double *);
};
