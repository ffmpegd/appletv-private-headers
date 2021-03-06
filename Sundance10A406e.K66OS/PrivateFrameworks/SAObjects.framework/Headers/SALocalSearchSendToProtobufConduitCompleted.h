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
@property(copy, nonatomic) NSData *rawResponse;	// G=0x3254f0a9; S=0x3254f0c5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)sendToProtobufConduitCompleted;	// 0x3254f019
+ (id)sendToProtobufConduitCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3254f05d
- (id)encodedClassName;	// 0x3254f00d
- (id)groupIdentifier;	// 0x3254effd
// declared property getter: - (id)rawResponse;	// 0x3254f0a9
// declared property setter: - (void)setRawResponse:(id)response;	// 0x3254f0c5
@end

