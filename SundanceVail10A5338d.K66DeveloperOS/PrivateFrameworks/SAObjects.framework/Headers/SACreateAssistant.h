/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSData;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *activationToken;	// G=0x379731cd; S=0x379731e9; 
@property(copy, nonatomic) NSString *connectionType;	// G=0x37973239; S=0x37973255; 
@property(copy, nonatomic) NSString *language;	// G=0x379732a5; S=0x379732c1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *validationData;	// G=0x37973311; S=0x3797332d; 
+ (id)createAssistant;	// 0x3797313d
+ (id)createAssistantWithDictionary:(id)dictionary context:(id)context;	// 0x37973181
// declared property getter: - (id)activationToken;	// 0x379731cd
// declared property getter: - (id)connectionType;	// 0x37973239
- (id)encodedClassName;	// 0x37973131
- (id)groupIdentifier;	// 0x37973121
// declared property getter: - (id)language;	// 0x379732a5
// declared property setter: - (void)setActivationToken:(id)token;	// 0x379731e9
// declared property setter: - (void)setConnectionType:(id)type;	// 0x37973255
// declared property setter: - (void)setLanguage:(id)language;	// 0x379732c1
// declared property setter: - (void)setValidationData:(id)data;	// 0x3797332d
// declared property getter: - (id)validationData;	// 0x37973311
@end
