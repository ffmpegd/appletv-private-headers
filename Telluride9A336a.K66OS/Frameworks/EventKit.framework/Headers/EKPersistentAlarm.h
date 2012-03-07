/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone, EKPersistentLocation, NSData;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x313e60a1; 
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x3138afa9; S=0x31394619; 
@property(assign, nonatomic) int alarmType;	// G=0x313e61a5; S=0x313e61c1; 
@property(copy, nonatomic) NSData *externalData;	// G=0x313e6201; S=0x313e621d; 
@property(copy, nonatomic) NSString *externalID;	// G=0x313e6239; S=0x313e6255; 
@property(readonly, assign, nonatomic) BOOL isAbsolute;	// G=0x313e60bd; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x31393865; S=0x31394e41; 
@property(retain) id owner;	// G=0x3138fd3d; S=0x3138de15; converted property
@property(assign, nonatomic) int proximity;	// G=0x3138b025; S=0x31394e5d; 
@property(assign, nonatomic) double relativeOffset;	// G=0x31391a01; S=0x3138dd0d; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x313e60dd; S=0x313e6149; 
+ (id)relations;	// 0x3138de31
- (id)init;	// 0x3138ad05
// declared property getter: - (id)UUID;	// 0x313e60a1
// declared property getter: - (id)absoluteDate;	// 0x3138afa9
// declared property getter: - (int)alarmType;	// 0x313e61a5
- (id)copyWithZone:(NSZone *)zone;	// 0x313e6271
- (id)description;	// 0x313e63ad
- (int)entityType;	// 0x3138dbe9
// declared property getter: - (id)externalData;	// 0x313e6201
// declared property getter: - (id)externalID;	// 0x313e6239
// declared property getter: - (BOOL)isAbsolute;	// 0x313e60bd
// declared property getter: - (id)location;	// 0x31393865
// converted property getter: - (id)owner;	// 0x3138fd3d
// declared property getter: - (int)proximity;	// 0x3138b025
// declared property getter: - (double)relativeOffset;	// 0x31391a01
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x31394619
// declared property setter: - (void)setAlarmType:(int)type;	// 0x313e61c1
// declared property setter: - (void)setExternalData:(id)data;	// 0x313e621d
// declared property setter: - (void)setExternalID:(id)anId;	// 0x313e6255
// declared property setter: - (void)setLocation:(id)location;	// 0x31394e41
// converted property setter: - (void)setOwner:(id)owner;	// 0x3138de15
// declared property setter: - (void)setProximity:(int)proximity;	// 0x31394e5d
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x3138dd0d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x313e6149
// declared property getter: - (id)timeZone;	// 0x313e60dd
- (BOOL)validate:(id *)validate;	// 0x3138fcf5
@end
