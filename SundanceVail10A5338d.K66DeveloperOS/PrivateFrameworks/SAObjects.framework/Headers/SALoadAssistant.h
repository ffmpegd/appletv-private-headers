/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSData;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *activationToken;	// G=0x3797365d; S=0x37973679; 
@property(copy, nonatomic) NSString *assistantId;	// G=0x379736c9; S=0x379736e5; 
@property(copy, nonatomic) NSString *connectionType;	// G=0x37973735; S=0x37973751; 
@property(copy, nonatomic) NSString *language;	// G=0x379737a1; S=0x379737bd; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *sessionValidationData;	// G=0x3797380d; S=0x37973829; 
@property(copy, nonatomic) NSString *speechId;	// G=0x37973879; S=0x37973895; 
+ (id)loadAssistant;	// 0x379735cd
+ (id)loadAssistantWithDictionary:(id)dictionary context:(id)context;	// 0x37973611
// declared property getter: - (id)activationToken;	// 0x3797365d
// declared property getter: - (id)assistantId;	// 0x379736c9
// declared property getter: - (id)connectionType;	// 0x37973735
- (id)encodedClassName;	// 0x379735c1
- (id)groupIdentifier;	// 0x379735b1
// declared property getter: - (id)language;	// 0x379737a1
// declared property getter: - (id)sessionValidationData;	// 0x3797380d
// declared property setter: - (void)setActivationToken:(id)token;	// 0x37973679
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x379736e5
// declared property setter: - (void)setConnectionType:(id)type;	// 0x37973751
// declared property setter: - (void)setLanguage:(id)language;	// 0x379737bd
// declared property setter: - (void)setSessionValidationData:(id)data;	// 0x37973829
// declared property setter: - (void)setSpeechId:(id)anId;	// 0x37973895
// declared property getter: - (id)speechId;	// 0x37973879
@end
