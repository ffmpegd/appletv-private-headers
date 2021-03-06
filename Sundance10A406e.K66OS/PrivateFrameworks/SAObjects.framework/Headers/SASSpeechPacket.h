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
@property(copy, nonatomic) NSData *data;	// G=0x3250f635; S=0x3250f651; 
@property(assign, nonatomic) int packetNumber;	// G=0x3250f6a1; S=0x3250f711; 
@property(copy, nonatomic) NSArray *packets;	// G=0x3250f755; S=0x3250f771; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)speechPacket;	// 0x3250f5a5
+ (id)speechPacketWithDictionary:(id)dictionary context:(id)context;	// 0x3250f5e9
// declared property getter: - (id)data;	// 0x3250f635
- (id)encodedClassName;	// 0x3250f599
- (id)groupIdentifier;	// 0x3250f589
// declared property getter: - (int)packetNumber;	// 0x3250f6a1
// declared property getter: - (id)packets;	// 0x3250f755
// declared property setter: - (void)setData:(id)data;	// 0x3250f651
// declared property setter: - (void)setPacketNumber:(int)number;	// 0x3250f711
// declared property setter: - (void)setPackets:(id)packets;	// 0x3250f771
@end

