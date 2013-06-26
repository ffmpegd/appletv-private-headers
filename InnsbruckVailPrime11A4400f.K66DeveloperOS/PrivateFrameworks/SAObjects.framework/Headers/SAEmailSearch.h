/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand {
}
@property(copy, nonatomic) NSDate *endDate;	// G=0x326c0161; S=0x326c017d; 
@property(copy, nonatomic) NSString *fromEmail;	// G=0x326c01cd; S=0x326c01e9; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x326c0239; S=0x326c0255; 
@property(assign, nonatomic) int status;	// G=0x326c02a5; S=0x326c02cd; 
@property(copy, nonatomic) NSString *subject;	// G=0x326c02fd; S=0x326c0319; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x326c0369; S=0x326c0385; 
@property(copy, nonatomic) NSString *toEmail;	// G=0x326c03d5; S=0x326c03f1; 
+ (id)search;	// 0x326c00d1
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x326c0115
- (id)encodedClassName;	// 0x326c00c5
// declared property getter: - (id)endDate;	// 0x326c0161
// declared property getter: - (id)fromEmail;	// 0x326c01cd
- (id)groupIdentifier;	// 0x326c00b5
- (BOOL)requiresResponse;	// 0x326c0441
// declared property setter: - (void)setEndDate:(id)date;	// 0x326c017d
// declared property setter: - (void)setFromEmail:(id)email;	// 0x326c01e9
// declared property setter: - (void)setStartDate:(id)date;	// 0x326c0255
// declared property setter: - (void)setStatus:(int)status;	// 0x326c02cd
// declared property setter: - (void)setSubject:(id)subject;	// 0x326c0319
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x326c0385
// declared property setter: - (void)setToEmail:(id)email;	// 0x326c03f1
// declared property getter: - (id)startDate;	// 0x326c0239
// declared property getter: - (int)status;	// 0x326c02a5
// declared property getter: - (id)subject;	// 0x326c02fd
// declared property getter: - (id)timeZoneId;	// 0x326c0369
// declared property getter: - (id)toEmail;	// 0x326c03d5
@end
