/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "PBDataWriter.h"

@class NSOutputStream;

@interface PBStreamWriter : PBDataWriter {
	NSOutputStream *_stream;	// 8 = 0x8
}
@property(retain) NSOutputStream *stream;	// G=0x31035b05; S=0x31035b19; @synthesize=_stream
+ (id)writeProtoBuffers:(id)buffers toFile:(id)file;	// 0x31035851
- (id)initWithOutputStream:(id)outputStream;	// 0x31035795
- (void)dealloc;	// 0x310357dd
// declared property setter: - (void)setStream:(id)stream;	// 0x31035b19
// declared property getter: - (id)stream;	// 0x31035b05
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31035821
@end

