/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class GMMDateTime, GMMDirectionsIconRequest, NSMutableArray, GMMMapInfo;

@interface GMMDirectionsRequest : PBRequest {
@private
	NSMutableArray *_modes;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 8 = 0x8
	GMMDateTime *_requestedDateTime;	// 12 = 0xc
	int _requestedTimeType;	// 16 = 0x10
	BOOL _hasRequestedTimeType;	// 20 = 0x14
	int _tripMaxCount;	// 24 = 0x18
	BOOL _hasTripMaxCount;	// 28 = 0x1c
	GMMDirectionsIconRequest *_iconRequest;	// 32 = 0x20
	int _requestedResultType;	// 36 = 0x24
	BOOL _hasRequestedResultType;	// 40 = 0x28
	int _resultPageOffset;	// 44 = 0x2c
	BOOL _hasResultPageOffset;	// 48 = 0x30
	GMMMapInfo *_mapViewport;	// 52 = 0x34
	NSMutableArray *_optionss;	// 56 = 0x38
	BOOL _includeStreetViewPanoId;	// 60 = 0x3c
	BOOL _hasIncludeStreetViewPanoId;	// 61 = 0x3d
	BOOL _addStepNoticesToInstructionText;	// 62 = 0x3e
	BOOL _hasAddStepNoticesToInstructionText;	// 63 = 0x3f
	BOOL _includeStructuredInstructions;	// 64 = 0x40
	BOOL _hasIncludeStructuredInstructions;	// 65 = 0x41
	BOOL _returnMultipleRoutes;	// 66 = 0x42
	BOOL _hasReturnMultipleRoutes;	// 67 = 0x43
}
@property(assign, nonatomic) BOOL addStepNoticesToInstructionText;	// G=0x34447c41; S=0x34447b99; @synthesize=_addStepNoticesToInstructionText
@property(readonly, assign, nonatomic) BOOL hasAddStepNoticesToInstructionText;	// G=0x34447c31; @synthesize=_hasAddStepNoticesToInstructionText
@property(readonly, assign, nonatomic) BOOL hasIconRequest;	// G=0x34447b1d; 
@property(readonly, assign, nonatomic) BOOL hasIncludeStreetViewPanoId;	// G=0x34447c51; @synthesize=_hasIncludeStreetViewPanoId
@property(readonly, assign, nonatomic) BOOL hasIncludeStructuredInstructions;	// G=0x34447c11; @synthesize=_hasIncludeStructuredInstructions
@property(readonly, assign, nonatomic) BOOL hasMapViewport;	// G=0x34447b69; 
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x34447ad1; 
@property(readonly, assign, nonatomic) BOOL hasRequestedResultType;	// G=0x34447cb1; @synthesize=_hasRequestedResultType
@property(readonly, assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x34447d01; @synthesize=_hasRequestedTimeType
@property(readonly, assign, nonatomic) BOOL hasResultPageOffset;	// G=0x34447c91; @synthesize=_hasResultPageOffset
@property(readonly, assign, nonatomic) BOOL hasReturnMultipleRoutes;	// G=0x34447bf1; @synthesize=_hasReturnMultipleRoutes
@property(readonly, assign, nonatomic) BOOL hasTripMaxCount;	// G=0x34447ce1; @synthesize=_hasTripMaxCount
@property(retain, nonatomic) GMMDirectionsIconRequest *iconRequest;	// G=0x34447cd1; S=0x34448e31; @synthesize=_iconRequest
@property(assign, nonatomic) BOOL includeStreetViewPanoId;	// G=0x34447c61; S=0x34447b7d; @synthesize=_includeStreetViewPanoId
@property(assign, nonatomic) BOOL includeStructuredInstructions;	// G=0x34447c21; S=0x34447bb5; @synthesize=_includeStructuredInstructions
@property(retain, nonatomic) GMMMapInfo *mapViewport;	// G=0x34447c81; S=0x34448e59; @synthesize=_mapViewport
@property(retain, nonatomic) NSMutableArray *modes;	// G=0x34447d41; S=0x34448db9; @synthesize=_modes
@property(readonly, assign, nonatomic) int modesCount;	// G=0x34448c25; 
@property(retain, nonatomic) NSMutableArray *optionss;	// G=0x34447c71; S=0x34448e81; @synthesize=_optionss
@property(readonly, assign, nonatomic) int optionssCount;	// G=0x344489b9; 
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x34447d21; S=0x34448e09; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedResultType;	// G=0x34447cc1; S=0x34447b31; @synthesize=_requestedResultType
@property(assign, nonatomic) int requestedTimeType;	// G=0x34447d11; S=0x34447ae5; @synthesize=_requestedTimeType
@property(assign, nonatomic) int resultPageOffset;	// G=0x34447ca1; S=0x34447b4d; @synthesize=_resultPageOffset
@property(assign, nonatomic) BOOL returnMultipleRoutes;	// G=0x34447c01; S=0x34447bd1; @synthesize=_returnMultipleRoutes
@property(assign, nonatomic) int tripMaxCount;	// G=0x34447cf1; S=0x34447b01; @synthesize=_tripMaxCount
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x34447d31; S=0x34448de1; @synthesize=_waypoints
@property(readonly, assign, nonatomic) int waypointsCount;	// G=0x34448ad9; 
- (id)init;	// 0x34448ced
- (void)addMode:(int)mode;	// 0x34448afd
- (void)addOptions:(id)options;	// 0x344488bd
// declared property getter: - (BOOL)addStepNoticesToInstructionText;	// 0x34447c41
- (void)addWaypoint:(id)waypoint;	// 0x344489dd
- (void)dealloc;	// 0x34448c49
- (id)description;	// 0x34447d51
// declared property getter: - (BOOL)hasAddStepNoticesToInstructionText;	// 0x34447c31
// declared property getter: - (BOOL)hasIconRequest;	// 0x34447b1d
// declared property getter: - (BOOL)hasIncludeStreetViewPanoId;	// 0x34447c51
// declared property getter: - (BOOL)hasIncludeStructuredInstructions;	// 0x34447c11
// declared property getter: - (BOOL)hasMapViewport;	// 0x34447b69
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x34447ad1
// declared property getter: - (BOOL)hasRequestedResultType;	// 0x34447cb1
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x34447d01
// declared property getter: - (BOOL)hasResultPageOffset;	// 0x34447c91
// declared property getter: - (BOOL)hasReturnMultipleRoutes;	// 0x34447bf1
// declared property getter: - (BOOL)hasTripMaxCount;	// 0x34447ce1
// declared property getter: - (id)iconRequest;	// 0x34447cd1
// declared property getter: - (BOOL)includeStreetViewPanoId;	// 0x34447c61
// declared property getter: - (BOOL)includeStructuredInstructions;	// 0x34447c21
// declared property getter: - (id)mapViewport;	// 0x34447c81
- (int)modeAtIndex:(unsigned)index;	// 0x34448b2d
// declared property getter: - (id)modes;	// 0x34447d41
// declared property getter: - (int)modesCount;	// 0x34448c25
- (id)optionsAtIndex:(unsigned)index;	// 0x344488ed
// declared property getter: - (id)optionss;	// 0x34447c71
// declared property getter: - (int)optionssCount;	// 0x344489b9
- (BOOL)readFrom:(id)from;	// 0x34448531
- (unsigned)requestTypeCode;	// 0x34447bed
// declared property getter: - (id)requestedDateTime;	// 0x34447d21
// declared property getter: - (int)requestedResultType;	// 0x34447cc1
// declared property getter: - (int)requestedTimeType;	// 0x34447d11
- (Class)responseClass;	// 0x34448da5
// declared property getter: - (int)resultPageOffset;	// 0x34447ca1
// declared property getter: - (BOOL)returnMultipleRoutes;	// 0x34447c01
// declared property setter: - (void)setAddStepNoticesToInstructionText:(BOOL)instructionText;	// 0x34447b99
// declared property setter: - (void)setIconRequest:(id)request;	// 0x34448e31
// declared property setter: - (void)setIncludeStreetViewPanoId:(BOOL)anId;	// 0x34447b7d
// declared property setter: - (void)setIncludeStructuredInstructions:(BOOL)instructions;	// 0x34447bb5
// declared property setter: - (void)setMapViewport:(id)viewport;	// 0x34448e59
- (void)setMode:(int)mode atIndex:(unsigned)index;	// 0x34448b9d
// declared property setter: - (void)setModes:(id)modes;	// 0x34448db9
- (void)setOptions:(id)options atIndex:(unsigned)index;	// 0x34448951
// declared property setter: - (void)setOptionss:(id)optionss;	// 0x34448e81
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x34448e09
// declared property setter: - (void)setRequestedResultType:(int)type;	// 0x34447b31
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x34447ae5
// declared property setter: - (void)setResultPageOffset:(int)offset;	// 0x34447b4d
// declared property setter: - (void)setReturnMultipleRoutes:(BOOL)routes;	// 0x34447bd1
// declared property setter: - (void)setTripMaxCount:(int)count;	// 0x34447b01
- (void)setWaypoint:(id)waypoint atIndex:(unsigned)index;	// 0x34448a71
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x34448de1
// declared property getter: - (int)tripMaxCount;	// 0x34447cf1
- (id)waypointAtIndex:(unsigned)index;	// 0x34448a0d
// declared property getter: - (id)waypoints;	// 0x34447d31
// declared property getter: - (int)waypointsCount;	// 0x34448ad9
- (void)writeTo:(id)to;	// 0x34448071
@end
