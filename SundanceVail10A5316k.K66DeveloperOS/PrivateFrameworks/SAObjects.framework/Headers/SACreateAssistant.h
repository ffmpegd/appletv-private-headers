/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *activationToken;	// G=0x32f5a929; S=0x32f5a945; 
@property(copy, nonatomic) NSString *connectionType;	// G=0x32f5a995; S=0x32f5a9b1; 
@property(copy, nonatomic) NSString *language;	// G=0x32f5aa01; S=0x32f5aa1d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *validationData;	// G=0x32f5aa6d; S=0x32f5aa89; 
+ (id)createAssistant;	// 0x32f5a899
+ (id)createAssistantWithDictionary:(id)dictionary context:(id)context;	// 0x32f5a8dd
// declared property getter: - (id)activationToken;	// 0x32f5a929
// declared property getter: - (id)connectionType;	// 0x32f5a995
- (id)encodedClassName;	// 0x32f5a88d
- (id)groupIdentifier;	// 0x32f5a87d
// declared property getter: - (id)language;	// 0x32f5aa01
// declared property setter: - (void)setActivationToken:(id)token;	// 0x32f5a945
// declared property setter: - (void)setConnectionType:(id)type;	// 0x32f5a9b1
// declared property setter: - (void)setLanguage:(id)language;	// 0x32f5aa1d
// declared property setter: - (void)setValidationData:(id)data;	// 0x32f5aa89
// declared property getter: - (id)validationData;	// 0x32f5aa6d
@end

