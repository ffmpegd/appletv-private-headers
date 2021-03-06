/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SASRecognition, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SASRecognition *recognition;	// G=0x34225f0d; S=0x34225f61; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x34225f9d; S=0x34225fb9; 
+ (id)speechRecognized;	// 0x34225e7d
+ (id)speechRecognizedWithDictionary:(id)dictionary context:(id)context;	// 0x34225ec1
- (id)encodedClassName;	// 0x34225e71
- (id)groupIdentifier;	// 0x34225e61
// declared property getter: - (id)recognition;	// 0x34225f0d
- (BOOL)requiresResponse;	// 0x34226009
// declared property getter: - (id)sessionId;	// 0x34225f9d
// declared property setter: - (void)setRecognition:(id)recognition;	// 0x34225f61
// declared property setter: - (void)setSessionId:(id)anId;	// 0x34225fb9
@end

