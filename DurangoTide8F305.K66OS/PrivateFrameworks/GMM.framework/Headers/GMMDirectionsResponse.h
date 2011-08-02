/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMDateTime, GMMDirectionsIconResponse, NSMutableArray, NSString;

@interface GMMDirectionsResponse : PBCodable {
@private
	int _status;	// 4 = 0x4
	NSMutableArray *_modes;	// 8 = 0x8
	GMMDateTime *_requestedDateTime;	// 12 = 0xc
	int _requestedTimeType;	// 16 = 0x10
	BOOL _hasRequestedTimeType;	// 20 = 0x14
	NSMutableArray *_waypointFeedbacks;	// 24 = 0x18
	NSMutableArray *_trips;	// 28 = 0x1c
	GMMDirectionsIconResponse *_icons;	// 32 = 0x20
	NSString *_notice;	// 36 = 0x24
	NSMutableArray *_agencys;	// 40 = 0x28
	int _recommendedDistanceUnits;	// 44 = 0x2c
	BOOL _hasRecommendedDistanceUnits;	// 48 = 0x30
	NSMutableArray *_optionsUseds;	// 52 = 0x34
	NSMutableArray *_alerts;	// 56 = 0x38
	NSMutableArray *_alternateModes;	// 60 = 0x3c
}
@property(retain, nonatomic) NSMutableArray *agencys;	// G=0x32b9bf6d; S=0x32b9d775; @synthesize=_agencys
@property(readonly, assign, nonatomic) int agencysCount;	// G=0x32b9d1e9; 
@property(retain, nonatomic) NSMutableArray *alerts;	// G=0x32b9bf2d; S=0x32b9d7c5; @synthesize=_alerts
@property(readonly, assign, nonatomic) int alertsCount;	// G=0x32b9cfa9; 
@property(retain, nonatomic) NSMutableArray *alternateModes;	// G=0x32b9bf1d; S=0x32b9d7ed; @synthesize=_alternateModes
@property(readonly, assign, nonatomic) int alternateModesCount;	// G=0x32b9ce89; 
@property(readonly, assign, nonatomic) BOOL hasIcons;	// G=0x32b9bed9; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x32b9beed; 
@property(readonly, assign, nonatomic) BOOL hasRecommendedDistanceUnits;	// G=0x32b9bf4d; @synthesize=_hasRecommendedDistanceUnits
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x32b9bea9; 
@property(readonly, assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x32b9bfbd; @synthesize=_hasRequestedTimeType
@property(retain, nonatomic) GMMDirectionsIconResponse *icons;	// G=0x32b9bf8d; S=0x32b9d725; @synthesize=_icons
@property(retain, nonatomic) NSMutableArray *modes;	// G=0x32b9bfed; S=0x32b9d685; @synthesize=_modes
@property(readonly, assign, nonatomic) int modesCount;	// G=0x32b9d575; 
@property(retain, nonatomic) NSString *notice;	// G=0x32b9bf7d; S=0x32b9d74d; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *optionsUseds;	// G=0x32b9bf3d; S=0x32b9d79d; @synthesize=_optionsUseds
@property(readonly, assign, nonatomic) int optionsUsedsCount;	// G=0x32b9d0c9; 
@property(assign, nonatomic) int recommendedDistanceUnits;	// G=0x32b9bf5d; S=0x32b9bf01; @synthesize=_recommendedDistanceUnits
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x32b9bfdd; S=0x32b9d6ad; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedTimeType;	// G=0x32b9bfcd; S=0x32b9bebd; @synthesize=_requestedTimeType
@property(assign, nonatomic) int status;	// G=0x32b9bffd; S=0x32b9c00d; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *trips;	// G=0x32b9bf9d; S=0x32b9d6fd; @synthesize=_trips
@property(readonly, assign, nonatomic) int tripsCount;	// G=0x32b9d309; 
@property(retain, nonatomic) NSMutableArray *waypointFeedbacks;	// G=0x32b9bfad; S=0x32b9d6d5; @synthesize=_waypointFeedbacks
@property(readonly, assign, nonatomic) int waypointFeedbacksCount;	// G=0x32b9d429; 
- (id)init;	// 0x32b9c01d
- (void)addAgency:(id)agency;	// 0x32b9d0ed
- (void)addAlert:(id)alert;	// 0x32b9cead
- (void)addAlternateMode:(id)mode;	// 0x32b9cd8d
- (void)addMode:(int)mode;	// 0x32b9d44d
- (void)addOptionsUsed:(id)used;	// 0x32b9cfcd
- (void)addTrip:(id)trip;	// 0x32b9d20d
- (void)addWaypointFeedback:(id)feedback;	// 0x32b9d32d
- (id)agencyAtIndex:(unsigned)index;	// 0x32b9d11d
// declared property getter: - (id)agencys;	// 0x32b9bf6d
// declared property getter: - (int)agencysCount;	// 0x32b9d1e9
- (id)alertAtIndex:(unsigned)index;	// 0x32b9cedd
// declared property getter: - (id)alerts;	// 0x32b9bf2d
// declared property getter: - (int)alertsCount;	// 0x32b9cfa9
- (id)alternateModeAtIndex:(unsigned)index;	// 0x32b9cdbd
// declared property getter: - (id)alternateModes;	// 0x32b9bf1d
// declared property getter: - (int)alternateModesCount;	// 0x32b9ce89
- (void)dealloc;	// 0x32b9d599
- (id)description;	// 0x32b9c059
// declared property getter: - (BOOL)hasIcons;	// 0x32b9bed9
// declared property getter: - (BOOL)hasNotice;	// 0x32b9beed
// declared property getter: - (BOOL)hasRecommendedDistanceUnits;	// 0x32b9bf4d
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x32b9bea9
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x32b9bfbd
// declared property getter: - (id)icons;	// 0x32b9bf8d
- (int)modeAtIndex:(unsigned)index;	// 0x32b9d47d
// declared property getter: - (id)modes;	// 0x32b9bfed
// declared property getter: - (int)modesCount;	// 0x32b9d575
// declared property getter: - (id)notice;	// 0x32b9bf7d
- (id)optionsUsedAtIndex:(unsigned)index;	// 0x32b9cffd
// declared property getter: - (id)optionsUseds;	// 0x32b9bf3d
// declared property getter: - (int)optionsUsedsCount;	// 0x32b9d0c9
- (BOOL)readFrom:(id)from;	// 0x32b9c9e1
// declared property getter: - (int)recommendedDistanceUnits;	// 0x32b9bf5d
// declared property getter: - (id)requestedDateTime;	// 0x32b9bfdd
// declared property getter: - (int)requestedTimeType;	// 0x32b9bfcd
- (void)setAgency:(id)agency atIndex:(unsigned)index;	// 0x32b9d181
// declared property setter: - (void)setAgencys:(id)agencys;	// 0x32b9d775
- (void)setAlert:(id)alert atIndex:(unsigned)index;	// 0x32b9cf41
// declared property setter: - (void)setAlerts:(id)alerts;	// 0x32b9d7c5
- (void)setAlternateMode:(id)mode atIndex:(unsigned)index;	// 0x32b9ce21
// declared property setter: - (void)setAlternateModes:(id)modes;	// 0x32b9d7ed
// declared property setter: - (void)setIcons:(id)icons;	// 0x32b9d725
- (void)setMode:(int)mode atIndex:(unsigned)index;	// 0x32b9d4ed
// declared property setter: - (void)setModes:(id)modes;	// 0x32b9d685
// declared property setter: - (void)setNotice:(id)notice;	// 0x32b9d74d
- (void)setOptionsUsed:(id)used atIndex:(unsigned)index;	// 0x32b9d061
// declared property setter: - (void)setOptionsUseds:(id)useds;	// 0x32b9d79d
// declared property setter: - (void)setRecommendedDistanceUnits:(int)units;	// 0x32b9bf01
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x32b9d6ad
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x32b9bebd
// declared property setter: - (void)setStatus:(int)status;	// 0x32b9c00d
- (void)setTrip:(id)trip atIndex:(unsigned)index;	// 0x32b9d2a1
// declared property setter: - (void)setTrips:(id)trips;	// 0x32b9d6fd
- (void)setWaypointFeedback:(id)feedback atIndex:(unsigned)index;	// 0x32b9d3c1
// declared property setter: - (void)setWaypointFeedbacks:(id)feedbacks;	// 0x32b9d6d5
// declared property getter: - (int)status;	// 0x32b9bffd
- (id)tripAtIndex:(unsigned)index;	// 0x32b9d23d
// declared property getter: - (id)trips;	// 0x32b9bf9d
// declared property getter: - (int)tripsCount;	// 0x32b9d309
- (id)waypointFeedbackAtIndex:(unsigned)index;	// 0x32b9d35d
// declared property getter: - (id)waypointFeedbacks;	// 0x32b9bfad
// declared property getter: - (int)waypointFeedbacksCount;	// 0x32b9d429
- (void)writeTo:(id)to;	// 0x32b9c365
@end
