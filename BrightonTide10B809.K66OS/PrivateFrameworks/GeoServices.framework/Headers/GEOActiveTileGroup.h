/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

@interface GEOActiveTileGroup : PBCodable {
	NSMutableArray *_attributions;	// 4 = 0x4
	unsigned _identifier;	// 8 = 0x8
	NSMutableArray *_resources;	// 12 = 0xc
	NSMutableArray *_tileSets;	// 16 = 0x10
	NSString *_uniqueIdentifier;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x33f7559d; S=0x33f73385; @synthesize=_attributions
@property(readonly, assign, nonatomic) BOOL hasUniqueIdentifier;	// G=0x33fc5db9; 
@property(assign, nonatomic) unsigned identifier;	// G=0x33fc673d; S=0x33fc674d; @synthesize=_identifier
@property(retain, nonatomic) NSMutableArray *resources;	// G=0x33f50189; S=0x33f73365; @synthesize=_resources
@property(retain, nonatomic) NSMutableArray *tileSets;	// G=0x33f502e9; S=0x33f731d1; @synthesize=_tileSets
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x33fc675d; S=0x33f73375; @synthesize=_uniqueIdentifier
- (id)_activeTileSetForStyle:(int)style size:(int)size scale:(int)scale;	// 0x33f50a19
- (void)_resetBestLanguages;	// 0x33fbd8d5
- (id)activeTileSetForKey:(const GEOTileKey *)key;	// 0x33fbd711
- (id)activeTileSetForTileType:(int)tileType scale:(int)scale;	// 0x33f501e1
- (void)addAttribution:(id)attribution;	// 0x33f4f855
- (void)addResource:(id)resource;	// 0x33f4f7e9
- (void)addTileSet:(id)set;	// 0x33f4e95d
- (id)attributionAtIndex:(unsigned)index;	// 0x33f50b49
// declared property getter: - (id)attributions;	// 0x33f7559d
- (unsigned)attributionsCount;	// 0x33f50b29
- (id)baseURLStringForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbd745
- (void)clearAttributions;	// 0x33fc5dd1
- (void)clearResources;	// 0x33fc5d79
- (void)clearTileSets;	// 0x33fc5d19
- (void)copyTo:(id)to;	// 0x33fc64dd
- (void)dealloc;	// 0x33f73151
- (id)description;	// 0x33fc5df1
- (id)dictionaryRepresentation;	// 0x33fc5e61
// declared property getter: - (BOOL)hasUniqueIdentifier;	// 0x33fc5db9
- (unsigned)hash;	// 0x33fc6699
// declared property getter: - (unsigned)identifier;	// 0x33fc673d
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbd881
- (BOOL)isEqual:(id)equal;	// 0x33f72c71
- (id)languageForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbd8ad
- (id)localizationURLStringForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbd7b1
- (id)multiTileURLStringForTileKey:(const GEOTileKey *)tileKey useStatusCodes:(BOOL *)codes;	// 0x33fbd76d
- (BOOL)readFrom:(id)from;	// 0x33f4e605
- (id)resourceAtIndex:(unsigned)index;	// 0x33fc5d99
// declared property getter: - (id)resources;	// 0x33f50189
- (unsigned)resourcesCount;	// 0x33f50169
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x33f73385
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x33fc674d
// declared property setter: - (void)setResources:(id)resources;	// 0x33f73365
// declared property setter: - (void)setTileSets:(id)sets;	// 0x33f731d1
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x33f73375
- (BOOL)supportsTileStyle:(int)style size:(int)size scale:(int)scale;	// 0x33f509ed
- (id)tileSetAtIndex:(unsigned)index;	// 0x33fc5d59
// declared property getter: - (id)tileSets;	// 0x33f502e9
- (unsigned)tileSetsCount;	// 0x33fc5d39
- (double)timeToLiveForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbd801
// declared property getter: - (id)uniqueIdentifier;	// 0x33fc675d
- (unsigned)versionForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbd7d9
- (void)writeTo:(id)to;	// 0x33fc61a9
@end

