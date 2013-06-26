/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, SASRecognition;

@interface SASSpeechRecognized : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SASRecognition *recognition;	// G=0x326a55e5; S=0x326a5629; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x326a5665; S=0x326a5681; 
+ (id)speechRecognized;	// 0x326a5555
+ (id)speechRecognizedWithDictionary:(id)dictionary context:(id)context;	// 0x326a5599
- (id)encodedClassName;	// 0x326a5549
- (id)groupIdentifier;	// 0x326a5539
// declared property getter: - (id)recognition;	// 0x326a55e5
- (BOOL)requiresResponse;	// 0x326a56d1
// declared property getter: - (id)sessionId;	// 0x326a5665
// declared property setter: - (void)setRecognition:(id)recognition;	// 0x326a5629
// declared property setter: - (void)setSessionId:(id)anId;	// 0x326a5681
@end
