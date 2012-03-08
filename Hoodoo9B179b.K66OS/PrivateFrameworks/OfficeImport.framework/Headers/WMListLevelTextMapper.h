/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : NSObject {
@private
	NSMutableArray *m_tokens;	// 4 = 0x4
	int m_format;	// 8 = 0x8
	unsigned m_initNumber;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x32a24709
- (id)initWithText:(id)text format:(int)format;	// 0x327d5801
- (id)initWithText:(id)text format:(int)format initNumber:(int)number;	// 0x327d5825
- (void)dealloc;	// 0x327d5e59
- (id)listLevelTextforOutline:(id)outline;	// 0x327d5b5d
- (id)token:(unsigned)token;	// 0x32a24749
- (unsigned)tokenCount;	// 0x32a24729
@end
