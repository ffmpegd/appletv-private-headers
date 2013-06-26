/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSString *utterance;	// G=0x303af889; S=0x303af8a5; 
+ (id)assistantPayload;	// 0x303af7f9
+ (id)assistantPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x303af83d
- (id)encodedClassName;	// 0x303af7ed
- (id)groupIdentifier;	// 0x303af7dd
// declared property setter: - (void)setUtterance:(id)utterance;	// 0x303af8a5
// declared property getter: - (id)utterance;	// 0x303af889
@end
