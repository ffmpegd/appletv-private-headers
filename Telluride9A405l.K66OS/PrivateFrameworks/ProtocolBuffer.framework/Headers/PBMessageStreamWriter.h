/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class PBStreamWriter, PBDataWriter;

@interface PBMessageStreamWriter : NSObject {
	PBStreamWriter *_writer;	// 4 = 0x4
	PBDataWriter *_messageWriter;	// 8 = 0x8
}
@property(retain) PBDataWriter *messageWriter;	// G=0x31035fdd; S=0x31035ff1; @synthesize=_messageWriter
@property(retain) PBStreamWriter *writer;	// G=0x31035fa5; S=0x31035fb9; @synthesize=_writer
- (id)initWithOutputStream:(id)outputStream;	// 0x31035de5
- (void)dealloc;	// 0x31035e89
// declared property getter: - (id)messageWriter;	// 0x31035fdd
// declared property setter: - (void)setMessageWriter:(id)writer;	// 0x31035ff1
// declared property setter: - (void)setWriter:(id)writer;	// 0x31035fb9
- (BOOL)writeMessage:(id)message;	// 0x31035ee1
// declared property getter: - (id)writer;	// 0x31035fa5
@end

