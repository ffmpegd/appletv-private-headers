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
	NSError *error;	// 12 = 0xc
}
@property(retain) NSError *error;	// G=0x3473154d; S=0x3473155d; converted property
+ (BOOL)validForJSON:(id)json depth:(unsigned)depth allowFragments:(BOOL)fragments;	// 0x34731609
- (id)init;	// 0x347314bd
- (void)dealloc;	// 0x347314fd
// converted property getter: - (id)error;	// 0x3473154d
- (unsigned)findEncodingFromData:(id)data withBOMSkipLength:(unsigned *)bomskipLength;	// 0x3473338d
- (id)parseData:(id)data options:(unsigned)options;	// 0x347334bd
- (id)parseStream:(id)stream options:(unsigned)options;	// 0x347335cd
- (id)parseUTF8JSONData:(id)data skipBytes:(unsigned)bytes options:(unsigned)options;	// 0x34733229
// converted property setter: - (void)setError:(id)error;	// 0x3473155d
@end
