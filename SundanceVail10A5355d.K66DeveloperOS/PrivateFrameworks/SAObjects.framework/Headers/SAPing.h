/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAPing : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)ping;	// 0x366259f9
+ (id)pingWithDictionary:(id)dictionary context:(id)context;	// 0x36625a3d
- (id)encodedClassName;	// 0x366259ed
- (id)groupIdentifier;	// 0x366259dd
- (BOOL)requiresResponse;	// 0x36625a89
@end

