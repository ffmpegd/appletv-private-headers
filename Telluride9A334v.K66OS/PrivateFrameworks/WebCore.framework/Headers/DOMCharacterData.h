/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString;

@interface DOMCharacterData : DOMNode {
}
@property(copy) NSString *data;	// G=0x365c0d15; S=0x3681a8f5; 
@property(readonly, assign) unsigned length;	// G=0x3681a8c5; 
- (void)appendData:(id)data;	// 0x3681ad05
// declared property getter: - (id)data;	// 0x365c0d15
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x3681b1b5
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x3681b0e5
- (void)insertData:(unsigned)data :(id)arg2;	// 0x3681af99
- (void)insertData:(unsigned)data data:(id)data2;	// 0x3681ae4d
// declared property getter: - (unsigned)length;	// 0x3681a8c5
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x3681b3d5
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x3681b285
// declared property setter: - (void)setData:(id)data;	// 0x3681a8f5
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x3681aba1
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x3681aa3d
@end

