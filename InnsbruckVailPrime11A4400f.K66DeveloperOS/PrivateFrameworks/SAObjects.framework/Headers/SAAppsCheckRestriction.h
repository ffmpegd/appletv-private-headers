/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAppsCheckRestriction : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *launchId;	// G=0x326dc141; S=0x326dc15d; 
+ (id)checkRestriction;	// 0x326dc0b1
+ (id)checkRestrictionWithDictionary:(id)dictionary context:(id)context;	// 0x326dc0f5
- (id)encodedClassName;	// 0x326dc0a5
- (id)groupIdentifier;	// 0x326dc095
// declared property getter: - (id)launchId;	// 0x326dc141
- (BOOL)requiresResponse;	// 0x326dc1ad
// declared property setter: - (void)setLaunchId:(id)anId;	// 0x326dc15d
@end

