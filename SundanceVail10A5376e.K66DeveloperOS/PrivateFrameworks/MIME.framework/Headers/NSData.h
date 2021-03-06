/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x3698c321
- (id)mf_subdataWithRange:(NSRange)range;	// 0x3698c231
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x36994579
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x369946e9
- (id)mf_decodeModifiedBase64;	// 0x369946f1
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x369943fd
- (id)mf_decodeUuencoded;	// 0x369944e9
- (id)mf_encodeBase64;	// 0x369947e5
- (id)mf_encodeBase64HeaderData;	// 0x369947fd
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x369946f9
- (id)mf_encodeModifiedBase64;	// 0x369947f1
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x36996b81
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x369969f1
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x36996935
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x36996829
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x369967a1
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x36996875
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x369968bd
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x36996905
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x36996749
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x369964f1
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x36996715
- (id)mf_subdataToIndex:(unsigned)index;	// 0x36996701
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x369b4d0d
@end

