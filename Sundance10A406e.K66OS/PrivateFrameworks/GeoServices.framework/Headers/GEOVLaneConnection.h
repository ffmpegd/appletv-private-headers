/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOVLaneConnection : PBCodable {
	unsigned _firstLaneIndex;	// 4 = 0x4
	unsigned _firstRoadIndex;	// 8 = 0x8
	unsigned _secondLaneIndex;	// 12 = 0xc
	unsigned _secondRoadIndex;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned firstLaneIndex;	// G=0x379cd981; S=0x379cd991; @synthesize=_firstLaneIndex
@property(assign, nonatomic) unsigned firstRoadIndex;	// G=0x379cd961; S=0x379cd971; @synthesize=_firstRoadIndex
@property(assign, nonatomic) unsigned secondLaneIndex;	// G=0x379cd9c1; S=0x379cd9d1; @synthesize=_secondLaneIndex
@property(assign, nonatomic) unsigned secondRoadIndex;	// G=0x379cd9a1; S=0x379cd9b1; @synthesize=_secondRoadIndex
- (void)copyTo:(id)to;	// 0x379cd79d
- (void)dealloc;	// 0x379cd1b1
- (id)description;	// 0x379cd1dd
- (id)dictionaryRepresentation;	// 0x379cd24d
// declared property getter: - (unsigned)firstLaneIndex;	// 0x379cd981
// declared property getter: - (unsigned)firstRoadIndex;	// 0x379cd961
- (unsigned)hash;	// 0x379cd8d5
- (BOOL)isEqual:(id)equal;	// 0x379cd841
- (BOOL)readFrom:(id)from;	// 0x379cd719
// declared property getter: - (unsigned)secondLaneIndex;	// 0x379cd9c1
// declared property getter: - (unsigned)secondRoadIndex;	// 0x379cd9a1
// declared property setter: - (void)setFirstLaneIndex:(unsigned)index;	// 0x379cd991
// declared property setter: - (void)setFirstRoadIndex:(unsigned)index;	// 0x379cd971
// declared property setter: - (void)setSecondLaneIndex:(unsigned)index;	// 0x379cd9d1
// declared property setter: - (void)setSecondRoadIndex:(unsigned)index;	// 0x379cd9b1
- (void)writeTo:(id)to;	// 0x379cd725
@end
