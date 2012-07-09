/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int reason;	// G=0x3794a435; S=0x3794a45d; 
@property(copy, nonatomic) NSString *reasonDescription;	// G=0x3794a48d; S=0x3794a4a9; 
+ (id)speechFailure;	// 0x3794a3a5
+ (id)speechFailureWithDictionary:(id)dictionary context:(id)context;	// 0x3794a3e9
- (id)encodedClassName;	// 0x3794a399
- (id)groupIdentifier;	// 0x3794a389
// declared property getter: - (int)reason;	// 0x3794a435
// declared property getter: - (id)reasonDescription;	// 0x3794a48d
- (BOOL)requiresResponse;	// 0x3794a4f9
// declared property setter: - (void)setReason:(int)reason;	// 0x3794a45d
// declared property setter: - (void)setReasonDescription:(id)description;	// 0x3794a4a9
@end
