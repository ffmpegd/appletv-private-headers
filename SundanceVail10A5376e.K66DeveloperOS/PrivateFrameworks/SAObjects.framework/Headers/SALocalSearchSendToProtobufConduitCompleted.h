/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString;

@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *rawResponse;	// G=0x34265479; S=0x34265495; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)sendToProtobufConduitCompleted;	// 0x342653e9
+ (id)sendToProtobufConduitCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3426542d
- (id)encodedClassName;	// 0x342653dd
- (id)groupIdentifier;	// 0x342653cd
// declared property getter: - (id)rawResponse;	// 0x34265479
// declared property setter: - (void)setRawResponse:(id)response;	// 0x34265495
@end
