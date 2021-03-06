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

@interface SADomainObjectCancelCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectCancelCompleted;	// 0x355b9bed
+ (id)domainObjectCancelCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x355b9c31
- (id)encodedClassName;	// 0x355b9be1
- (id)groupIdentifier;	// 0x355b9bd1
@end

