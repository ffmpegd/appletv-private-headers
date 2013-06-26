/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBJsonUTF8Stream, NSString;

@interface SBJsonTokeniser : XXUnknownSuperclass {
	SBJsonUTF8Stream *_stream;	// 4 = 0x4
	NSString *_error;	// 8 = 0x8
}
@property(copy) NSString *error;	// G=0x531125; S=0x531139; @synthesize=_error
- (id)init;	// 0x530541
- (void)appendData:(id)data;	// 0x5305f1
- (void)dealloc;	// 0x5305a5
- (BOOL)decodeEscape:(unsigned short)escape into:(unsigned short *)into;	// 0x5306b9
- (BOOL)decodeHexQuad:(unsigned short *)quad;	// 0x53072d
// declared property getter: - (id)error;	// 0x531125
- (int)getNumberToken:(id *)token;	// 0x530ad5
- (int)getStringToken:(id *)token;	// 0x5307c1
- (int)getToken:(id *)token;	// 0x530eed
- (int)match:(const char *)match length:(unsigned)length retval:(int)retval;	// 0x530611
// declared property setter: - (void)setError:(id)error;	// 0x531139
@end
