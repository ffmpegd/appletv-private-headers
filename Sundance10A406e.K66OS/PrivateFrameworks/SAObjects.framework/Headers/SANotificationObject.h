/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, NSString;

@interface SANotificationObject : SADomainObject {
}
@property(copy, nonatomic) NSString *applicationId;	// G=0x3254cc29; S=0x3254cc45; 
@property(copy, nonatomic) NSDate *date;	// G=0x3254cc95; S=0x3254ccb1; 
@property(copy, nonatomic) NSNumber *dateIsAllDay;	// G=0x3254cd01; S=0x3254cd1d; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x3254cd6d; S=0x3254cd89; 
@property(copy, nonatomic) NSDate *recencyDate;	// G=0x3254cdd9; S=0x3254cdf5; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x3254ce45; S=0x3254ce61; 
@property(copy, nonatomic) NSString *type;	// G=0x3254ceb1; S=0x3254cecd; 
+ (id)object;	// 0x3254cb99
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x3254cbdd
// declared property getter: - (id)applicationId;	// 0x3254cc29
// declared property getter: - (id)date;	// 0x3254cc95
// declared property getter: - (id)dateIsAllDay;	// 0x3254cd01
- (id)encodedClassName;	// 0x3254cb8d
// declared property getter: - (id)endDate;	// 0x3254cd6d
- (id)groupIdentifier;	// 0x3254cb7d
// declared property getter: - (id)recencyDate;	// 0x3254cdd9
// declared property setter: - (void)setApplicationId:(id)anId;	// 0x3254cc45
// declared property setter: - (void)setDate:(id)date;	// 0x3254ccb1
// declared property setter: - (void)setDateIsAllDay:(id)day;	// 0x3254cd1d
// declared property setter: - (void)setEndDate:(id)date;	// 0x3254cd89
// declared property setter: - (void)setRecencyDate:(id)date;	// 0x3254cdf5
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x3254ce61
// declared property setter: - (void)setType:(id)type;	// 0x3254cecd
// declared property getter: - (id)timeZoneId;	// 0x3254ce45
// declared property getter: - (id)type;	// 0x3254ceb1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3254cf1d
@end

