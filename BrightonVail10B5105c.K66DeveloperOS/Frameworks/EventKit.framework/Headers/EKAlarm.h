/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKObject.h"

@class EKObjectToOneRelation, NSDate, EKStructuredLocation;

@interface EKAlarm : EKObject <NSCopying> {
	EKObjectToOneRelation *_locationRelation;	// 36 = 0x24
}
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x35b6b179; S=0x35b6b195; 
@property(retain) id acknowledgedDate;	// G=0x35b6b1f5; S=0x35b6b211; converted property
@property(assign, getter=isDefaultAlarm) BOOL defaultAlarm;	// G=0x35b6b3e5; S=0x35b6b415; converted property
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation;	// G=0x35b6b8d5; S=0x35b6b8e5; @synthesize=_locationRelation
@property(assign, nonatomic) int proximity;	// G=0x35b6b2a9; S=0x35b6b265; 
@property(assign, nonatomic) double relativeOffset;	// G=0x35b6b0dd; S=0x35b6b111; 
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;	// G=0x35b6b379; S=0x35b6b325; 
+ (int)_currentAuthorizationStatus;	// 0x35b6b811
+ (id)alarmWithAbsoluteDate:(id)absoluteDate;	// 0x35b6ad31
+ (id)alarmWithRelativeOffset:(double)relativeOffset;	// 0x35b6ad6d
+ (BOOL)areLocationsAllowed;	// 0x35b6b839
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)authorizationStatus;	// 0x35b6b869
+ (BOOL)areLocationsAvailable;	// 0x35b21619
+ (BOOL)areLocationsCurrentlyEnabled;	// 0x35b6b899
- (id)init;	// 0x35b6adad
- (id)initWithAbsoluteDate:(id)absoluteDate;	// 0x35b6ae09
- (id)initWithRelativeOffset:(double)relativeOffset;	// 0x35b6aec5
- (id)UUID;	// 0x35b6b0c1
- (id)_locationRelation;	// 0x35b6b309
- (id)_originalAlarmRelation;	// 0x35b6b459
// declared property getter: - (id)absoluteDate;	// 0x35b6b179
// converted property getter: - (id)acknowledgedDate;	// 0x35b6b1f5
- (id)copyWithZone:(NSZone *)zone;	// 0x35b6b49d
- (void)dealloc;	// 0x35b6af01
- (id)description;	// 0x35b6b6a9
- (id)externalID;	// 0x35b6b22d
- (BOOL)isAbsolute;	// 0x35b6b249
// converted property getter: - (BOOL)isDefaultAlarm;	// 0x35b6b3e5
- (id)lazyLoadRelationForKey:(id)key;	// 0x35b6af4d
// declared property getter: - (id)locationRelation;	// 0x35b6b8d5
- (id)originalAlarm;	// 0x35b6b475
- (id)owner;	// 0x35b6b08d
- (id)ownerUUID;	// 0x35b6b3a1
// declared property getter: - (int)proximity;	// 0x35b6b2a9
- (BOOL)rebase;	// 0x35b6b59d
// declared property getter: - (double)relativeOffset;	// 0x35b6b0dd
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x35b6b195
// converted property setter: - (void)setAcknowledgedDate:(id)date;	// 0x35b6b211
// converted property setter: - (void)setDefaultAlarm:(BOOL)alarm;	// 0x35b6b415
// declared property setter: - (void)setLocationRelation:(id)relation;	// 0x35b6b8e5
// declared property setter: - (void)setProximity:(int)proximity;	// 0x35b6b265
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x35b6b111
// declared property setter: - (void)setStructuredLocation:(id)location;	// 0x35b6b325
// declared property getter: - (id)structuredLocation;	// 0x35b6b379
- (BOOL)validate:(id *)validate;	// 0x35b6b755
@end
