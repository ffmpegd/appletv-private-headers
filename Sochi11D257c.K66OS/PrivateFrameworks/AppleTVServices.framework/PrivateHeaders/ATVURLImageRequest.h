/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSURL, NSDictionary;
@protocol ATVImageDecrypter;

@interface ATVURLImageRequest : NSObject {
	NSURL *_url;	// 4 = 0x4
	NSDictionary *_headers;	// 8 = 0x8
	id<ATVImageDecrypter> _decrypter;	// 12 = 0xc
}
@property(retain, nonatomic) id<ATVImageDecrypter> decrypter;	// G=0x3043328d; S=0x3043329d; @synthesize=_decrypter
@property(retain, nonatomic) NSDictionary *headers;	// G=0x30433255; S=0x30433265; @synthesize=_headers
@property(retain, nonatomic) NSURL *url;	// G=0x3043321d; S=0x3043322d; @synthesize=_url
- (id)initWithURL:(id)url headers:(id)headers decrypter:(id)decrypter;	// 0x30433165
- (void).cxx_destruct;	// 0x304332b1
// declared property getter: - (id)decrypter;	// 0x3043328d
// declared property getter: - (id)headers;	// 0x30433255
// declared property setter: - (void)setDecrypter:(id)decrypter;	// 0x3043329d
// declared property setter: - (void)setHeaders:(id)headers;	// 0x30433265
// declared property setter: - (void)setUrl:(id)url;	// 0x3043322d
// declared property getter: - (id)url;	// 0x3043321d
@end

