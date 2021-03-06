/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSArray *recipientsTo;	// G=0x355aed85; S=0x355aeda1; 
@property(copy, nonatomic) NSString *subject;	// G=0x355aedf1; S=0x355aee0d; 
+ (id)emailPayload;	// 0x355aecf5
+ (id)emailPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x355aed39
- (id)encodedClassName;	// 0x355aece9
- (id)groupIdentifier;	// 0x355aecd9
// declared property getter: - (id)recipientsTo;	// 0x355aed85
// declared property setter: - (void)setRecipientsTo:(id)to;	// 0x355aeda1
// declared property setter: - (void)setSubject:(id)subject;	// 0x355aee0d
// declared property getter: - (id)subject;	// 0x355aedf1
@end

