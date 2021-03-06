/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString, NSArray;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *data;	// G=0x3039bfb5; S=0x3039bfd1; 
@property(assign, nonatomic) int packetNumber;	// G=0x3039c021; S=0x3039c091; 
@property(copy, nonatomic) NSArray *packets;	// G=0x3039c0d5; S=0x3039c0f1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)speechPacket;	// 0x3039bf25
+ (id)speechPacketWithDictionary:(id)dictionary context:(id)context;	// 0x3039bf69
// declared property getter: - (id)data;	// 0x3039bfb5
- (id)encodedClassName;	// 0x3039bf19
- (id)groupIdentifier;	// 0x3039bf09
// declared property getter: - (int)packetNumber;	// 0x3039c021
// declared property getter: - (id)packets;	// 0x3039c0d5
// declared property setter: - (void)setData:(id)data;	// 0x3039bfd1
// declared property setter: - (void)setPacketNumber:(int)number;	// 0x3039c091
// declared property setter: - (void)setPackets:(id)packets;	// 0x3039c0f1
@end

