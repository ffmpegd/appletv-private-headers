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
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x327b80a1; 
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x3275cfa9; S=0x32766619; 
@property(assign, nonatomic) int alarmType;	// G=0x327b81a5; S=0x327b81c1; 
@property(copy, nonatomic) NSData *externalData;	// G=0x327b8201; S=0x327b821d; 
@property(copy, nonatomic) NSString *externalID;	// G=0x327b8239; S=0x327b8255; 
@property(readonly, assign, nonatomic) BOOL isAbsolute;	// G=0x327b80bd; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x32765865; S=0x32766e41; 
@property(retain) id owner;	// G=0x32761d3d; S=0x3275fe15; converted property
@property(assign, nonatomic) int proximity;	// G=0x3275d025; S=0x32766e5d; 
@property(assign, nonatomic) double relativeOffset;	// G=0x32763a01; S=0x3275fd0d; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x327b80dd; S=0x327b8149; 
+ (id)relations;	// 0x3275fe31
- (id)init;	// 0x3275cd05
// declared property getter: - (id)UUID;	// 0x327b80a1
// declared property getter: - (id)absoluteDate;	// 0x3275cfa9
// declared property getter: - (int)alarmType;	// 0x327b81a5
- (id)copyWithZone:(NSZone *)zone;	// 0x327b8271
- (id)description;	// 0x327b83ad
- (int)entityType;	// 0x3275fbe9
// declared property getter: - (id)externalData;	// 0x327b8201
// declared property getter: - (id)externalID;	// 0x327b8239
// declared property getter: - (BOOL)isAbsolute;	// 0x327b80bd
// declared property getter: - (id)location;	// 0x32765865
// converted property getter: - (id)owner;	// 0x32761d3d
// declared property getter: - (int)proximity;	// 0x3275d025
// declared property getter: - (double)relativeOffset;	// 0x32763a01
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x32766619
// declared property setter: - (void)setAlarmType:(int)type;	// 0x327b81c1
// declared property setter: - (void)setExternalData:(id)data;	// 0x327b821d
// declared property setter: - (void)setExternalID:(id)anId;	// 0x327b8255
// declared property setter: - (void)setLocation:(id)location;	// 0x32766e41
// converted property setter: - (void)setOwner:(id)owner;	// 0x3275fe15
// declared property setter: - (void)setProximity:(int)proximity;	// 0x32766e5d
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x3275fd0d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x327b8149
// declared property getter: - (id)timeZone;	// 0x327b80dd
- (BOOL)validate:(id *)validate;	// 0x32761cf5
@end
