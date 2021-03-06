/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

@interface GEODirectionsResponse : PBCodable {
	NSData *_directionsResponseID;	// 4 = 0x4
	int _instructionSignFillColor;	// 8 = 0x8
	int _localDistanceUnits;	// 12 = 0xc
	NSMutableArray *_placeSearchResponses;	// 16 = 0x10
	NSMutableArray *_routes;	// 20 = 0x14
	int _status;	// 24 = 0x18
	BOOL _isNavigable;	// 28 = 0x1c
	BOOL _routeDeviatesFromOriginal;	// 29 = 0x1d
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 30 = 0x1e
}
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x34527305; S=0x34527315; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x34525eed; 
@property(assign, nonatomic) BOOL hasInstructionSignFillColor;	// G=0x34525ff5; S=0x34525fd9; 
@property(assign, nonatomic) BOOL hasIsNavigable;	// G=0x34525f75; S=0x34525f55; 
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x34525e55; S=0x34525e35; 
@property(assign, nonatomic) BOOL hasRouteDeviatesFromOriginal;	// G=0x34525ed9; S=0x34525eb9; 
@property(assign, nonatomic) int instructionSignFillColor;	// G=0x34525f89; S=0x34525fb1; @synthesize=_instructionSignFillColor
@property(assign, nonatomic) BOOL isNavigable;	// G=0x34525f05; S=0x34525f2d; @synthesize=_isNavigable
@property(assign, nonatomic) int localDistanceUnits;	// G=0x345272f5; S=0x34525e0d; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *placeSearchResponses;	// G=0x345272d5; S=0x345272e5; @synthesize=_placeSearchResponses
@property(assign, nonatomic) BOOL routeDeviatesFromOriginal;	// G=0x34525e69; S=0x34525e91; @synthesize=_routeDeviatesFromOriginal
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x345272b5; S=0x345272c5; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x34527295; S=0x345272a5; @synthesize=_status
- (void)addPlaceSearchResponse:(id)response;	// 0x34525d61
- (void)addRoute:(id)route;	// 0x34525c95
- (void)clearPlaceSearchResponses;	// 0x34525d41
- (void)clearRoutes;	// 0x34525c75
- (void)copyTo:(id)to;	// 0x34526d31
- (void)dealloc;	// 0x34525c09
- (id)description;	// 0x34526009
- (id)dictionaryRepresentation;	// 0x34526079
// declared property getter: - (id)directionsResponseID;	// 0x34527305
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x34525eed
// declared property getter: - (BOOL)hasInstructionSignFillColor;	// 0x34525ff5
// declared property getter: - (BOOL)hasIsNavigable;	// 0x34525f75
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x34525e55
// declared property getter: - (BOOL)hasRouteDeviatesFromOriginal;	// 0x34525ed9
- (unsigned)hash;	// 0x34527151
// declared property getter: - (int)instructionSignFillColor;	// 0x34525f89
- (BOOL)isEqual:(id)equal;	// 0x34526f81
// declared property getter: - (BOOL)isNavigable;	// 0x34525f05
// declared property getter: - (int)localDistanceUnits;	// 0x345272f5
- (id)placeSearchResponseAtIndex:(unsigned)index;	// 0x34525ded
// declared property getter: - (id)placeSearchResponses;	// 0x345272d5
- (unsigned)placeSearchResponsesCount;	// 0x34525dcd
- (BOOL)readFrom:(id)from;	// 0x345269c9
- (id)routeAtIndex:(unsigned)index;	// 0x34525d21
// declared property getter: - (BOOL)routeDeviatesFromOriginal;	// 0x34525e69
// declared property getter: - (id)routes;	// 0x345272b5
- (unsigned)routesCount;	// 0x34525d01
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x34527315
// declared property setter: - (void)setHasInstructionSignFillColor:(BOOL)color;	// 0x34525fd9
// declared property setter: - (void)setHasIsNavigable:(BOOL)navigable;	// 0x34525f55
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x34525e35
// declared property setter: - (void)setHasRouteDeviatesFromOriginal:(BOOL)original;	// 0x34525eb9
// declared property setter: - (void)setInstructionSignFillColor:(int)color;	// 0x34525fb1
// declared property setter: - (void)setIsNavigable:(BOOL)navigable;	// 0x34525f2d
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x34525e0d
// declared property setter: - (void)setPlaceSearchResponses:(id)responses;	// 0x345272e5
// declared property setter: - (void)setRouteDeviatesFromOriginal:(BOOL)original;	// 0x34525e91
// declared property setter: - (void)setRoutes:(id)routes;	// 0x345272c5
// declared property setter: - (void)setStatus:(int)status;	// 0x345272a5
// declared property getter: - (int)status;	// 0x34527295
- (void)writeTo:(id)to;	// 0x345269d5
@end

