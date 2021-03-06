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
@property(copy, nonatomic) NSString *applicationId;	// G=0x353fd2e1; S=0x353fd2fd; 
@property(copy, nonatomic) NSDate *date;	// G=0x353fd34d; S=0x353fd369; 
@property(copy, nonatomic) NSNumber *dateIsAllDay;	// G=0x353fd3b9; S=0x353fd3d5; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x353fd425; S=0x353fd441; 
@property(copy, nonatomic) NSDate *recencyDate;	// G=0x353fd491; S=0x353fd4ad; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353fd4fd; S=0x353fd519; 
@property(copy, nonatomic) NSString *type;	// G=0x353fd569; S=0x353fd585; 
+ (id)object;	// 0x353fd251
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x353fd295
// declared property getter: - (id)applicationId;	// 0x353fd2e1
// declared property getter: - (id)date;	// 0x353fd34d
// declared property getter: - (id)dateIsAllDay;	// 0x353fd3b9
- (id)encodedClassName;	// 0x353fd245
// declared property getter: - (id)endDate;	// 0x353fd425
- (id)groupIdentifier;	// 0x353fd235
// declared property getter: - (id)recencyDate;	// 0x353fd491
// declared property setter: - (void)setApplicationId:(id)anId;	// 0x353fd2fd
// declared property setter: - (void)setDate:(id)date;	// 0x353fd369
// declared property setter: - (void)setDateIsAllDay:(id)day;	// 0x353fd3d5
// declared property setter: - (void)setEndDate:(id)date;	// 0x353fd441
// declared property setter: - (void)setRecencyDate:(id)date;	// 0x353fd4ad
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353fd519
// declared property setter: - (void)setType:(id)type;	// 0x353fd585
// declared property getter: - (id)timeZoneId;	// 0x353fd4fd
// declared property getter: - (id)type;	// 0x353fd569
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353fd5d5
@end

