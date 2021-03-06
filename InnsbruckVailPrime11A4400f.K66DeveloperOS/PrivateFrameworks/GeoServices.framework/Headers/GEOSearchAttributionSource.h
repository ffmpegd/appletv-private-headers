/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface GEOSearchAttributionSource : PBCodable {
	XXStruct_WmZAAA _attributionRequirements;	// 4 = 0x4
	NSMutableArray *_attributionApps;	// 16 = 0x10
	NSMutableArray *_localizedAttributions;	// 20 = 0x14
	NSString *_sourceIdentifier;	// 24 = 0x18
	unsigned _sourceVersion;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableArray *attributionApps;	// G=0x30f7fcf1; S=0x30f7fd01; @synthesize=_attributionApps
@property(readonly, assign, nonatomic) int *attributionRequirements;	// G=0x30f7ec45; 
@property(readonly, assign, nonatomic) unsigned attributionRequirementsCount;	// G=0x30f7ec31; 
@property(retain, nonatomic) NSMutableArray *localizedAttributions;	// G=0x30f7fcd1; S=0x30f7fce1; @synthesize=_localizedAttributions
@property(retain, nonatomic) NSString *sourceIdentifier;	// G=0x30f7fc91; S=0x30f7fca1; @synthesize=_sourceIdentifier
@property(assign, nonatomic) unsigned sourceVersion;	// G=0x30f7fcb1; S=0x30f7fcc1; @synthesize=_sourceVersion
- (void)addAttributionApps:(id)apps;	// 0x30f7ed59
- (void)addAttributionRequirements:(int)requirements;	// 0x30f7ec69
- (void)addLocalizedAttribution:(id)attribution;	// 0x30f7eb85
// declared property getter: - (id)attributionApps;	// 0x30f7fcf1
- (id)attributionAppsAtIndex:(unsigned)index;	// 0x30f7ede5
- (unsigned)attributionAppsCount;	// 0x30f7edc5
// declared property getter: - (int *)attributionRequirements;	// 0x30f7ec45
- (int)attributionRequirementsAtIndex:(unsigned)index;	// 0x30f7ec7d
// declared property getter: - (unsigned)attributionRequirementsCount;	// 0x30f7ec31
- (id)bestLocalizedAttribution;	// 0x30f848b5
- (void)clearAttributionApps;	// 0x30f7ed39
- (void)clearAttributionRequirements;	// 0x30f7ec55
- (void)clearLocalizedAttributions;	// 0x30f7eb65
- (void)copyTo:(id)to;	// 0x30f7f949
- (void)dealloc;	// 0x30f7eae9
- (id)description;	// 0x30f7ee05
- (id)dictionaryRepresentation;	// 0x30f7ee75
- (unsigned)hash;	// 0x30f7fbf1
- (BOOL)isEqual:(id)equal;	// 0x30f7faed
- (id)localizedAttributionAtIndex:(unsigned)index;	// 0x30f7ec11
// declared property getter: - (id)localizedAttributions;	// 0x30f7fcd1
- (unsigned)localizedAttributionsCount;	// 0x30f7ebf1
- (BOOL)readFrom:(id)from;	// 0x30f7f651
// declared property setter: - (void)setAttributionApps:(id)apps;	// 0x30f7fd01
- (void)setAttributionRequirements:(int *)requirements count:(unsigned)count;	// 0x30f7ed21
// declared property setter: - (void)setLocalizedAttributions:(id)attributions;	// 0x30f7fce1
// declared property setter: - (void)setSourceIdentifier:(id)identifier;	// 0x30f7fca1
// declared property setter: - (void)setSourceVersion:(unsigned)version;	// 0x30f7fcc1
// declared property getter: - (id)sourceIdentifier;	// 0x30f7fc91
// declared property getter: - (unsigned)sourceVersion;	// 0x30f7fcb1
- (void)writeTo:(id)to;	// 0x30f7f65d
@end

