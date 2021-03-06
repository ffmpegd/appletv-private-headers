/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSError;

@interface _NSJSONReader : NSObject {
	id input;	// 4 = 0x4
	int kind;	// 8 = 0x8
	char *buf;	// 12 = 0xc
	unsigned options;	// 16 = 0x10
	NSError *error;	// 20 = 0x14
	unsigned bufLength;	// 24 = 0x18
	unsigned idx;	// 28 = 0x1c
	struct {
		char *location;
		unsigned length;
		id value;
		unsigned hash;
	} cache[256];	// 32 = 0x20
}
@property(retain) NSError *error;	// G=0x30341a1d; S=0x30341a2d; converted property
+ (BOOL)validForJSON:(id)json depth:(unsigned)depth allowFragments:(BOOL)fragments;	// 0x30341ad9
- (id)init;	// 0x30341971
- (void)dealloc;	// 0x303419cd
// converted property getter: - (id)error;	// 0x30341a1d
- (unsigned)findEncodingFromData:(id)data withBOMSkipLength:(unsigned *)bomskipLength;	// 0x30343f85
- (id)newJSONArray;	// 0x303432f9
- (id)newJSONBooleanOrNull;	// 0x30342f8d
- (id)newJSONNumber;	// 0x30342039
- (id)newJSONNumberAtPosition:(unsigned)position;	// 0x30341ed9
- (id)newJSONObject;	// 0x30343739
- (id)newJSONString;	// 0x30342755
- (id)newJSONValue;	// 0x3034321d
- (id)parseData:(id)data options:(unsigned)options;	// 0x303440e1
- (unsigned short)parseJSONUnicodePointAtLocation:(unsigned)location end:(unsigned)end;	// 0x30342665
- (id)parseStream:(id)stream options:(unsigned)options;	// 0x303441f9
- (id)parseUTF8JSONData:(id)data skipBytes:(unsigned)bytes;	// 0x30343e05
// converted property setter: - (void)setError:(id)error;	// 0x30341a2d
- (BOOL)skipJSONWhitespace;	// 0x303431ad
@end

