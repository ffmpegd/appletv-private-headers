/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVAudioBuffer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) int bytesCapacity;	// G=0x3679ba6d; 
@property(assign) int bytesDataSize;	// G=0x3679ba81; S=0x3679ba95; 
@property(readonly, assign) int channels;	// G=0x3679ba59; 
@property(readonly, assign) void *data;	// G=0x3679bab1; 
@property(readonly, assign) int packetDescriptionCapacity;	// G=0x3679bac5; 
@property(readonly, assign) int packetDescriptionCount;	// G=0x3679bad9; 
@property(readonly, assign) AudioStreamPacketDescription *packetDescriptions;	// G=0x3679baed; 
- (id)initWithAudioQueueBuffer:(MyAudioQueueBuffer *)audioQueueBuffer channels:(int)channels;	// 0x3679bd55
// declared property getter: - (int)bytesCapacity;	// 0x3679ba6d
// declared property getter: - (int)bytesDataSize;	// 0x3679ba81
// declared property getter: - (int)channels;	// 0x3679ba59
// declared property getter: - (void *)data;	// 0x3679bab1
- (void)dealloc;	// 0x3679bc69
- (void)finalize;	// 0x3679bb35
// declared property getter: - (int)packetDescriptionCapacity;	// 0x3679bac5
// declared property getter: - (int)packetDescriptionCount;	// 0x3679bad9
// declared property getter: - (AudioStreamPacketDescription *)packetDescriptions;	// 0x3679baed
// declared property setter: - (void)setBytesDataSize:(int)size;	// 0x3679ba95
- (void)setPacketDescriptions:(const AudioStreamPacketDescription *)descriptions count:(int)count;	// 0x3679bb01
@end

