/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAWebSearchStarted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)searchStarted;	// 0x353d6df5
+ (id)searchStartedWithDictionary:(id)dictionary context:(id)context;	// 0x353d6e39
- (id)encodedClassName;	// 0x353d6de9
- (id)groupIdentifier;	// 0x353d6dd9
@end

