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

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x37969249; S=0x379692c5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectCommitCompleted;	// 0x379691b9
+ (id)domainObjectCommitCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x379691fd
- (id)encodedClassName;	// 0x379691ad
- (id)groupIdentifier;	// 0x3796919d
// declared property getter: - (id)identifier;	// 0x37969249
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x379692c5
@end

