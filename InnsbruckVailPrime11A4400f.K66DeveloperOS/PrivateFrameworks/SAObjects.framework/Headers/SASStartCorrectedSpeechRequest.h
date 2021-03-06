/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAStartRequest.h"

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest {
}
@property(copy, nonatomic) NSString *interactionId;	// G=0x326c3ff5; S=0x326c4011; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x326c4061; S=0x326c407d; 
+ (id)startCorrectedSpeechRequest;	// 0x326c3f65
+ (id)startCorrectedSpeechRequestWithDictionary:(id)dictionary context:(id)context;	// 0x326c3fa9
- (id)encodedClassName;	// 0x326c3f59
- (id)groupIdentifier;	// 0x326c3f49
// declared property getter: - (id)interactionId;	// 0x326c3ff5
// declared property getter: - (id)sessionId;	// 0x326c4061
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x326c4011
// declared property setter: - (void)setSessionId:(id)anId;	// 0x326c407d
@end

