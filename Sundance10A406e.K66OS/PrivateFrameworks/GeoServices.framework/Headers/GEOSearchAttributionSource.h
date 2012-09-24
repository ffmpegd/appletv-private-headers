/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString, NSMutableArray;

@interface GEOSearchAttributionSource : PBCodable {
	XXStruct_WmZAAA _attributionRequirements;	// 4 = 0x4
	NSMutableArray *_attributionApps;	// 16 = 0x10
	NSMutableArray *_localizedAttributions;	// 20 = 0x14
	NSString *_sourceIdentifier;	// 24 = 0x18
	unsigned _sourceVersion;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableArray *attributionApps;	// G=0x379efcdd; S=0x379efced; @synthesize=_attributionApps
@property(readonly, assign, nonatomic) int *attributionRequirements;	// G=0x379eec11; 
@property(readonly, assign, nonatomic) unsigned attributionRequirementsCount;	// G=0x379eebfd; 
@property(retain, nonatomic) NSMutableArray *localizedAttributions;	// G=0x379efcbd; S=0x379efccd; @synthesize=_localizedAttributions
@property(retain, nonatomic) NSString *sourceIdentifier;	// G=0x379efc7d; S=0x379efc8d; @synthesize=_sourceIdentifier
@property(assign, nonatomic) unsigned sourceVersion;	// G=0x379efc9d; S=0x379efcad; @synthesize=_sourceVersion
- (void)addAttributionApps:(id)apps;	// 0x379eed25
- (void)addAttributionRequirements:(int)requirements;	// 0x379eec35
- (void)addLocalizedAttribution:(id)attribution;	// 0x379eeb51
// declared property getter: - (id)attributionApps;	// 0x379efcdd
- (id)attributionAppsAtIndex:(unsigned)index;	// 0x379eedb1
- (unsigned)attributionAppsCount;	// 0x379eed91
// declared property getter: - (int *)attributionRequirements;	// 0x379eec11
- (int)attributionRequirementsAtIndex:(unsigned)index;	// 0x379eec49
// declared property getter: - (unsigned)attributionRequirementsCount;	// 0x379eebfd
- (id)bestLocalizedAttribution;	// 0x379f58a1
- (void)clearAttributionApps;	// 0x379eed05
- (void)clearAttributionRequirements;	// 0x379eec21
- (void)clearLocalizedAttributions;	// 0x379eeb31
- (void)copyTo:(id)to;	// 0x379ef931
- (void)dealloc;	// 0x379eeab5
- (id)description;	// 0x379eedd1
- (id)dictionaryRepresentation;	// 0x379eee41
- (unsigned)hash;	// 0x379efbd9
- (BOOL)isEqual:(id)equal;	// 0x379efad5
- (id)localizedAttributionAtIndex:(unsigned)index;	// 0x379eebdd
// declared property getter: - (id)localizedAttributions;	// 0x379efcbd
- (unsigned)localizedAttributionsCount;	// 0x379eebbd
- (BOOL)readFrom:(id)from;	// 0x379ef635
// declared property setter: - (void)setAttributionApps:(id)apps;	// 0x379efced
- (void)setAttributionRequirements:(int *)requirements count:(unsigned)count;	// 0x379eeced
// declared property setter: - (void)setLocalizedAttributions:(id)attributions;	// 0x379efccd
// declared property setter: - (void)setSourceIdentifier:(id)identifier;	// 0x379efc8d
// declared property setter: - (void)setSourceVersion:(unsigned)version;	// 0x379efcad
// declared property getter: - (id)sourceIdentifier;	// 0x379efc7d
// declared property getter: - (unsigned)sourceVersion;	// 0x379efc9d
- (void)writeTo:(id)to;	// 0x379ef641
@end
