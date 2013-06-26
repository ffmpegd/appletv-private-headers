/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x355ba395; S=0x355ba3e9; 
+ (id)domainObjectDelete;	// 0x355ba305
+ (id)domainObjectDeleteWithDictionary:(id)dictionary context:(id)context;	// 0x355ba349
- (id)encodedClassName;	// 0x355ba2f9
- (id)groupIdentifier;	// 0x355ba2e9
// declared property getter: - (id)identifier;	// 0x355ba395
- (BOOL)requiresResponse;	// 0x355ba425
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x355ba3e9
@end
