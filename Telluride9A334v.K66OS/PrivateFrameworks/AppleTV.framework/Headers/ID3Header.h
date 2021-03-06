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
@property(assign, nonatomic) int dataOffset;	// G=0x333dbbf0; S=0x333dbc04; @synthesize
@property(assign, nonatomic) int headerSize;	// G=0x333dbc18; S=0x333dbc2c; @synthesize
- (id)initWithByteData:(char *)byteData withLength:(int)length;	// 0x333dbf50
- (id)initWithData:(id)data;	// 0x333dbe68
- (void)buildWithByteData:(char *)byteData withLength:(int)length;	// 0x333dbc40
// declared property getter: - (int)dataOffset;	// 0x333dbbf0
- (void)dealloc;	// 0x333dbf10
// declared property getter: - (int)headerSize;	// 0x333dbc18
// declared property setter: - (void)setDataOffset:(int)offset;	// 0x333dbc04
// declared property setter: - (void)setHeaderSize:(int)size;	// 0x333dbc2c
@end

