/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVJunction : PBCodable {
	NSMutableArray *_connectingRoads;	// 4 = 0x4
	NSMutableArray *_laneConnections;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *connectingRoads;	// G=0x37a7826d; S=0x37a7827d; @synthesize=_connectingRoads
@property(retain, nonatomic) NSMutableArray *laneConnections;	// G=0x37a7828d; S=0x37a7829d; @synthesize=_laneConnections
- (void)addConnectingRoad:(id)road;	// 0x37a77769
- (void)addLaneConnections:(id)connections;	// 0x37a77835
- (void)clearConnectingRoads;	// 0x37a77749
- (void)clearLaneConnections;	// 0x37a77815
- (id)connectingRoadAtIndex:(unsigned)index;	// 0x37a777f5
// declared property getter: - (id)connectingRoads;	// 0x37a7826d
- (unsigned)connectingRoadsCount;	// 0x37a777d5
- (void)copyTo:(id)to;	// 0x37a780a1
- (void)dealloc;	// 0x37a776f1
- (id)description;	// 0x37a778e1
- (id)dictionaryRepresentation;	// 0x37a77951
- (unsigned)hash;	// 0x37a7822d
- (BOOL)isEqual:(id)equal;	// 0x37a7818d
// declared property getter: - (id)laneConnections;	// 0x37a7828d
- (id)laneConnectionsAtIndex:(unsigned)index;	// 0x37a778c1
- (unsigned)laneConnectionsCount;	// 0x37a778a1
- (BOOL)readFrom:(id)from;	// 0x37a77e31
// declared property setter: - (void)setConnectingRoads:(id)roads;	// 0x37a7827d
// declared property setter: - (void)setLaneConnections:(id)connections;	// 0x37a7829d
- (void)writeTo:(id)to;	// 0x37a77e3d
@end

