/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SACancelRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)cancelRequest;	// 0x34243975
+ (id)cancelRequestWithDictionary:(id)dictionary context:(id)context;	// 0x342439b9
- (id)encodedClassName;	// 0x34243969
- (id)groupIdentifier;	// 0x34243959
@end

