/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString;

@interface VMUTraceSymbol : NSObject {
	unsigned long long address;	// 4 = 0x4
	NSString *name;	// 12 = 0xc
	NSString *library;	// 16 = 0x10
	NSString *filename;	// 20 = 0x14
	int lineNumber;	// 24 = 0x18
}
@property(readonly, retain) NSString *filename;	// G=0x34f7fda9; converted property
@property(readonly, retain) NSString *library;	// G=0x34f7fd99; converted property
@property(readonly, assign) int lineNumber;	// G=0x34f7fdb9; converted property
@property(readonly, retain) NSString *name;	// G=0x34f7fd89; converted property
- (id)initWithCString:(char *)cstring length:(long)length withLine:(int)line;	// 0x34f7fe89
- (id)initWithPC:(unsigned long long)pc withSymbolicator:(CSTypeRef)symbolicator;	// 0x34f801d5
// converted property getter: - (id)filename;	// 0x34f7fda9
// converted property getter: - (id)library;	// 0x34f7fd99
// converted property getter: - (int)lineNumber;	// 0x34f7fdb9
// converted property getter: - (id)name;	// 0x34f7fd89
- (BOOL)readFromFile:(FILE *)file;	// 0x34f7fdcd
- (void)writeToFile:(FILE *)file;	// 0x34f7fdc9
@end

