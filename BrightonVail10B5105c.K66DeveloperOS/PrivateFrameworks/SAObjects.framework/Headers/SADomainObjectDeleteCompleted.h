/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString;

@interface SADomainObjectDeleteCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectDeleteCompleted;	// 0x303bb445
+ (id)domainObjectDeleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x303bb489
- (id)encodedClassName;	// 0x303bb439
- (id)groupIdentifier;	// 0x303bb429
@end
