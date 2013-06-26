/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOVLaneConnection : PBCodable {
	unsigned _firstLaneIndex;	// 4 = 0x4
	unsigned _firstRoadIndex;	// 8 = 0x8
	unsigned _secondLaneIndex;	// 12 = 0xc
	unsigned _secondRoadIndex;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned firstLaneIndex;	// G=0x30f5c8a1; S=0x30f5c8b1; @synthesize=_firstLaneIndex
@property(assign, nonatomic) unsigned firstRoadIndex;	// G=0x30f5c881; S=0x30f5c891; @synthesize=_firstRoadIndex
@property(assign, nonatomic) unsigned secondLaneIndex;	// G=0x30f5c8e1; S=0x30f5c8f1; @synthesize=_secondLaneIndex
@property(assign, nonatomic) unsigned secondRoadIndex;	// G=0x30f5c8c1; S=0x30f5c8d1; @synthesize=_secondRoadIndex
- (void)copyTo:(id)to;	// 0x30f5c6c9
- (void)dealloc;	// 0x30f5c0c1
- (id)description;	// 0x30f5c0ed
- (id)dictionaryRepresentation;	// 0x30f5c15d
// declared property getter: - (unsigned)firstLaneIndex;	// 0x30f5c8a1
// declared property getter: - (unsigned)firstRoadIndex;	// 0x30f5c881
- (unsigned)hash;	// 0x30f5c801
- (BOOL)isEqual:(id)equal;	// 0x30f5c76d
- (BOOL)readFrom:(id)from;	// 0x30f5c645
// declared property getter: - (unsigned)secondLaneIndex;	// 0x30f5c8e1
// declared property getter: - (unsigned)secondRoadIndex;	// 0x30f5c8c1
// declared property setter: - (void)setFirstLaneIndex:(unsigned)index;	// 0x30f5c8b1
// declared property setter: - (void)setFirstRoadIndex:(unsigned)index;	// 0x30f5c891
// declared property setter: - (void)setSecondLaneIndex:(unsigned)index;	// 0x30f5c8f1
// declared property setter: - (void)setSecondRoadIndex:(unsigned)index;	// 0x30f5c8d1
- (void)writeTo:(id)to;	// 0x30f5c651
@end
