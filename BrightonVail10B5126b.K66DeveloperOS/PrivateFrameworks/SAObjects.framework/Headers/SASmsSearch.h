/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate;

@interface SASmsSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x353c017d; S=0x353c0199; 
@property(copy, nonatomic) NSString *message;	// G=0x353c01e9; S=0x353c0205; 
@property(copy, nonatomic) NSString *recipient;	// G=0x353c0255; S=0x353c0271; 
@property(copy, nonatomic) NSString *sender;	// G=0x353c02c1; S=0x353c02dd; 
@property(copy, nonatomic) NSDate *start;	// G=0x353c032d; S=0x353c0349; 
@property(assign, nonatomic) int status;	// G=0x353c0399; S=0x353c03c1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c00a1; S=0x353c011d; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353c03f1; S=0x353c040d; 
+ (id)search;	// 0x353c0011
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353c0055
- (id)encodedClassName;	// 0x353c0005
// declared property getter: - (id)end;	// 0x353c017d
- (id)groupIdentifier;	// 0x353bfff5
// declared property getter: - (id)message;	// 0x353c01e9
// declared property getter: - (id)recipient;	// 0x353c0255
- (BOOL)requiresResponse;	// 0x353c045d
// declared property getter: - (id)sender;	// 0x353c02c1
// declared property setter: - (void)setEnd:(id)end;	// 0x353c0199
// declared property setter: - (void)setMessage:(id)message;	// 0x353c0205
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x353c0271
// declared property setter: - (void)setSender:(id)sender;	// 0x353c02dd
// declared property setter: - (void)setStart:(id)start;	// 0x353c0349
// declared property setter: - (void)setStatus:(int)status;	// 0x353c03c1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c011d
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353c040d
// declared property getter: - (id)start;	// 0x353c032d
// declared property getter: - (int)status;	// 0x353c0399
// declared property getter: - (id)targetAppId;	// 0x353c00a1
// declared property getter: - (id)timeZoneId;	// 0x353c03f1
@end

