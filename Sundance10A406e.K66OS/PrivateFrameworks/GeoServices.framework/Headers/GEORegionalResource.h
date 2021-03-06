/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable {
	XXStruct_1aFH4A *_tileRanges;	// 4 = 0x4
	unsigned _tileRangesCount;	// 8 = 0x8
	unsigned _tileRangesSpace;	// 12 = 0xc
	XXStruct_stqouA _validSubManifestVersions;	// 16 = 0x10
	NSMutableArray *_attributions;	// 28 = 0x1c
	NSMutableArray *_icons;	// 32 = 0x20
	unsigned _x;	// 36 = 0x24
	unsigned _y;	// 40 = 0x28
	unsigned _z;	// 44 = 0x2c
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 48 = 0x30
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x379b77bd; S=0x379b77cd; @synthesize=_attributions
@property(assign, nonatomic) BOOL hasX;	// G=0x379b5e59; S=0x379b5e3d; 
@property(assign, nonatomic) BOOL hasY;	// G=0x379b5eb5; S=0x379b5e95; 
@property(assign, nonatomic) BOOL hasZ;	// G=0x379b5f11; S=0x379b5ef1; 
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x379b779d; S=0x379b77ad; @synthesize=_icons
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *tileRanges;	// G=0x379b60cd; 
@property(readonly, assign, nonatomic) unsigned tileRangesCount;	// G=0x379b60bd; 
@property(readonly, assign, nonatomic) unsigned *validSubManifestVersions;	// G=0x379b6351; 
@property(readonly, assign, nonatomic) unsigned validSubManifestVersionsCount;	// G=0x379b633d; 
@property(assign, nonatomic) unsigned x;	// G=0x379b776d; S=0x379b5e15; @synthesize=_x
@property(assign, nonatomic) unsigned y;	// G=0x379b777d; S=0x379b5e6d; @synthesize=_y
@property(assign, nonatomic) unsigned z;	// G=0x379b778d; S=0x379b5ec9; @synthesize=_z
- (void)addAttribution:(id)attribution;	// 0x379b6011
- (void)addIcon:(id)icon;	// 0x379b5f45
- (void)addTileRange:(XXStruct_1aFH4A)range;	// 0x379b6119
- (void)addValidSubManifestVersion:(unsigned)version;	// 0x379b6375
- (id)attributionAtIndex:(unsigned)index;	// 0x379b609d
// declared property getter: - (id)attributions;	// 0x379b77bd
- (unsigned)attributionsCount;	// 0x379b607d
- (void)clearAttributions;	// 0x379b5ff1
- (void)clearIcons;	// 0x379b5f25
- (void)clearTileRanges;	// 0x379b60dd
- (void)clearValidSubManifestVersions;	// 0x379b6361
- (void)copyTo:(id)to;	// 0x379b71dd
- (void)dealloc;	// 0x379b5d99
- (id)description;	// 0x379b6445
- (id)dictionaryRepresentation;	// 0x379b64b5
// declared property getter: - (BOOL)hasX;	// 0x379b5e59
// declared property getter: - (BOOL)hasY;	// 0x379b5eb5
// declared property getter: - (BOOL)hasZ;	// 0x379b5f11
- (unsigned)hash;	// 0x379b7649
- (id)iconAtIndex:(unsigned)index;	// 0x379b5fd1
// declared property getter: - (id)icons;	// 0x379b779d
- (unsigned)iconsCount;	// 0x379b5fb1
- (BOOL)isEqual:(id)equal;	// 0x379b74b1
- (BOOL)readFrom:(id)from;	// 0x379b6e55
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x379b77cd
// declared property setter: - (void)setHasX:(BOOL)x;	// 0x379b5e3d
// declared property setter: - (void)setHasY:(BOOL)y;	// 0x379b5e95
// declared property setter: - (void)setHasZ:(BOOL)z;	// 0x379b5ef1
// declared property setter: - (void)setIcons:(id)icons;	// 0x379b77ad
- (void)setTileRanges:(XXStruct_1aFH4A *)ranges count:(unsigned)count;	// 0x379b62ed
- (void)setValidSubManifestVersions:(unsigned *)versions count:(unsigned)count;	// 0x379b642d
// declared property setter: - (void)setX:(unsigned)x;	// 0x379b5e15
// declared property setter: - (void)setY:(unsigned)y;	// 0x379b5e6d
// declared property setter: - (void)setZ:(unsigned)z;	// 0x379b5ec9
- (XXStruct_1aFH4A)tileRangeAtIndex:(unsigned)index;	// 0x379b6225
// declared property getter: - (XXStruct_1aFH4A *)tileRanges;	// 0x379b60cd
// declared property getter: - (unsigned)tileRangesCount;	// 0x379b60bd
- (unsigned)validSubManifestVersionAtIndex:(unsigned)index;	// 0x379b6389
// declared property getter: - (unsigned *)validSubManifestVersions;	// 0x379b6351
// declared property getter: - (unsigned)validSubManifestVersionsCount;	// 0x379b633d
- (void)writeTo:(id)to;	// 0x379b6e61
// declared property getter: - (unsigned)x;	// 0x379b776d
// declared property getter: - (unsigned)y;	// 0x379b777d
// declared property getter: - (unsigned)z;	// 0x379b778d
@end

