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
@property(assign, nonatomic) unsigned char flags;	// G=0x518e11; S=0x518e21; @synthesize=flags_
@property(assign, nonatomic) unsigned indexSize;	// G=0x518e7d; S=0x518e8d; @synthesize=indexSize_
@property(assign, nonatomic) unsigned short pid;	// G=0x518e31; S=0x518e41; @synthesize=pid_
@property(assign, nonatomic) unsigned long long startOffset;	// G=0x518e51; S=0x518e69; @synthesize=startOffset_
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x518c81
- (id)description;	// 0x518d75
// declared property getter: - (unsigned char)flags;	// 0x518e11
// declared property getter: - (unsigned)indexSize;	// 0x518e7d
// declared property getter: - (unsigned short)pid;	// 0x518e31
// declared property setter: - (void)setFlags:(unsigned char)flags;	// 0x518e21
// declared property setter: - (void)setIndexSize:(unsigned)size;	// 0x518e8d
// declared property setter: - (void)setPid:(unsigned short)pid;	// 0x518e41
// declared property setter: - (void)setStartOffset:(unsigned long long)offset;	// 0x518e69
// declared property getter: - (unsigned long long)startOffset;	// 0x518e51
@end

