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
@property(assign, nonatomic) unsigned char flags;	// G=0x4bf81d; S=0x4bf82d; @synthesize=flags_
@property(assign, nonatomic) unsigned indexSize;	// G=0x4bf889; S=0x4bf899; @synthesize=indexSize_
@property(assign, nonatomic) unsigned short pid;	// G=0x4bf83d; S=0x4bf84d; @synthesize=pid_
@property(assign, nonatomic) unsigned long long startOffset;	// G=0x4bf85d; S=0x4bf875; @synthesize=startOffset_
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x4bf68d
- (id)description;	// 0x4bf781
// declared property getter: - (unsigned char)flags;	// 0x4bf81d
// declared property getter: - (unsigned)indexSize;	// 0x4bf889
// declared property getter: - (unsigned short)pid;	// 0x4bf83d
// declared property setter: - (void)setFlags:(unsigned char)flags;	// 0x4bf82d
// declared property setter: - (void)setIndexSize:(unsigned)size;	// 0x4bf899
// declared property setter: - (void)setPid:(unsigned short)pid;	// 0x4bf84d
// declared property setter: - (void)setStartOffset:(unsigned long long)offset;	// 0x4bf875
// declared property getter: - (unsigned long long)startOffset;	// 0x4bf85d
@end
