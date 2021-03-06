/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOVisibleTileSet : PBCodable {
@private
	XXStruct_VrsxJB *_tileKeys;	// 4 = 0x4
	unsigned _tileKeysCount;	// 8 = 0x8
	unsigned _tileKeysSpace;	// 12 = 0xc
	unsigned _identifier;	// 16 = 0x10
	int _style;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned identifier;	// G=0x34b8e43d; S=0x34b8e44d; @synthesize=_identifier
@property(assign, nonatomic) int style;	// G=0x34b8e41d; S=0x34b8e42d; @synthesize=_style
@property(readonly, assign, nonatomic) XXStruct_VrsxJB *tileKeys;	// G=0x34b8da05; 
@property(readonly, assign, nonatomic) unsigned tileKeysCount;	// G=0x34b8d9f5; 
- (void)addTileKey:(XXStruct_VrsxJB)key;	// 0x34b8da51
- (void)clearTileKeys;	// 0x34b8da15
- (void)copyTo:(id)to;	// 0x34b8e215
- (void)dealloc;	// 0x34b8d9b5
- (id)description;	// 0x34b8dc5d
- (id)dictionaryRepresentation;	// 0x34b8dccd
- (unsigned)hash;	// 0x34b8e3a5
// declared property getter: - (unsigned)identifier;	// 0x34b8e43d
- (BOOL)isEqual:(id)equal;	// 0x34b8e309
- (BOOL)readFrom:(id)from;	// 0x34b8e0ed
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x34b8e44d
// declared property setter: - (void)setStyle:(int)style;	// 0x34b8e42d
- (void)setTileKeys:(XXStruct_VrsxJB *)keys count:(unsigned)count;	// 0x34b8dc0d
// declared property getter: - (int)style;	// 0x34b8e41d
- (XXStruct_VrsxJB)tileKeyAtIndex:(unsigned)index;	// 0x34b8db4d
// declared property getter: - (XXStruct_VrsxJB *)tileKeys;	// 0x34b8da05
// declared property getter: - (unsigned)tileKeysCount;	// 0x34b8d9f5
- (void)writeTo:(id)to;	// 0x34b8e0f9
@end

