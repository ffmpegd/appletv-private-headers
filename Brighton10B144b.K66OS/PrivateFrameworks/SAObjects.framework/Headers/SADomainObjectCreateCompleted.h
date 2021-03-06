/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString, NSURL;

@interface SADomainObjectCreateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x353dee09; S=0x353dee85; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectCreateCompleted;	// 0x353ded79
+ (id)domainObjectCreateCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353dedbd
- (id)encodedClassName;	// 0x353ded6d
- (id)groupIdentifier;	// 0x353ded5d
// declared property getter: - (id)identifier;	// 0x353dee09
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353dee85
@end

