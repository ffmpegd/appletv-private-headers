/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSDate, NSURL;

@interface SASmsSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x32f334f9; S=0x32f33515; 
@property(copy, nonatomic) NSString *message;	// G=0x32f33565; S=0x32f33581; 
@property(copy, nonatomic) NSString *recipient;	// G=0x32f335d1; S=0x32f335ed; 
@property(copy, nonatomic) NSString *sender;	// G=0x32f3363d; S=0x32f33659; 
@property(copy, nonatomic) NSDate *start;	// G=0x32f336a9; S=0x32f336c5; 
@property(assign, nonatomic) int status;	// G=0x32f33715; S=0x32f3373d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3341d; S=0x32f33499; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x32f3376d; S=0x32f33789; 
+ (id)search;	// 0x32f3338d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x32f333d1
- (id)encodedClassName;	// 0x32f33381
// declared property getter: - (id)end;	// 0x32f334f9
- (id)groupIdentifier;	// 0x32f33371
// declared property getter: - (id)message;	// 0x32f33565
// declared property getter: - (id)recipient;	// 0x32f335d1
- (BOOL)requiresResponse;	// 0x32f337d9
// declared property getter: - (id)sender;	// 0x32f3363d
// declared property setter: - (void)setEnd:(id)end;	// 0x32f33515
// declared property setter: - (void)setMessage:(id)message;	// 0x32f33581
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x32f335ed
// declared property setter: - (void)setSender:(id)sender;	// 0x32f33659
// declared property setter: - (void)setStart:(id)start;	// 0x32f336c5
// declared property setter: - (void)setStatus:(int)status;	// 0x32f3373d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f33499
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x32f33789
// declared property getter: - (id)start;	// 0x32f336a9
// declared property getter: - (int)status;	// 0x32f33715
// declared property getter: - (id)targetAppId;	// 0x32f3341d
// declared property getter: - (id)timeZoneId;	// 0x32f3376d
@end
