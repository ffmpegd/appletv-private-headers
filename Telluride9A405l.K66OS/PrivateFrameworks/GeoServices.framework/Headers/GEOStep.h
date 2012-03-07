/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOTransitStop, NSString;

@interface GEOStep : PBCodable {
	NSString *_instructions;	// 4 = 0x4
	int _pointIndex;	// 8 = 0x8
	BOOL _hasRoadClass;	// 12 = 0xc
	int _roadClass;	// 16 = 0x10
	BOOL _hasDistance;	// 20 = 0x14
	int _distance;	// 24 = 0x18
	BOOL _hasExpectedTime;	// 28 = 0x1c
	int _expectedTime;	// 32 = 0x20
	BOOL _hasType;	// 36 = 0x24
	int _type;	// 40 = 0x28
	NSString *_maneuverIconName;	// 44 = 0x2c
	NSString *_maneuverPIPIconName;	// 48 = 0x30
	GEOTransitStop *_transitStop;	// 52 = 0x34
	NSString *_notice;	// 56 = 0x38
}
@property(assign, nonatomic) int distance;	// G=0x3144aadd; S=0x3144a259; @synthesize=_distance
@property(assign, nonatomic) int expectedTime;	// G=0x3144ab0d; S=0x3144a27d; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasDistance;	// G=0x3144aabd; S=0x3144aacd; @synthesize=_hasDistance
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x3144aaed; S=0x3144aafd; @synthesize=_hasExpectedTime
@property(readonly, assign, nonatomic) BOOL hasManeuverIconName;	// G=0x3144a2c5; 
@property(readonly, assign, nonatomic) BOOL hasManeuverPIPIconName;	// G=0x3144a2dd; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x3144a30d; 
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x3144aa8d; S=0x3144aa9d; @synthesize=_hasRoadClass
@property(readonly, assign, nonatomic) BOOL hasTransitStop;	// G=0x3144a2f5; 
@property(assign, nonatomic) BOOL hasType;	// G=0x3144ab1d; S=0x3144ab2d; @synthesize=_hasType
@property(retain, nonatomic) NSString *instructions;	// G=0x3144aa39; S=0x3144aa49; @synthesize=_instructions
@property(retain, nonatomic) NSString *maneuverIconName;	// G=0x3144ab4d; S=0x3144ab5d; @synthesize=_maneuverIconName
@property(retain, nonatomic) NSString *maneuverPIPIconName;	// G=0x3144ab81; S=0x3144ab91; @synthesize=_maneuverPIPIconName
@property(retain, nonatomic) NSString *notice;	// G=0x3144abe9; S=0x3144abf9; @synthesize=_notice
@property(assign, nonatomic) int pointIndex;	// G=0x3144aa6d; S=0x3144aa7d; @synthesize=_pointIndex
@property(assign, nonatomic) int roadClass;	// G=0x3144aaad; S=0x3144a235; @synthesize=_roadClass
@property(retain, nonatomic) GEOTransitStop *transitStop;	// G=0x3144abb5; S=0x3144abc5; @synthesize=_transitStop
@property(assign, nonatomic) int type;	// G=0x3144ab3d; S=0x3144a2a1; @synthesize=_type
- (void)dealloc;	// 0x3144a1a1
- (id)description;	// 0x3144a325
- (id)dictionaryRepresentation;	// 0x3144a395
// declared property getter: - (int)distance;	// 0x3144aadd
// declared property getter: - (int)expectedTime;	// 0x3144ab0d
// declared property getter: - (BOOL)hasDistance;	// 0x3144aabd
// declared property getter: - (BOOL)hasExpectedTime;	// 0x3144aaed
// declared property getter: - (BOOL)hasManeuverIconName;	// 0x3144a2c5
// declared property getter: - (BOOL)hasManeuverPIPIconName;	// 0x3144a2dd
// declared property getter: - (BOOL)hasNotice;	// 0x3144a30d
// declared property getter: - (BOOL)hasRoadClass;	// 0x3144aa8d
// declared property getter: - (BOOL)hasTransitStop;	// 0x3144a2f5
// declared property getter: - (BOOL)hasType;	// 0x3144ab1d
// declared property getter: - (id)instructions;	// 0x3144aa39
// declared property getter: - (id)maneuverIconName;	// 0x3144ab4d
// declared property getter: - (id)maneuverPIPIconName;	// 0x3144ab81
// declared property getter: - (id)notice;	// 0x3144abe9
// declared property getter: - (int)pointIndex;	// 0x3144aa6d
- (BOOL)readFrom:(id)from;	// 0x3144a5d1
// declared property getter: - (int)roadClass;	// 0x3144aaad
// declared property setter: - (void)setDistance:(int)distance;	// 0x3144a259
// declared property setter: - (void)setExpectedTime:(int)time;	// 0x3144a27d
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x3144aacd
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x3144aafd
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x3144aa9d
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x3144ab2d
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x3144aa49
// declared property setter: - (void)setManeuverIconName:(id)name;	// 0x3144ab5d
// declared property setter: - (void)setManeuverPIPIconName:(id)name;	// 0x3144ab91
// declared property setter: - (void)setNotice:(id)notice;	// 0x3144abf9
// declared property setter: - (void)setPointIndex:(int)index;	// 0x3144aa7d
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x3144a235
// declared property setter: - (void)setTransitStop:(id)stop;	// 0x3144abc5
// declared property setter: - (void)setType:(int)type;	// 0x3144a2a1
// declared property getter: - (id)transitStop;	// 0x3144abb5
// declared property getter: - (int)type;	// 0x3144ab3d
- (void)writeTo:(id)to;	// 0x3144a859
@end

