/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOPlace, NSString;

@interface GEOTransitStop : PBCodable {
	GEOPlace *_place;	// 4 = 0x4
	BOOL _hasTimestamp;	// 8 = 0x8
	double _timestamp;	// 12 = 0xc
	BOOL _hasTimezoneOffset;	// 20 = 0x14
	int _timezoneOffset;	// 24 = 0x18
	BOOL _hasDepartureInterval;	// 28 = 0x1c
	int _departureInterval;	// 32 = 0x20
	NSString *_iconName;	// 36 = 0x24
	NSString *_transitCost;	// 40 = 0x28
	BOOL _hasAgentIndex;	// 44 = 0x2c
	int _agentIndex;	// 48 = 0x30
	NSString *_supplementalInstructions;	// 52 = 0x34
}
@property(assign, nonatomic) int agentIndex;	// G=0x3670e611; S=0x3670dd59; @synthesize=_agentIndex
@property(assign, nonatomic) int departureInterval;	// G=0x3670e579; S=0x3670dd05; @synthesize=_departureInterval
@property(assign, nonatomic) BOOL hasAgentIndex;	// G=0x3670e5f1; S=0x3670e601; @synthesize=_hasAgentIndex
@property(assign, nonatomic) BOOL hasDepartureInterval;	// G=0x3670e559; S=0x3670e569; @synthesize=_hasDepartureInterval
@property(readonly, assign, nonatomic) BOOL hasIconName;	// G=0x3670dd29; 
@property(readonly, assign, nonatomic) BOOL hasPlace;	// G=0x3670dc9d; 
@property(readonly, assign, nonatomic) BOOL hasSupplementalInstructions;	// G=0x3670dd7d; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x3670e4f1; S=0x3670e501; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasTimezoneOffset;	// G=0x3670e529; S=0x3670e539; @synthesize=_hasTimezoneOffset
@property(readonly, assign, nonatomic) BOOL hasTransitCost;	// G=0x3670dd41; 
@property(retain, nonatomic) NSString *iconName;	// G=0x3670e589; S=0x3670e599; @synthesize=_iconName
@property(retain, nonatomic) GEOPlace *place;	// G=0x3670e4bd; S=0x3670e4cd; @synthesize=_place
@property(retain, nonatomic) NSString *supplementalInstructions;	// G=0x3670e621; S=0x3670e631; @synthesize=_supplementalInstructions
@property(assign, nonatomic) double timestamp;	// G=0x3670e511; S=0x3670dcb5; @synthesize=_timestamp
@property(assign, nonatomic) int timezoneOffset;	// G=0x3670e549; S=0x3670dce1; @synthesize=_timezoneOffset
@property(retain, nonatomic) NSString *transitCost;	// G=0x3670e5bd; S=0x3670e5cd; @synthesize=_transitCost
// declared property getter: - (int)agentIndex;	// 0x3670e611
- (void)dealloc;	// 0x3670dc1d
// declared property getter: - (int)departureInterval;	// 0x3670e579
- (id)description;	// 0x3670dd95
- (id)dictionaryRepresentation;	// 0x3670de05
// declared property getter: - (BOOL)hasAgentIndex;	// 0x3670e5f1
// declared property getter: - (BOOL)hasDepartureInterval;	// 0x3670e559
// declared property getter: - (BOOL)hasIconName;	// 0x3670dd29
// declared property getter: - (BOOL)hasPlace;	// 0x3670dc9d
// declared property getter: - (BOOL)hasSupplementalInstructions;	// 0x3670dd7d
// declared property getter: - (BOOL)hasTimestamp;	// 0x3670e4f1
// declared property getter: - (BOOL)hasTimezoneOffset;	// 0x3670e529
// declared property getter: - (BOOL)hasTransitCost;	// 0x3670dd41
// declared property getter: - (id)iconName;	// 0x3670e589
// declared property getter: - (id)place;	// 0x3670e4bd
- (BOOL)readFrom:(id)from;	// 0x3670e059
// declared property setter: - (void)setAgentIndex:(int)index;	// 0x3670dd59
// declared property setter: - (void)setDepartureInterval:(int)interval;	// 0x3670dd05
// declared property setter: - (void)setHasAgentIndex:(BOOL)index;	// 0x3670e601
// declared property setter: - (void)setHasDepartureInterval:(BOOL)interval;	// 0x3670e569
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x3670e501
// declared property setter: - (void)setHasTimezoneOffset:(BOOL)offset;	// 0x3670e539
// declared property setter: - (void)setIconName:(id)name;	// 0x3670e599
// declared property setter: - (void)setPlace:(id)place;	// 0x3670e4cd
// declared property setter: - (void)setSupplementalInstructions:(id)instructions;	// 0x3670e631
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x3670dcb5
// declared property setter: - (void)setTimezoneOffset:(int)offset;	// 0x3670dce1
// declared property setter: - (void)setTransitCost:(id)cost;	// 0x3670e5cd
// declared property getter: - (id)supplementalInstructions;	// 0x3670e621
// declared property getter: - (double)timestamp;	// 0x3670e511
// declared property getter: - (int)timezoneOffset;	// 0x3670e549
// declared property getter: - (id)transitCost;	// 0x3670e5bd
- (void)writeTo:(id)to;	// 0x3670e2d5
@end

