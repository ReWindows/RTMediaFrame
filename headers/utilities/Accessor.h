#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 13 member(s).
namespace RoVariant {
class Accessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z
    long GetBoolean(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDouble@Accessor@RoVariant@@QEBAJPEAN@Z
    long GetDouble(double *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuid@Accessor@RoVariant@@QEBAJPEAU_GUID@@@Z
    long GetGuid(_GUID *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInspectable@Accessor@RoVariant@@QEBAJPEAPEAUIInspectable@@@Z
    long GetInspectable(IInspectable * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z
    long GetInt32(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt64@Accessor@RoVariant@@QEBAJPEA_J@Z
    long GetInt64(int64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetString(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeSpan@Accessor@RoVariant@@QEBAJPEAUTimeSpan@Foundation@Windows@@@Z
    long GetTimeSpan(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32@Accessor@RoVariant@@QEBAJPEAI@Z
    long GetUInt32(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64@Accessor@RoVariant@@QEBAJPEA_K@Z
    long GetUInt64(uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt8Array@Accessor@RoVariant@@QEBAJPEAIPEAPEAE@Z
    long GetUInt8Array(unsigned int *, unsigned char * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Accessor@RoVariant@@QEBAJPEAW4PropertyType@Foundation@Windows@@@Z
    long get_Type(int *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPV@Accessor@RoVariant@@AEBAJXZ
    long VerifyPV() const;
};
} // namespace RoVariant
