/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOMapRequest.h"

@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeFinder : GEOMapRequest {
	unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> > _roadsConsidered;	// 16 = 0x10
	GEOMapTileFinder *_tileFinder;	// 36 = 0x24
	XXStruct_gLbvpC _centerPoint;	// 40 = 0x28
	double _mapRadius;	// 56 = 0x38
	id _edgeHandler;	// 64 = 0x40
	NSMutableSet *_edgeBuilders;	// 68 = 0x44
}
@property(copy, nonatomic) id edgeHandler;	// G=0x30f89c25; S=0x30f89c39; @synthesize=_edgeHandler
@property(readonly, assign, nonatomic) GEOMapAccess *map;	// G=0x30f893f5; 
- (id)initWithMap:(id)map center:(XXStruct_gLbvpC)center radius:(double)radius;	// 0x30f89141
- (id).cxx_construct;	// 0x30f89c5d
- (void).cxx_destruct;	// 0x30f89c49
- (void)cancel;	// 0x30f892a5
- (void)dealloc;	// 0x30f8922d
// declared property getter: - (id)edgeHandler;	// 0x30f89c25
- (void)findEdges:(id)edges;	// 0x30f89409
// declared property getter: - (id)map;	// 0x30f893f5
// declared property setter: - (void)setEdgeHandler:(id)handler;	// 0x30f89c39
@end

