/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x32f588f5; S=0x32f58949; 
+ (id)acknowledgeAlert;	// 0x32f58865
+ (id)acknowledgeAlertWithDictionary:(id)dictionary context:(id)context;	// 0x32f588a9
- (id)encodedClassName;	// 0x32f58859
- (id)groupIdentifier;	// 0x32f58849
// declared property getter: - (id)object;	// 0x32f588f5
- (BOOL)requiresResponse;	// 0x32f58985
// declared property setter: - (void)setObject:(id)object;	// 0x32f58949
@end
