/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

@interface GEOETARoute : PBCodable {
	XXStruct_stqouA _trafficColorOffsets;	// 4 = 0x4
	XXStruct_stqouA _trafficColors;	// 16 = 0x10
	NSMutableArray *_invalidSectionZilchPoints;	// 28 = 0x1c
	NSMutableArray *_reroutedRoutes;	// 32 = 0x20
	NSData *_routeID;	// 36 = 0x24
	NSMutableArray *_steps;	// 40 = 0x28
	NSData *_zilchPoints;	// 44 = 0x2c
	BOOL _routeNoLongerValid;	// 48 = 0x30
	XXStruct_ec15KC _has;	// 49 = 0x31
}
@property(readonly, assign, nonatomic) BOOL hasRouteID;	// G=0x302d9361; 
@property(assign, nonatomic) BOOL hasRouteNoLongerValid;	// G=0x302d94a1; S=0x302d9485; 
@property(readonly, assign, nonatomic) BOOL hasZilchPoints;	// G=0x302d9445; 
@property(retain, nonatomic) NSMutableArray *invalidSectionZilchPoints;	// G=0x302dae6d; S=0x302dae7d; @synthesize=_invalidSectionZilchPoints
@property(retain, nonatomic) NSMutableArray *reroutedRoutes;	// G=0x302dae4d; S=0x302dae5d; @synthesize=_reroutedRoutes
@property(retain, nonatomic) NSData *routeID;	// G=0x302daddd; S=0x302daded; @synthesize=_routeID
@property(assign, nonatomic) BOOL routeNoLongerValid;	// G=0x302dae3d; S=0x302d945d; @synthesize=_routeNoLongerValid
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x302dadfd; S=0x302dae0d; @synthesize=_steps
@property(readonly, assign, nonatomic) unsigned *trafficColorOffsets;	// G=0x302d9769; 
@property(readonly, assign, nonatomic) unsigned trafficColorOffsetsCount;	// G=0x302d9755; 
@property(readonly, assign, nonatomic) unsigned *trafficColors;	// G=0x302d9661; 
@property(readonly, assign, nonatomic) unsigned trafficColorsCount;	// G=0x302d964d; 
@property(retain, nonatomic) NSData *zilchPoints;	// G=0x302dae1d; S=0x302dae2d; @synthesize=_zilchPoints
- (void)addInvalidSectionZilchPoints:(id)points;	// 0x302d95a1
- (void)addReroutedRoute:(id)route;	// 0x302d94d5
- (void)addStep:(id)step;	// 0x302d9399
- (void)addTrafficColor:(unsigned)color;	// 0x302d9685
- (void)addTrafficColorOffset:(unsigned)offset;	// 0x302d978d
- (void)clearInvalidSectionZilchPoints;	// 0x302d9581
- (void)clearReroutedRoutes;	// 0x302d94b5
- (void)clearSteps;	// 0x302d9379
- (void)clearTrafficColorOffsets;	// 0x302d9779
- (void)clearTrafficColors;	// 0x302d9671
- (void)copyTo:(id)to;	// 0x302da83d
- (void)dealloc;	// 0x302d92a9
- (id)description;	// 0x302d985d
- (id)dictionaryRepresentation;	// 0x302d98cd
// declared property getter: - (BOOL)hasRouteID;	// 0x302d9361
// declared property getter: - (BOOL)hasRouteNoLongerValid;	// 0x302d94a1
// declared property getter: - (BOOL)hasZilchPoints;	// 0x302d9445
- (unsigned)hash;	// 0x302dacd1
// declared property getter: - (id)invalidSectionZilchPoints;	// 0x302dae6d
- (id)invalidSectionZilchPointsAtIndex:(unsigned)index;	// 0x302d962d
- (unsigned)invalidSectionZilchPointsCount;	// 0x302d960d
- (BOOL)isEqual:(id)equal;	// 0x302dab25
- (BOOL)readFrom:(id)from;	// 0x302da2e1
- (id)reroutedRouteAtIndex:(unsigned)index;	// 0x302d9561
// declared property getter: - (id)reroutedRoutes;	// 0x302dae4d
- (unsigned)reroutedRoutesCount;	// 0x302d9541
// declared property getter: - (id)routeID;	// 0x302daddd
// declared property getter: - (BOOL)routeNoLongerValid;	// 0x302dae3d
// declared property setter: - (void)setHasRouteNoLongerValid:(BOOL)valid;	// 0x302d9485
// declared property setter: - (void)setInvalidSectionZilchPoints:(id)points;	// 0x302dae7d
// declared property setter: - (void)setReroutedRoutes:(id)routes;	// 0x302dae5d
// declared property setter: - (void)setRouteID:(id)anId;	// 0x302daded
// declared property setter: - (void)setRouteNoLongerValid:(BOOL)valid;	// 0x302d945d
// declared property setter: - (void)setSteps:(id)steps;	// 0x302dae0d
- (void)setTrafficColorOffsets:(unsigned *)offsets count:(unsigned)count;	// 0x302d9845
- (void)setTrafficColors:(unsigned *)colors count:(unsigned)count;	// 0x302d973d
// declared property setter: - (void)setZilchPoints:(id)points;	// 0x302dae2d
- (id)stepAtIndex:(unsigned)index;	// 0x302d9425
// declared property getter: - (id)steps;	// 0x302dadfd
- (unsigned)stepsCount;	// 0x302d9405
- (unsigned)trafficColorAtIndex:(unsigned)index;	// 0x302d9699
- (unsigned)trafficColorOffsetAtIndex:(unsigned)index;	// 0x302d97a1
// declared property getter: - (unsigned *)trafficColorOffsets;	// 0x302d9769
// declared property getter: - (unsigned)trafficColorOffsetsCount;	// 0x302d9755
// declared property getter: - (unsigned *)trafficColors;	// 0x302d9661
// declared property getter: - (unsigned)trafficColorsCount;	// 0x302d964d
- (void)writeTo:(id)to;	// 0x302da2ed
// declared property getter: - (id)zilchPoints;	// 0x302dae1d
@end

