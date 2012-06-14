/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ID3Header : NSObject {
@private
	int dataOffset;	// 4 = 0x4
	int headerSize;	// 8 = 0x8
}
@property(assign, nonatomic) int dataOffset;	// G=0x32c3b3ed; S=0x32c3b3fd; @synthesize
@property(assign, nonatomic) int headerSize;	// G=0x32c3b3cd; S=0x32c3b3dd; @synthesize
- (id)initWithByteData:(char *)byteData withLength:(int)length;	// 0x32c3b331
- (id)initWithData:(id)data;	// 0x32c3b29d
- (void)buildWithByteData:(char *)byteData withLength:(int)length success:(BOOL *)success;	// 0x32c3b051
// declared property getter: - (int)dataOffset;	// 0x32c3b3ed
- (void)dealloc;	// 0x32c3b3a1
// declared property getter: - (int)headerSize;	// 0x32c3b3cd
// declared property setter: - (void)setDataOffset:(int)offset;	// 0x32c3b3fd
// declared property setter: - (void)setHeaderSize:(int)size;	// 0x32c3b3dd
@end
