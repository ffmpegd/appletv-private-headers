/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFBase64Encoder : MFBaseFilterDataConsumer {
	char *_table;	// 12 = 0xc
	unsigned _left;	// 16 = 0x10
	unsigned char _leftovers[3];	// 20 = 0x14
	unsigned _line;	// 24 = 0x18
	unsigned _lineBreak;	// 28 = 0x1c
	BOOL _padChar;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL allowSlash;	// G=0x3509afd1; S=0x3509afa1; 
@property(assign, nonatomic) unsigned lineBreak;	// G=0x3509b015; S=0x3509b025; @synthesize=_lineBreak
@property(assign, nonatomic) BOOL padChar;	// G=0x3509aff5; S=0x3509b005; @synthesize=_padChar
- (id)initWithConsumers:(id)consumers;	// 0x3509b0b9
// declared property getter: - (BOOL)allowSlash;	// 0x3509afd1
- (int)appendData:(id)data;	// 0x3509b3f5
- (void)done;	// 0x3509b125
// declared property getter: - (unsigned long)lineBreak;	// 0x3509b015
// declared property getter: - (BOOL)padChar;	// 0x3509aff5
// declared property setter: - (void)setAllowSlash:(BOOL)slash;	// 0x3509afa1
// declared property setter: - (void)setLineBreak:(unsigned long)aBreak;	// 0x3509b025
// declared property setter: - (void)setPadChar:(BOOL)aChar;	// 0x3509b005
- (void)setStandardLineBreak;	// 0x3509b111
@end

