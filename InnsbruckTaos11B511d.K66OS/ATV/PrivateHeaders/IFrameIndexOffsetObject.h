/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface IFrameIndexOffsetObject : XXUnknownSuperclass {
	unsigned char flags_;	// 4 = 0x4
	unsigned short pid_;	// 6 = 0x6
	unsigned long long startOffset_;	// 8 = 0x8
	unsigned indexSize_;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned char flags;	// G=0x5ca08d; S=0x5ca09d; @synthesize=flags_
@property(assign, nonatomic) unsigned indexSize;	// G=0x5ca0f9; S=0x5ca109; @synthesize=indexSize_
@property(assign, nonatomic) unsigned short pid;	// G=0x5ca0ad; S=0x5ca0bd; @synthesize=pid_
@property(assign, nonatomic) unsigned long long startOffset;	// G=0x5ca0cd; S=0x5ca0e5; @synthesize=startOffset_
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x5c9efd
- (id)description;	// 0x5c9ff1
// declared property getter: - (unsigned char)flags;	// 0x5ca08d
// declared property getter: - (unsigned)indexSize;	// 0x5ca0f9
// declared property getter: - (unsigned short)pid;	// 0x5ca0ad
// declared property setter: - (void)setFlags:(unsigned char)flags;	// 0x5ca09d
// declared property setter: - (void)setIndexSize:(unsigned)size;	// 0x5ca109
// declared property setter: - (void)setPid:(unsigned short)pid;	// 0x5ca0bd
// declared property setter: - (void)setStartOffset:(unsigned long long)offset;	// 0x5ca0e5
// declared property getter: - (unsigned long long)startOffset;	// 0x5ca0cd
@end

