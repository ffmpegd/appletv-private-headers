/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKObject.h"
#import "EventKit-Structs.h"

@class EKObjectToOneRelation, NSDate, EKStructuredLocation;

@interface EKAlarm : EKObject <NSCopying> {
	EKObjectToOneRelation *_locationRelation;	// 36 = 0x24
}
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x34b352d5; S=0x34b3e6b9; 
@property(retain) id acknowledgedDate;	// G=0x34b77d81; S=0x34b77d9d; converted property
@property(assign, getter=isDefaultAlarm) BOOL defaultAlarm;	// G=0x34b77e19; S=0x34b77e49; converted property
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation;	// G=0x34b781ad; S=0x34b781bd; @synthesize=_locationRelation
@property(assign, nonatomic) int proximity;	// G=0x34b35311; S=0x34b3f929; 
@property(assign, nonatomic) double relativeOffset;	// G=0x34b35171; S=0x34b350c5; 
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;	// G=0x34b3e719; S=0x34b3f8d5; 
+ (id)alarmWithAbsoluteDate:(id)absoluteDate;	// 0x34b3e5c1
+ (id)alarmWithRelativeOffset:(double)relativeOffset;	// 0x34b34f75
+ (BOOL)areLocationsAllowed;	// 0x34b78145
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)authorizationStatus;	// 0x34b7817d
+ (BOOL)areLocationsAvailable;	// 0x34b2cacd
- (id)init;	// 0x34b34ff1
- (id)initWithAbsoluteDate:(id)absoluteDate;	// 0x34b3e5fd
- (id)initWithRelativeOffset:(double)relativeOffset;	// 0x34b34fb5
- (id)UUID;	// 0x34b77d65
- (id)_locationRelation;	// 0x34b3e741
// declared property getter: - (id)absoluteDate;	// 0x34b352d5
// converted property getter: - (id)acknowledgedDate;	// 0x34b77d81
- (id)copyWithZone:(NSZone *)zone;	// 0x34b77e8d
- (void)dealloc;	// 0x34b3538d
- (id)description;	// 0x34b78099
- (id)externalID;	// 0x34b77db9
- (BOOL)isAbsolute;	// 0x34b352b9
// converted property getter: - (BOOL)isDefaultAlarm;	// 0x34b77e19
- (id)lazyLoadRelationForKey:(id)key;	// 0x34b351d1
// declared property getter: - (id)locationRelation;	// 0x34b781ad
- (id)owner;	// 0x34b3621d
- (id)ownerUUID;	// 0x34b77dd5
// declared property getter: - (int)proximity;	// 0x34b35311
- (BOOL)rebase;	// 0x34b77f8d
// declared property getter: - (double)relativeOffset;	// 0x34b35171
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x34b3e6b9
// converted property setter: - (void)setAcknowledgedDate:(id)date;	// 0x34b77d9d
// converted property setter: - (void)setDefaultAlarm:(BOOL)alarm;	// 0x34b77e49
// declared property setter: - (void)setLocationRelation:(id)relation;	// 0x34b781bd
// declared property setter: - (void)setProximity:(int)proximity;	// 0x34b3f929
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x34b350c5
// declared property setter: - (void)setStructuredLocation:(id)location;	// 0x34b3f8d5
// declared property getter: - (id)structuredLocation;	// 0x34b3e719
- (BOOL)validate:(id *)validate;	// 0x34b36161
@end

