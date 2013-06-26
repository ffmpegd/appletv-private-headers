/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate;

@interface SAEmailSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *endDate;	// G=0x353db2c9; S=0x353db2e5; 
@property(copy, nonatomic) NSString *fromEmail;	// G=0x353db335; S=0x353db351; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x353db3a1; S=0x353db3bd; 
@property(assign, nonatomic) int status;	// G=0x353db40d; S=0x353db435; 
@property(copy, nonatomic) NSString *subject;	// G=0x353db465; S=0x353db481; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353db1ed; S=0x353db269; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353db4d1; S=0x353db4ed; 
@property(copy, nonatomic) NSString *toEmail;	// G=0x353db53d; S=0x353db559; 
+ (id)search;	// 0x353db15d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353db1a1
- (id)encodedClassName;	// 0x353db151
// declared property getter: - (id)endDate;	// 0x353db2c9
// declared property getter: - (id)fromEmail;	// 0x353db335
- (id)groupIdentifier;	// 0x353db141
- (BOOL)requiresResponse;	// 0x353db5a9
// declared property setter: - (void)setEndDate:(id)date;	// 0x353db2e5
// declared property setter: - (void)setFromEmail:(id)email;	// 0x353db351
// declared property setter: - (void)setStartDate:(id)date;	// 0x353db3bd
// declared property setter: - (void)setStatus:(int)status;	// 0x353db435
// declared property setter: - (void)setSubject:(id)subject;	// 0x353db481
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353db269
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353db4ed
// declared property setter: - (void)setToEmail:(id)email;	// 0x353db559
// declared property getter: - (id)startDate;	// 0x353db3a1
// declared property getter: - (int)status;	// 0x353db40d
// declared property getter: - (id)subject;	// 0x353db465
// declared property getter: - (id)targetAppId;	// 0x353db1ed
// declared property getter: - (id)timeZoneId;	// 0x353db4d1
// declared property getter: - (id)toEmail;	// 0x353db53d
@end
